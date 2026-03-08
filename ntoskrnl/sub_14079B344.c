/*
 * XREFs of sub_14079B344 @ 0x14079B344
 * Callers:
 *     sub_1406AF488 @ 0x1406AF488 (sub_1406AF488.c)
 * Callees:
 *     sub_1406B0060 @ 0x1406B0060 (sub_1406B0060.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14079B344(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_1406B0060(a1, (__int64)a2, -1);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      ExFreePoolWithTag(a2, 0);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
