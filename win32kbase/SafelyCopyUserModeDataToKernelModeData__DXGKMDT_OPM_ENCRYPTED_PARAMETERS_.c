/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C0187BEC
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0189970 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(_OWORD *a1, _OWORD *a2)
{
  __int64 v2; // rax

  if ( (unsigned __int64)(a2 + 16) > MmUserProbeAddress || a2 + 16 < a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v2 = 2LL;
  do
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1 += 8;
    *(a1 - 1) = a2[7];
    a2 += 8;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
