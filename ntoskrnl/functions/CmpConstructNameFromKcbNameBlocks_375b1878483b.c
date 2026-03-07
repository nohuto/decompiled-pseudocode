__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned __int16 v5; // di
  unsigned int v6; // ebx
  __int64 Pool; // rax
  __int64 v8; // r14
  unsigned __int16 v9; // di
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // di
  unsigned __int8 *v13; // r10
  _WORD *v14; // rcx

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v5 = v4;
  if ( v4 <= 0xFFFF )
  {
    Pool = CmpAllocatePool(256LL, v4 + 16LL, 1649298755LL);
    v6 = 0;
    v8 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = v5;
      *(_WORD *)(Pool + 2) = v5;
      *(_QWORD *)(Pool + 8) = Pool + 16;
      v9 = v5 >> 1;
      while ( v3 )
      {
        while ( (*(_DWORD *)(v3 + 184) & 0x40000) != 0 && *(_QWORD *)(v3 + 72) )
          v3 = *(_QWORD *)(v3 + 72);
        v10 = *(_QWORD *)(v3 + 80);
        v11 = *(_WORD *)(v10 + 24);
        if ( (*(_DWORD *)v10 & 1) == 0 )
          v11 >>= 1;
        v12 = v9 - v11;
        v13 = (unsigned __int8 *)(v10 + 26);
        v14 = (_WORD *)(*(_QWORD *)(v8 + 8) + 2LL * v12);
        if ( (*(_DWORD *)v10 & 1) != 0 )
          CmpCopyCompressedName(v14, 2 * v11, v13, v11);
        else
          memmove(v14, v13, 2LL * v11);
        v9 = v12 - 1;
        *(_WORD *)(*(_QWORD *)(v8 + 8) + 2LL * v9) = 92;
        v3 = *(_QWORD *)(v3 + 72);
      }
      *a2 = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
