__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        struct _EX_RUNDOWN_REF *a6)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v11; // ebx
  struct _KPROCESS *Count; // rcx
  struct DXGGLOBAL *v13; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 1456));
  v11 = 0;
  if ( ExAcquireRundownProtection(a6 + 4) )
  {
    Count = (struct _KPROCESS *)a6[3].Count;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(Count, &ApcState);
    v11 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, struct _EX_RUNDOWN_REF *))a6[1].Count)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    KeUnstackDetachProcess(&ApcState);
    ExReleaseRundownProtection(a6 + 4);
  }
  v13 = DXGGLOBAL::GetGlobal();
  _InterlockedDecrement((volatile signed __int32 *)v13 + 368);
  ExReleasePushLockSharedEx((char *)v13 + 1456, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
