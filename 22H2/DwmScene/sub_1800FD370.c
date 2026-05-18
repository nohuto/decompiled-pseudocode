/*
 * XREFs of sub_1800FD370 @ 0x1800FD370
 * Callers:
 *     sub_1800FE67C @ 0x1800FE67C (sub_1800FE67C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800E4758 @ 0x1800E4758 (sub_1800E4758.c)
 */

void __fastcall sub_1800FD370(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _DWORD *v4; // rax
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_180010B0C((__int64)a1, a2);
    *a1 = v4;
    a1[2] = &v4[4 * v2];
    do
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 1065353216;
      v4 += 4;
      --v2;
    }
    while ( v2 );
    v5 = 0LL;
    a1[1] = v4;
    sub_1800E4758(&v5);
  }
}
