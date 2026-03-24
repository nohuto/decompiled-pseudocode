/*
 * XREFs of GreSetHwndPresentFlags @ 0x1C02700B4
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C01FD750 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C011915C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreSetHwndPresentFlags(HWND a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v8, a1, 0LL);
    v6 = v8;
    if ( v8 )
    {
      if ( v8 != -88 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v6 + 88);
      }
      v4 = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 168) + 212LL) = a2;
      if ( v6 != -88 )
      {
        GreReleasePushLockShared(v6 + 88);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v4 = -1073741811;
    }
    if ( v6 )
      DEC_SHARE_REF_CNT(v6, v5);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return v4;
}
