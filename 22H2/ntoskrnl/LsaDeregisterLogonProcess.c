/*
 * XREFs of LsaDeregisterLogonProcess @ 0x14091C520
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl LsaDeregisterLogonProcess(HANDLE LsaHandle)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(HANDLE))(ExtensionTable + 8))(LsaHandle);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
