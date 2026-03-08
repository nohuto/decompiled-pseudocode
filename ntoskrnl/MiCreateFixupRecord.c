/*
 * XREFs of MiCreateFixupRecord @ 0x140851534
 * Callers:
 *     MiScanRelocationPage @ 0x1407F2ED0 (MiScanRelocationPage.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

__int64 __fastcall MiCreateFixupRecord(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _WORD *a6, _QWORD *a7)
{
  unsigned __int64 v7; // rdi
  __int64 v9; // rbx
  __int16 v10; // r13
  unsigned int v11; // r12d
  int v12; // r14d
  _WORD *Pool; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  v7 = a3;
  if ( (a3 + 4096) >> 12 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 3221225477LL;
  v9 = 0LL;
  HIDWORD(v14) = 0;
  v10 = *a6 >> 12;
  v11 = 4096 - a4;
  if ( (a3 & 0xFFF) < 4096 - a4 )
  {
    v12 = a5;
    if ( a5 == 4 )
    {
      LODWORD(v14) = *(_DWORD *)(a3 + a2);
      v9 = v14;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + a2);
    }
  }
  else
  {
    *a6 &= 0xFFFu;
    v12 = a5;
  }
  Pool = MiAllocatePool(256, 0x20uLL, 0x72466D4Du);
  if ( !Pool )
    return 3221225626LL;
  Pool[8] = v10;
  *((_DWORD *)Pool + 3) = v7 + v12;
  if ( (v7 & 0xFFF) < v11 )
  {
    *((_DWORD *)Pool + 2) = v7;
    *((_QWORD *)Pool + 3) = v9;
    *(_QWORD *)(*a7 + 8 * (v7 >> 12)) |= 1uLL;
  }
  else
  {
    *((_DWORD *)Pool + 2) = (v7 & 0xFFFFF000) + 4096;
  }
  *(_QWORD *)(*a7 + 8 * ((unsigned __int64)*((unsigned int *)Pool + 3) >> 12)) |= 1uLL;
  *(_QWORD *)Pool = a7[2];
  a7[2] = Pool;
  return 0LL;
}
