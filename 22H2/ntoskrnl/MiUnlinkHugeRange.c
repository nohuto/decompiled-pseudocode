/*
 * XREFs of MiUnlinkHugeRange @ 0x140533A9C
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403F2FCC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403F3074 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3428 (MiMarkHugePfnGood.c)
 *     MiGetHugeRangeFromNode @ 0x140532994 (MiGetHugeRangeFromNode.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiUnlinkHugeRange(__int64 a1, int a2)
{
  __int64 v2; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r12
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // r11d
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // r10
  unsigned __int64 *v15; // r9
  __int64 result; // rax
  unsigned __int64 v17; // rcx

  v2 = *(_QWORD *)(a1 + 6160);
  v4 = (unsigned int)dword_140C4DF80[0];
  v5 = *(_QWORD *)&a2 & 0x3FFFFLL;
  v6 = MiSearchNumaNodeTable((*(_QWORD *)&a2 & 0x3FFFFLL) << 18);
  v7 = qword_140C4E670;
  v8 = *((unsigned int *)v6 + 2);
  v9 = *(_QWORD *)(qword_140C4E670 + 8 * v5);
  if ( (v9 & 0x1C0000) == 0x80000 )
  {
    v10 = 1;
    v11 = 4200LL;
    v12 = v4 + (unsigned int)(2 * v4 * v8);
  }
  else
  {
    if ( (v9 & 0x1C0000) == 0x40000 )
    {
      v10 = 0;
      v13 = *((_DWORD *)v6 + 2);
      v11 = 4192LL;
    }
    else
    {
      v13 = (unsigned __int16)KeNumberNodes;
      v10 = 5;
      v11 = 4232LL;
    }
    v12 = (unsigned int)(2 * v4 * v13);
  }
  v14 = (__int64 *)(v2 + 8 * v12);
  if ( v10 != 5 )
    v14 += v5 % v4;
  v15 = (unsigned __int64 *)v14;
  if ( ((v9 >> 21) & 0x3FFFF) != 0 )
    v15 = (unsigned __int64 *)(qword_140C4E670 + 8 * ((v9 >> 21) & 0x3FFFF));
  *v15 = v9 & 0x3FFFF | *v15 & 0xFFFFFFFFFFFC0000uLL;
  if ( (v9 & 0x3FFFF) != 0 )
    v14 = (__int64 *)(qword_140C4E670 + 8 * (v9 & 0x3FFFF));
  result = *v14 ^ (v9 ^ *v14) & 0x7FFFE00000LL;
  *v14 = result;
  if ( *(_BYTE *)(a1 + 4829) == 1 || v10 )
    v17 = v9 & 0xFFFFFFFFFFFC0000uLL | 1;
  else
    v17 = v9 & 0xFFFFFFFFFFFC0000uLL;
  *(_QWORD *)(v7 + 8 * v5) = v17 & 0xFFFFFFFFFFE3FFFFuLL | 0xC0000;
  if ( v10 != 5 )
  {
    --*(_QWORD *)(v11 + *(_QWORD *)(a1 + 16) + 4544 * v8);
    --*(_QWORD *)(a1 + 6168);
  }
  return result;
}
