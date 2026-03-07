__int64 __fastcall PiCMEnumerateSubKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // ebx
  char *Pool2; // rdi
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // esi
  int v14; // edx
  unsigned int v15; // ebx
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-8h]

  v6 = a6;
  KeyHandle = 0LL;
  LODWORD(a6) = 0;
  v19 = 0;
  *v6 = 0;
  v18 = 0LL;
  v9 = 0;
  Pool2 = 0LL;
  v11 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)&v18);
  if ( (v11 & 0x80000000) != 0 )
    return v11;
  if ( DWORD1(v18) || !a3 || a4 < 0x14 || a4 - 20 < 2 )
    goto LABEL_26;
  Pool2 = (char *)ExAllocatePool2(256LL, a4 - 20, 879783504LL);
  if ( !Pool2 )
  {
    LODWORD(v12) = -1073741670;
    goto LABEL_27;
  }
  v13 = DWORD2(v18);
  v9 = (a4 - 20) >> 1;
  a5 = v9;
  switch ( DWORD2(v18) )
  {
    case 1:
      v14 = 5;
LABEL_14:
      LODWORD(v12) = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, v14, (__int64)&KeyHandle);
      if ( (int)v12 < 0 )
        goto LABEL_27;
      v15 = HIDWORD(v18);
      LODWORD(v12) = RegRtlEnumKey(KeyHandle, HIDWORD(v18), Pool2, &a5);
      if ( (_DWORD)v12 == -2147483622 )
      {
        if ( v13 != 3 )
          goto LABEL_21;
        if ( !CmIsStateSeparationEnabled() )
          goto LABEL_21;
        LODWORD(v12) = PnpCtxRegQueryInfoKey(v12, (int)KeyHandle, (int)&a6, 0, 0LL, 0LL, 0LL);
        if ( (int)v12 < 0 )
          goto LABEL_21;
        if ( v15 < (unsigned int)a6 )
        {
          LODWORD(v12) = -1073741595;
LABEL_21:
          v9 = a5;
          goto LABEL_27;
        }
        LODWORD(v12) = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 9, (__int64)&KeyHandle);
        if ( (int)v12 < 0 )
          goto LABEL_21;
        LODWORD(v12) = RegRtlEnumKey(KeyHandle, v15 - (unsigned int)a6, Pool2, &a5);
      }
      if ( (int)v12 >= 0 )
      {
        v11 = PiCMReturnBufferResultData(v12, 2 * a5, 0, Pool2, 2 * a5, v19, a3, a4, v6);
LABEL_28:
        ExFreePoolWithTag(Pool2, 0x34706E50u);
        return v11;
      }
      goto LABEL_21;
    case 2:
      v14 = 7;
      goto LABEL_14;
    case 3:
      v14 = 8;
      goto LABEL_14;
  }
LABEL_26:
  LODWORD(v12) = -1073741811;
LABEL_27:
  v11 = PiCMReturnBufferResultData(v12, 2 * v9, 0, 0LL, 0, v19, a3, a4, v6);
  if ( Pool2 )
    goto LABEL_28;
  return v11;
}
