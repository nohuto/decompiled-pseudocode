/*
 * XREFs of NtCreateProcessEx @ 0x1409AAC70
 * Callers:
 *     NtCreateProcess @ 0x1409AABE0 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x140858F60 (PspCreateProcess.c)
 */

NTSTATUS __fastcall NtCreateProcessEx(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        void *a6,
        void *a7,
        void *a8)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v12; // rcx

  if ( !a4 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a1;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  return PspCreateProcess(a1, a2, a3, a4, PreviousMode, a5, a6, a7, a8);
}
