/*
 * XREFs of FindNSObj @ 0x1C004B09C
 * Callers:
 *     FindNSObj @ 0x1C004B09C (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C004B2F4 (FindNSObjMainNoLock.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     FindNSObj @ 0x1C004B09C (FindNSObj.c)
 *     GetObjectPathNoLock @ 0x1C004BBC8 (GetObjectPathNoLock.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  int v7; // r13d
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  void *v12; // rdi
  __int64 ObjectPathNoLock; // rax
  size_t v14; // rsi
  _BYTE *v15; // rbp
  __int64 v16; // rcx
  char *v17; // r15
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD **v24; // r14
  _QWORD *v25; // rdi
  unsigned int NSObj; // eax
  unsigned int Size; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v29 = a1;
  v6 = a6;
  v7 = a4;
  v9 = -1073741772;
  if ( !a2 || (a6 & 1) != 0 && a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3 )
    return v9;
  if ( a1 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_28:
    v24 = (_QWORD **)(a2 + 24);
    v25 = *v24;
    while ( v24 != v25 )
    {
      NSObj = FindNSObj(a1, (_DWORD)v25, a3, v7, a5, v6);
      v9 = NSObj;
      if ( NSObj != -1073741772 )
      {
        if ( NSObj )
          break;
      }
      v25 = (_QWORD *)*v25;
      v6 = a6;
      LODWORD(a3) = v30;
      a1 = v29;
    }
    return v9;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
    return 3221225621LL;
  v12 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, v11);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v14 = -1LL;
  v15 = (_BYTE *)ObjectPathNoLock;
  v16 = -1LL;
  do
    ++v16;
  while ( *(_BYTE *)(v16 + ObjectPathNoLock) );
  Size = v16 + *(_DWORD *)(a5 + 24) + 1;
  v17 = (char *)HeapAlloc(gpheapGlobal, 1381258056LL, Size);
  if ( v17 && v12 )
  {
    memset(v12, 0, v11);
    memset(v17, 0, Size);
    v18 = *(_DWORD *)(a5 + 24);
    if ( v18 )
      memmove(v17, *(const void **)(a5 + 32), v18);
    v19 = *(_QWORD *)(a5 + 8);
    v20 = *(_DWORD *)(v19 + 24);
    if ( v20 )
      memmove(v12, *(const void **)(v19 + 32), v20);
    do
      ++v14;
    while ( v15[v14] );
    memmove(&v17[*(unsigned int *)(a5 + 24)], v15, v14);
    v21 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)v12 + v21) = 48;
    else
      *((_BYTE *)v12 + v21) = 49;
    if ( *(_DWORD *)(a5 + 24) )
      HeapFree(*(_QWORD *)(a5 + 32));
    v22 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v22 + 24) )
      HeapFree(*(_QWORD *)(v22 + 32));
    ++*(_QWORD *)(a5 + 16);
    v9 = 0;
    *(_DWORD *)(a5 + 24) = Size;
    v23 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 32) = v17;
    *(_QWORD *)(v23 + 32) = v12;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = v11;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    a1 = v29;
    LODWORD(a3) = v30;
    v6 = a6;
    goto LABEL_28;
  }
  return 3221225626LL;
}
