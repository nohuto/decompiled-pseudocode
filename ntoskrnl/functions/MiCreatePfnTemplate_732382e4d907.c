__int64 __fastcall MiCreatePfnTemplate(__int64 a1, __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r14
  __int16 v10; // r15
  char v11; // cl
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 34) = 64;
  MiSetPfnTbFlushStamp(a1, 0, 0);
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  v6 = MiDetermineNewPfnHeatState(0, 3u);
  *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(v6 != 0) & 0xFFFFFFFDLL);
  v9 = (unsigned int)(v8 - 2);
  v10 = v8 - 1;
  if ( (a2 & 0x100) != 0 )
  {
    MiSetPfnIdentity(a1, v8);
LABEL_10:
    v11 = 6;
    goto LABEL_5;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    goto LABEL_10;
  }
  if ( ((unsigned __int8)a2 & (unsigned __int8)v10) == 0 )
  {
    v11 = (v8 - 2) | (4 * ((v8 - 2) & a2));
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 40) = v7 | 0x20000000000000LL;
  if ( (a2 & 4) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(a1 + 32) = v8 - 2;
    *(_QWORD *)(a1 + 24) = v9 | v16;
    goto LABEL_10;
  }
  v11 = v8 - 1;
LABEL_5:
  v12 = *(_QWORD *)(a1 + 40) ^ (v3 << 43);
  *(_BYTE *)(a1 + 34) = v11 | *(_BYTE *)(a1 + 34) & 0xF8;
  result = 0x1FF80000000000LL;
  *(_QWORD *)(a1 + 40) ^= v12 & 0x1FF80000000000LL;
  if ( (a2 & 0x180) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v9 | *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
    v14 = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(a1 + 16) = v14;
    if ( (a2 & 0x100) != 0 )
      *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(v14, v9);
    *(_QWORD *)(a1 + 40) = v15 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    MiSetPageTablePfnBuddy(a1, (__int64)KeGetCurrentThread()->ApcState.Process, v9);
    result = 0x4000000000000000LL;
    *(_WORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  return result;
}
