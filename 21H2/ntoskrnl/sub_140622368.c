/*
 * XREFs of sub_140622368 @ 0x140622368
 * Callers:
 *     sub_140643AE0 @ 0x140643AE0 (sub_140643AE0.c)
 * Callees:
 *     sub_14064270C @ 0x14064270C (sub_14064270C.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140622368(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_14064270C(a1, a2, 0xFFFFFFFFLL);
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
