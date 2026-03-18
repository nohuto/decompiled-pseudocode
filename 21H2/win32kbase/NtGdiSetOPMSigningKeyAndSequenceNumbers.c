/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00CE460
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00CE75C (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C00CEF38 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 Pool2; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v5; // rdi
  COPM *v6; // rcx
  int v7; // ebx

  Pool2 = ExAllocatePool2(258LL, 256LL);
  v5 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)Pool2;
  if ( Pool2 )
  {
    v7 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(Pool2, a2);
    if ( v7 >= 0 )
      v7 = COPM::SetSigningKeyAndSequenceNumbers(v6, a1, v5);
    ExFreePoolWithTag(v5, 0x4D504F47u);
    if ( v7 >= 0 )
      return 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
