/*
 * XREFs of ExpCrossVmWnfPush @ 0x140753680
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int64 ExtensionTable; // rax
  unsigned int v11; // ebx

  v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( a2 )
    v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  ExtensionTable = ExGetExtensionTable(v6);
  if ( ExtensionTable )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))(ExtensionTable + 112))(
            0LL,
            a2,
            a3,
            a4,
            a5,
            a6);
    ExReleaseExtensionTable(v6);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
