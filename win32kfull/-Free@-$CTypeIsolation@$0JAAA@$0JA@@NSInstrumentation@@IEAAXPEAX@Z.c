void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(__int64 a1, void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *i; // rsi
  __int64 *v7; // r14
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  ULONG v11; // esi
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          ExReleasePushLockSharedEx(v4, 0LL, v5);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3LL, a2);
          return;
        }
        v7 = (__int64 *)i[4];
        v8 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::CheckAllocationStatus(v7, a2);
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
          {
            v10 = *v7;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v10, 0LL);
            v11 = ((unsigned __int16)a2 & 0xFFFu) / 0x90
                + 28 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)v7 + 4) ^ *((_DWORD *)v7 + 2))) >> 12);
            RtlClearBit((PRTL_BITMAP)(v7[2] ^ v7[3]), v11);
            memset_0(a2, 0, 0x90uLL);
            *((_DWORD *)v7 + 8) = v11;
            ExReleasePushLockExclusiveEx(v10, 0LL);
            KeLeaveCriticalRegion();
            ExReleasePushLockSharedEx(v4, 0LL, v12);
            KeLeaveCriticalRegion();
            return;
          }
          v13 = v9 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              continue;
            v14 = 2LL;
          }
          else
          {
            v14 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v14, a2);
        }
      }
    }
    memset_0(a2, 0, 0x90uLL);
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), a2);
  }
}
