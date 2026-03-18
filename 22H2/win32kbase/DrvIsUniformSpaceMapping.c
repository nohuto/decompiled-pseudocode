/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x1C00628A0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C006283C (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0063EA0 (NtUserGetUniformSpaceMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d

  v2 = SGDGetSessionState(a1);
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 1320LL) && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v3;
}
