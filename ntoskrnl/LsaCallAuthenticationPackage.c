/*
 * XREFs of LsaCallAuthenticationPackage @ 0x1409C61A0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LsaCallAuthenticationPackage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v11; // ebx
  __int64 (__fastcall **ExtensionTable)(__int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64); // rax

  v11 = -1073741822;
  ExtensionTable = (__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v11 = (*ExtensionTable)(a1, a2, a3, a4, a5, a6, a7);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v11;
}
