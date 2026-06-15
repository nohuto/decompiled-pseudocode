/*
 * XREFs of sub_1800B5788 @ 0x1800B5788
 * Callers:
 *     sub_1800B5B00 @ 0x1800B5B00 (sub_1800B5B00.c)
 * Callees:
 *     sub_180065874 @ 0x180065874 (sub_180065874.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B4610 @ 0x1800B4610 (sub_1800B4610.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     sub_1800B56D8 @ 0x1800B56D8 (sub_1800B56D8.c)
 *     sub_1800B5704 @ 0x1800B5704 (sub_1800B5704.c)
 */

int __fastcall sub_1800B5788(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  int v4; // eax
  _QWORD *v5; // r15
  _QWORD *v6; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  SIZE_T v13; // rdi
  __int64 v14; // rbp
  HANDLE ProcessHeap; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = (_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 8) = v4;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 56);
  LOBYTE(v4) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 26) = v4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 128);
  v9 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v9;
  v10 = sub_1800B5704(*(_QWORD *)(a2 + 16));
  v11 = sub_1800B56D8(*(_QWORD *)(a2 + 48)) + v10;
  v12 = sub_1800B56D8(*(_QWORD *)(a2 + 120));
  v13 = v12 + v11;
  if ( !*(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 72) < v13 )
  {
    v12 = (__int64)sub_180065874(8u, v13);
    v14 = v12;
    if ( v12 )
    {
      ProcessHeap = GetProcessHeap();
      LODWORD(v12) = HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = v14;
      *(_QWORD *)(a1 + 72) = v13;
    }
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
  {
    v17 = v16 + *(_QWORD *)(a1 + 72);
    v18 = sub_1800B4610(v16, v17, *(_BYTE **)(a2 + 48), v3);
    v19 = sub_1800B4610(v18, v17, *(_BYTE **)(a2 + 120), v5);
    v20 = (void *)sub_1800B4684(v19, v17, *(_WORD **)(a2 + 16), v6);
    LODWORD(v12) = (unsigned int)memset(v20, 0, v17 - (_QWORD)v20);
  }
  return v12;
}
