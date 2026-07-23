/*
 * XREFs of SmKmEtwAppendProductName @ 0x14059DFF8
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14059E410 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SmUniqueIdParseProductName @ 0x14059D4B0 (SmUniqueIdParseProductName.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CE34 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x14092D1FC (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int UniqueId; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // r15
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r10
  unsigned int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // r13d
  unsigned int v21; // esi
  __int64 v22; // rdi
  __int64 v23; // rax
  LONG_PTR result; // rax
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  void *v26; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v26 = 0LL;
  v4 = 0LL;
  v25 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v26, &v25);
    v3 = v25;
    v4 = v26;
  }
  v5 = a1[1] + *((unsigned int *)a1 + 6);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *((_DWORD *)a1 + 7) - *((_DWORD *)a1 + 6) - (_DWORD)v6;
  if ( v3 )
  {
    v8 = 256LL;
    v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 < 0x100 )
      v8 = v7;
    UniqueId = SmKmVolumeQueryUniqueId(v3, v9, v8);
  }
  else
  {
    UniqueId = -1073741275;
  }
  if ( UniqueId < 0 )
    *v6 = 0;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v6[v12] );
  v13 = &v6[(unsigned int)v12 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v13, v7 - 2 * (_DWORD)v12 - 2) < 0 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    do
      ++v11;
    while ( v13[v11] );
  }
  v14 = *((unsigned int *)a1 + 6);
  v15 = 2 * v11;
  v16 = a1[1];
  v17 = *((_DWORD *)a1 + 4);
  v18 = *a1;
  v19 = 2LL * v17;
  v20 = v14 + 2;
  *(_WORD *)(v14 + v16) = v11;
  v21 = v17 + 1;
  v22 = v16 + (unsigned int)(v14 + 2);
  *(_QWORD *)(v18 + 8 * v19) = v14 + v16;
  *(_QWORD *)(v18 + 8 * v19 + 8) = 2LL;
  if ( v13 )
    memmove((void *)(v16 + (unsigned int)(v14 + 2)), v13, v15);
  v23 = v18 + 16LL * v21;
  *(_DWORD *)(v23 + 12) = 0;
  *(_QWORD *)v23 = v22;
  *(_DWORD *)(v23 + 8) = v15;
  *((_DWORD *)a1 + 4) = v21 + 1;
  result = v15 + v20;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
