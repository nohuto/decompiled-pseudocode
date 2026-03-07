__int64 __fastcall ExpAcquireCrossVmMutant(__int64 a1, __int64 a2, char a3)
{
  __int64 ExtensionHostForCrossVmObject; // rax
  __int64 v7; // r8
  unsigned int v8; // ebx
  struct _EX_RUNDOWN_REF *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, &v10);
  if ( ExtensionHostForCrossVmObject )
  {
    LOBYTE(v7) = a3;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(ExtensionHostForCrossVmObject + 80))(a1, a2, v7);
    ExReleaseExtensionTable(v10);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v8;
}
