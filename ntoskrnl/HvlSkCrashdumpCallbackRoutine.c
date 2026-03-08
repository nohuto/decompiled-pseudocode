/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x1405457B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char HvlSkCrashdumpCallbackRoutine()
{
  void *v0; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx
  ULONG v5; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v0 = qword_140C5F008;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( qword_140C5F008 && (*((_DWORD *)qword_140C5F008 + 1) & 1) != 0 )
  {
    if ( *((_DWORD *)qword_140C5F008 + 43) == CurrentPrcb->Number )
    {
      LOBYTE(CurrentPrcb) = 1;
      HvlEnlightenments &= 0x2000u;
      ((void (__fastcall *)(struct _KPRCB *))off_140C01BB0[0])(CurrentPrcb);
      ((void (__fastcall *)(__int64))off_140C01AA8[0])(1LL);
      KiHypervisorInitiatedCrashDump = 1;
      v2 = *((_QWORD *)v0 + 4);
      v3 = *((_QWORD *)v0 + 3);
      v4 = *((_QWORD *)v0 + 2);
      v5 = *((_DWORD *)v0 + 2);
      BugCheckParameter4 = *((_QWORD *)v0 + 5);
      PoAllProcIntrDisabled = 1;
      KeBugCheckEx(v5, v4, v3, v2, BugCheckParameter4);
    }
    while ( 1 )
      _mm_pause();
  }
  return 0;
}
