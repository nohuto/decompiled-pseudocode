/*
 * XREFs of MiFindPageFileWriteCluster @ 0x1406374E0
 * Callers:
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     RtlFindLongestRunClearCapped @ 0x1405A5C20 (RtlFindLongestRunClearCapped.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140636AEC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140639084 (MiRefPageFileSpaceBitmaps.c)
 *     MiSetPageFileAllocationBits @ 0x1406391A8 (MiSetPageFileAllocationBits.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int FreePageFileSpace; // esi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned int *v14; // r14
  int v15; // r13d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int *v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rbx
  unsigned int LongestRunClearCapped; // eax
  __int64 v22; // r9
  _DWORD *v23; // rax
  _DWORD *result; // rax
  _DWORD **v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]
  _OWORD v28[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-10h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+48h] BYREF
  _DWORD *v31; // [rsp+B8h] [rbp+50h]
  unsigned int *v32; // [rsp+C0h] [rbp+58h]
  int v33; // [rsp+C8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v4 = *a3;
  v29 = 0LL;
  v26 = 0LL;
  LODWORD(v27) = 0;
  v7 = (unsigned __int64)*a2 << 32;
  memset(v28, 0, sizeof(v28));
  v8 = MiSwizzleInvalidPte(v7);
  v9 = *(_QWORD *)(a1 + 248);
  v30 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | v8 & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v30, v4, v10 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v12 = v30;
    if ( qword_140C657C0 && (v30 & 0x10) == 0 )
      v12 = v30 & ~qword_140C657C0;
    v13 = HIDWORD(v12);
  }
  else
  {
    v14 = (unsigned int *)(a1 + 124);
    if ( a4 )
    {
      v20 = *(_QWORD *)(a1 + 112);
      v18 = (unsigned int *)&v26;
      v15 = 0;
      v19 = v31;
      LODWORD(v26) = *(_DWORD *)a1;
      v27 = *(_QWORD *)(v20 + 16);
      v25 = (_DWORD **)v20;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 128);
      v16 = *v14;
      if ( *v14 < dword_140D1D1DC && *(_DWORD *)(a1 + 132) != v15 )
      {
        if ( v16 >= (unsigned int)dword_140D1D1DC >> 3 )
        {
          v17 = v16 + (v16 >> 1);
          v16 = dword_140D1D1DC;
          if ( v17 < dword_140D1D1DC )
            v16 = v17;
        }
        else
        {
          v16 *= 2;
        }
        *v14 = v16;
      }
      if ( v4 >= v16 )
        v4 = v16;
      if ( (*(_WORD *)(a1 + 204) & 0x800) != 0 )
        v4 = 1;
      v25 = (_DWORD **)v28;
      MiRefPageFileSpaceBitmaps(a1, v28);
      v18 = (unsigned int *)v28 + 2;
      v19 = (_DWORD *)(a1 + 120);
    }
    LODWORD(v30) = *v19;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v18, v4, (unsigned int *)&v30);
    FreePageFileSpace = LongestRunClearCapped;
    LODWORD(v13) = v30;
    if ( v33 )
    {
      MiSetPageFileAllocationBits(a1, (unsigned int)v30, LongestRunClearCapped, v22);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v4 )
        {
          *v14 = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v15;
        }
        *(_DWORD *)(a1 + 120) = v13 + LongestRunClearCapped;
      }
      v23 = MiDerefPageFileSpaceBitmaps(a1, v25, 0);
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
    }
  }
  *v32 = FreePageFileSpace;
  result = v31;
  *v31 = v13;
  return result;
}
