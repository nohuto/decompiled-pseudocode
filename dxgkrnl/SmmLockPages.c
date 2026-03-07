__int64 __fastcall SmmLockPages(void *a1, unsigned __int64 a2, struct _MDL **a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v6; // rdi

  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    _InterlockedExchangeAdd64(&qword_1C013BD00, a2);
    *a3 = v6;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C013BD18);
    WdLogSingleEntry1(6LL, a2);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate MDL of size %u", a2, 0LL, 0LL, 0LL, 0LL);
    *a3 = 0LL;
    return 3221225495LL;
  }
}
