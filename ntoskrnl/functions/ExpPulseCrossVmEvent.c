__int64 __fastcall ExpPulseCrossVmEvent(__int64 a1, __int64 a2)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  unsigned int v5; // ebx
  struct _EX_RUNDOWN_REF *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v7);
  if ( ExtensionHostForCrossVmObject )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(ExtensionHostForCrossVmObject + 40))(a1, a2);
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
