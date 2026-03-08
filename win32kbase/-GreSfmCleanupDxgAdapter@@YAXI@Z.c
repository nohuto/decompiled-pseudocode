/*
 * XREFs of ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0092140
 * Callers:
 *     GreSfmCleanupPresentHistory @ 0x1C0091F60 (GreSfmCleanupPresentHistory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSfmCleanupDxgAdapter(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  if ( (*(int (__fastcall **)(_QWORD))(DxgkWin32kInterface + 136))(v2) >= 0 )
  {
    v6 = DxDdGetDxgkWin32kInterface(v5, v4);
    (*(void (__fastcall **)(_QWORD))(v6 + 112))(v2);
  }
}
