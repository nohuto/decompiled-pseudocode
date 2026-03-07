char __fastcall HalpMceHandlerCore(__int64 a1, char a2, __int64 a3)
{
  _BYTE *v6; // r15
  char v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 *McaPcrContext; // rax
  void *v13; // rbp
  __int64 v14; // rdx
  int v15; // eax
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  v18 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a3, 378LL, 0LL);
  if ( !a2 || (v9 = v8, LOBYTE(v9) = v8 & 3, (v8 & 3) != 1) && (v8 & 4) != 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( !HalpMcaWheaReady
      || (McaPcrContext = (__int64 *)HalpGetMcaPcrContext(a3), (v10 = McaPcrContext) == 0LL)
      || (v11 = *McaPcrContext, v6 = (_BYTE *)McaPcrContext[4], v13 = (void *)(*McaPcrContext + 80), !*McaPcrContext) )
    {
      v13 = &HalpMceBackupErrorBuffer;
    }
    while ( (int)HalpMcaReadErrorPresence(v9, a3) >= 0 )
    {
      while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLock) )
        _mm_pause();
      if ( (int)HalpMcaReadError(16, (__int64)v13, &v17, a1, a3) < 0 )
      {
        KxReleaseSpinLock(&HalpMceLock);
        return v7;
      }
      if ( v11 )
      {
        v15 = v17;
        *(_DWORD *)(v11 + 12) = 0;
        *(_DWORD *)(v11 + 20) = v15;
      }
      if ( a1 )
      {
        if ( v6 )
        {
          if ( v10 )
          {
            LOBYTE(v14) = *v6;
            *((_DWORD *)v10 + 10) = 0;
            LOBYTE(v14) = v14 & 0x10;
            if ( !(unsigned __int8)WheaIsAltContextAllocPossible(a1, v14, &v18) )
              *((_DWORD *)v10 + 10) = v18;
          }
        }
      }
      HalpProcessorInMceHandler = KeGetPcr()->Prcb.Number;
      HalpMcaReportError(v11, (__int64)v13, a3);
      if ( v10 )
        *((_DWORD *)v10 + 10) = 0;
      HalpProcessorInMceHandler = 2048;
      HalpMcaClearError((__int64)v13, a3);
      if ( McaWmiCallback )
        LOBYTE(HalpClockWorkUnion) = 1;
      KxReleaseSpinLock(&HalpMceLock);
      v7 = 1;
    }
  }
  return v7;
}
