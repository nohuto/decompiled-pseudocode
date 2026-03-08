/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0189970
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C0187BEC (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0188D94 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(unsigned __int64 a1, _OWORD *a2)
{
  __int64 v4; // rbp
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *Pool2; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v6; // rdi
  int v7; // ebx

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  Pool2 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePool2(258LL, 256LL, 1297108807LL);
  v6 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v7 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(Pool2, a2);
  if ( v7 >= 0 )
    v7 = COPM::SetSigningKeyAndSequenceNumbers(*(void ***)(v4 + 3824), a1, v6);
  ExFreePoolWithTag(v6, 0x4D504F47u);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return 0LL;
}
