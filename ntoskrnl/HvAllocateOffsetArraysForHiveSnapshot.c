/*
 * XREFs of HvAllocateOffsetArraysForHiveSnapshot @ 0x140A22D18
 * Callers:
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvAllocateOffsetArraysForHiveSnapshot(__int64 a1, _DWORD *a2, PVOID **a3, unsigned int *a4)
{
  PVOID **v4; // rdi
  unsigned int v5; // r14d
  unsigned int *v6; // rbx
  __int64 v7; // rsi
  __int64 Pool2; // rax
  PVOID *v9; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned int v13; // r15d
  unsigned int *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rax
  PVOID *v18; // rdi

  v4 = a3;
  v5 = *(_DWORD *)(a1 + 280) + 4096;
  v6 = a4;
  v7 = (v5 >> 20) + 1;
  if ( (v5 & 0xFFFFF) == 0 )
    v7 = v5 >> 20;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(24 * v7), 538987843LL);
  v9 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    v11 = 0;
    v12 = 0;
    v13 = v5;
    if ( (_DWORD)v7 )
    {
      v14 = (unsigned int *)(Pool2 + 16);
      while ( 1 )
      {
        v15 = 0x100000;
        if ( v13 < 0x100000 )
          v15 = v13;
        v16 = ExAllocatePool2(256LL, v15, 538987843LL);
        *((_QWORD *)v14 - 1) = v16;
        if ( !v16 )
          break;
        *(v14 - 4) = v11;
        v13 -= v15;
        *v14 = v15;
        v11 += v15;
        v14 += 6;
        if ( ++v12 >= (unsigned int)v7 )
        {
          v6 = a4;
          v4 = a3;
          goto LABEL_12;
        }
      }
      v10 = -1073741801;
      v18 = v9 + 1;
      do
      {
        if ( *v18 )
        {
          ExFreePoolWithTag(*v18, 0);
          *v18 = 0LL;
        }
        v18 += 3;
        --v7;
      }
      while ( v7 );
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
LABEL_12:
      if ( v6 )
        *v6 = v5;
      v10 = 0;
      *v4 = v9;
      *a2 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v10;
}
