/*
 * XREFs of MiCheckLargePageSystemImage @ 0x140B616E0
 * Callers:
 *     MiCheckLargePageOk @ 0x140B38B30 (MiCheckLargePageOk.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckLargePageSystemImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // r10
  ULONG_PTR v11; // rcx
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // [rsp+48h] [rbp+10h] BYREF

  result = 0xFFFFF6FB40000000uLL;
  v4 = ((*(_QWORD *)(a2 + 48) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  v5 = (((*(_QWORD *)(a2 + 48) + (unsigned __int64)*(unsigned int *)(a2 + 64) - 1) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  while ( v4 <= v5 )
  {
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v4);
    v13 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v4, BugCheckParameter4);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    v8 = *(_QWORD *)(BugCheckParameter2 + 352);
    v9 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_BYTE *)(BugCheckParameter2 + 360) & 1) != 0 && v8 )
      v8 ^= BugCheckParameter2 + 352;
    v10 = 0LL;
    while ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 32);
      if ( v9 < v11 )
        goto LABEL_16;
      if ( v9 < *(_QWORD *)(v8 + 40) + v11 )
      {
        v10 = v8;
LABEL_16:
        v12 = *(_QWORD *)v8;
        goto LABEL_17;
      }
      v12 = *(_QWORD *)(v8 + 8);
LABEL_17:
      if ( (*(_BYTE *)(BugCheckParameter2 + 360) & 1) != 0 && v12 )
        v8 ^= v12;
      else
        v8 = v12;
    }
    if ( *(_QWORD *)(v10 + 32) + *(_QWORD *)(v10 + 40) < v9 + 512 )
      KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v9, 0LL);
    result = *(int *)(v10 + 24);
    if ( (_DWORD)result != 9 )
      KeBugCheckEx(0x1Au, 0x3030208uLL, BugCheckParameter2, v9, *(int *)(v10 + 24));
    v4 += 8LL;
  }
  return result;
}
