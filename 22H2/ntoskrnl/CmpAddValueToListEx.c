/*
 * XREFs of CmpAddValueToListEx @ 0x1406E0254
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076F54C (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x1408794D0 (CmpMergeKeyValues.c)
 *     CmpAddValueToList @ 0x14087B408 (CmpAddValueToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvAllocateCell @ 0x140656A94 (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1406DF1A0 (HvReallocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // rdx
  _DWORD *v16; // r8
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v17 = 0xFFFFFFFFLL;
  v8 = a3;
  v9 = *a5;
  v10 = 1;
  v11 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
  {
    if ( a6 )
      v10 = a6;
    v13 = HvAllocateCell(BugCheckParameter2, 4 * v10, a4, v18, &v17);
  }
  else
  {
    if ( v11 >= 0x64 )
    {
      v12 = 4 * ((v9 + 100) & 0xFFFFFF9C);
      if ( v12 > 0x1000 )
        v12 = (v12 + 4095) & 0xFFFFF000;
    }
    else
    {
      v12 = 4 * v11;
    }
    v13 = HvReallocateCell(BugCheckParameter2, a5[1], v12, 1, v18, &v17);
  }
  if ( v13 == -1 )
    return 3221225626LL;
  v14 = v18[0];
  a5[1] = v13;
  if ( (unsigned int)v9 > (unsigned int)v8 )
  {
    v16 = (_DWORD *)(v14 + 4 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v16-- = *(_DWORD *)(v14 + 4 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v8 );
  }
  *(_DWORD *)(v14 + 4 * v8) = a2;
  *a5 = v11;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  return 0LL;
}
