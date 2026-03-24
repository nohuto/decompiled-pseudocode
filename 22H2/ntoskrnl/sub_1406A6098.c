/*
 * XREFs of sub_1406A6098 @ 0x1406A6098
 * Callers:
 *     sub_1406C7A80 @ 0x1406C7A80 (sub_1406C7A80.c)
 * Callees:
 *     sub_1406C66AC @ 0x1406C66AC (sub_1406C66AC.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406A6098(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_1406C66AC(a1, a2, 0xFFFFFFFFLL);
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
