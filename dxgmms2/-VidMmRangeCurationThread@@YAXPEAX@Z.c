void __fastcall VidMmRangeCurationThread(char *a1)
{
  PRKPROCESS *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  char *v5; // [rsp+58h] [rbp-50h] BYREF
  char v6; // [rsp+60h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  _InterlockedExchange((volatile __int32 *)a1 + 385, 0);
  v6 = 0;
  v5 = a1 + 1328;
  if ( a1 == (char *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v5);
  v2 = (PRKPROCESS *)*((_QWORD *)a1 + 1);
  ++*((_QWORD *)a1 + 197);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((char **)a1 + 195) == a1 + 1560 && *((char **)a1 + 193) == a1 + 1544 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 396, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)a1 + 384, 0);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 396, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)(a1 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(a1 + 1440));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)a1 + 384, 0);
  }
  KeSetEvent(*((PRKEVENT *)a1 + 199), 0, 0);
LABEL_6:
  if ( v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v5);
}
