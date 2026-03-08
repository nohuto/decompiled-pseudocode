/*
 * XREFs of ??1ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@AEAA@XZ @ 0x18028F07C
 * Callers:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802948BC (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::~ReferencedGitCookie(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1803E2E60 + 32LL))(qword_1803E2E60);
  return result;
}
