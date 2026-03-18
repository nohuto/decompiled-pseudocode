/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x1C00B1D90
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x1C00B1C60 (NtUserGetUniformSpaceMapping.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C00B1D2C (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( gbUniformSpaceDpiMode && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v1;
}
