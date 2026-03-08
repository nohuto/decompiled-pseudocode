/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x140A1E144
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArray(unsigned int *a1, _DWORD *a2, void ***a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v9; // rbp
  void **Pool2; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rcx
  void **v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  void *v17; // rcx

  v3 = *a1;
  v4 = 0LL;
  if ( !(_DWORD)v3 )
    return 3221225485LL;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  *a2 = 0;
  v9 = (unsigned int)v3;
  Pool2 = (void **)ExAllocatePool2(256LL, 8 * v3, 909397315LL);
  *a3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v3 == 1 )
  {
    v11 = *((_QWORD *)a1 + 1);
    v12 = *(_QWORD *)(v11 + 56);
    if ( (*(_DWORD *)(v12 + 48) & 0x80u) == 0 )
    {
      *Pool2 = *(void **)(v12 + 72);
      v13 = **a3;
    }
    else
    {
      *Pool2 = *(void **)(v12 + 56);
      v13 = (void *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
    }
    ObfReferenceObject(v13);
  }
  else if ( (_DWORD)v3 )
  {
    do
    {
      v14 = *a3;
      v15 = *(_QWORD *)(v4 * 8 + *((_QWORD *)a1 + 1));
      v16 = *(_QWORD *)(v15 + 56);
      if ( (*(_DWORD *)(v16 + 48) & 0x80u) == 0 )
      {
        v14[v4] = *(void **)(v16 + 72);
        v17 = (*a3)[v4];
      }
      else
      {
        v14[v4] = *(void **)(v16 + 56);
        v17 = (void *)(*(_QWORD *)(*(_QWORD *)(v15 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
      }
      ObfReferenceObject(v17);
      ++v4;
      --v9;
    }
    while ( v9 );
  }
  *a2 = v3;
  return 0LL;
}
