/*
 * XREFs of sub_1406C3788 @ 0x1406C3788
 * Callers:
 *     sub_14064ECC0 @ 0x14064ECC0 (sub_14064ECC0.c)
 * Callees:
 *     sub_14064D8EC @ 0x14064D8EC (sub_14064D8EC.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C3788(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_14064D8EC(a1, (__int64)a2, -1);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x42524157u);
      ExFreePoolWithTag(a2, 0x42524157u);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
