/*
 * XREFs of ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ @ 0x1800DD86C
 * Callers:
 *     ?OnEndDraw@CDrawListBatchManager@@IEAAXXZ @ 0x1800929D4 (-OnEndDraw@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B8A24 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 */

void __fastcall ShrinkableReferenceArray<CDrawListEntryBatch *>::Optimize(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // r15
  void *v9; // rbx
  int v10; // ecx
  void *v11[2]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v1 > 0x10 && *(_DWORD *)(a1 + 36) < v1 / 3 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v4 = v1 >> 1;
    *(_OWORD *)v11 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((__int64)v11, 8u, v4, 1, 0LL) >= 0 )
    {
      v5 = 0LL;
      if ( v3 > v4 )
      {
        v6 = v3;
        v3 = v4;
        v5 = v6 - v4;
        if ( (_DWORD)v5 )
        {
          v7 = 0LL;
          v8 = (unsigned int)v5;
          do
          {
            CDrawListEntry::Release((CDrawListEntry *)(*(_QWORD *)(v7 + *(_QWORD *)a1) + 8LL));
            v7 += 8LL;
            --v8;
          }
          while ( v8 );
        }
      }
      v9 = v11[0];
      memcpy_0(v11[0], (const void *)(*(_QWORD *)a1 + 8 * v5), 8LL * v3);
      v10 = v13;
      v11[0] = *(void **)a1;
      v13 = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 20) = v10;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v11);
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = v3;
}
