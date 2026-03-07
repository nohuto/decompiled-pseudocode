__int64 __fastcall ExpCreateCrossVmMutant(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  struct _EX_RUNDOWN_REF *v8; // rdi
  unsigned __int64 ExtensionTable; // rax
  int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  v15 = 0LL;
  v8 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( !a6 )
    v8 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  ExtensionTable = ExGetExtensionTable(v8);
  if ( ExtensionTable )
  {
    v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, __int64, __int64, char))(ExtensionTable + 72))(
            &v15,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( v13 >= 0 )
      *a1 = v15;
    ExReleaseExtensionTable(v8);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v13;
}
