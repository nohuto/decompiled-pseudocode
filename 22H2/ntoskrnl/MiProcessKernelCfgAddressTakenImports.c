/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x140A440DC
 * Callers:
 *     MiProcessKernelCfgImage @ 0x140367C60 (MiProcessKernelCfgImage.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A4402C (MiMarkKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgAddressTakenImports(PVOID *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    if ( ((_DWORD)a1[13] & 0x2100) == 0x2000 )
    {
      result = MiMarkKernelCfgAddressTakenImports((__int64)a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
      return 0LL;
  }
  return result;
}
