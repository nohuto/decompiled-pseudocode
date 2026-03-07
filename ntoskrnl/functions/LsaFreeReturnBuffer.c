NTSTATUS __stdcall LsaFreeReturnBuffer(PVOID Buffer)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(PVOID))(ExtensionTable + 16))(Buffer);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
