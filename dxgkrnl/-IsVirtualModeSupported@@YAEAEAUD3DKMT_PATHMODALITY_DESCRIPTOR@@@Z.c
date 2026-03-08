/*
 * XREFs of ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02F7878
 * Callers:
 *     ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C02F77A8 (-IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsVirtualModeSupported(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  char v1; // dl

  v1 = 0;
  if ( _bittest64((const signed __int64 *)a1, 0x33u) )
    return *((_BYTE *)a1 + 129) != 0;
  return v1;
}
