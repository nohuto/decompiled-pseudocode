unsigned __int64 __fastcall MiUnlinkHugeRange(__int64 a1, int a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  char v6; // r12
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 result; // rax
  unsigned int v19; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16208);
  v3 = (unsigned int)dword_140C65800[0];
  v5 = a2 & 0x3FFFFF;
  v19 = MiPageToChannel(v5 << 18);
  v6 = 0;
  v7 = 1;
  v8 = *((unsigned int *)MiSearchNumaNodeTable(v5 << 18) + 2);
  v9 = (unsigned __int64 *)(qword_140C67A70 + 8 * v5);
  v10 = *v9;
  v11 = *v9 & 7;
  if ( v11 == 2 )
  {
    if ( (v10 & 0x800000000000000LL) != 0 )
    {
      MiPageListCollision(qword_140C67A70 + 8 * v5, 1, 1u);
      v10 = *v9;
    }
    v12 = v3 + (unsigned int)(2 * v3 * v8);
  }
  else if ( v11 == 1 )
  {
    if ( (v10 & 0x800000000000000LL) != 0 )
    {
      MiPageListCollision(qword_140C67A70 + 8 * v5, 1, 1u);
      v10 = *v9;
      v6 = 1;
    }
    v7 = 0;
    v12 = (unsigned int)(2 * v3 * v8);
  }
  else
  {
    v7 = 5;
    v12 = (unsigned int)v8 + 2 * (_DWORD)v3 * (unsigned __int16)KeNumberNodes;
  }
  v13 = (_QWORD *)(v2 + 8 * v12);
  if ( v7 != 5 )
    v13 += v5 % v3;
  if ( ((v10 >> 37) & 0x3FFFFF) != 0 )
    v14 = (_QWORD *)(qword_140C67A70 + 8 * ((v10 >> 37) & 0x3FFFFF));
  else
    v14 = v13;
  v15 = (v10 >> 15) & 0x3FFFFF;
  *v14 ^= (*v14 ^ v10) & 0x1FFFFF8000LL;
  if ( v15 )
    v13 = (_QWORD *)(qword_140C67A70 + 8 * v15);
  v16 = *v13 ^ v10;
  v17 = v10 & 0x7FFF;
  *v13 ^= v16 & 0x7FFFFE000000000LL;
  if ( *(_BYTE *)(a1 + 15781) || v6 || v7 )
    v17 |= 0x10000uLL;
  result = 0xFFFFFF800003FFFBuLL;
  *v9 = v17 & 0xFFFFFF800001FFF8uLL | 0x20003;
  if ( v7 != 5 )
  {
    result = v19;
    --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 25408 * v8 + 8 * (v19 + 4LL * v7) + 22864);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 16216));
  }
  return result;
}
