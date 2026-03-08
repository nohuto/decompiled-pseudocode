/*
 * XREFs of BRUSHOBJ_hGetColorTransform @ 0x1C0267CA0
 * Callers:
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02CA7D0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02D02C0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall BRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo)
{
  __int64 v1; // rcx
  char v2; // dl
  __int64 v3; // rax
  void *v4; // rbx

  if ( !pbo )
    return 0LL;
  if ( (pbo[3].iSolidColor & 2) == 0 )
    return 0LL;
  v1 = *(_QWORD *)&pbo[2].flColorType;
  if ( !v1 )
    return 0LL;
  v2 = 14;
  v3 = HmgShareLockCheck(v1, v2);
  if ( !v3 )
    return 0LL;
  v4 = *(void **)(v3 + 24);
  DEC_SHARE_REF_CNT(v3);
  return v4;
}
