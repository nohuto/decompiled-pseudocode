char __fastcall sub_1400188D0(__int64 a1, __int16 *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int16 v7; // r9
  __int16 v8; // cx
  __int16 v10; // cx
  unsigned __int16 v11; // r8
  __int16 v12; // dx
  __int16 v13; // cx

  *(_QWORD *)a3 = 0LL;
  v4 = *((_DWORD *)a2 + 2);
  v7 = *(_WORD *)(a3 + 2) ^ (*(_WORD *)(a3 + 2) ^ ((_WORD)v4 << 7)) & 0x80;
  *(_WORD *)(a3 + 2) = v7;
  if ( (v4 & 1) == 0 )
    return 0;
  *(_WORD *)a3 = a2[6];
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)(v4 >> 1) << 6)) & 0x40;
  *(_WORD *)(a3 + 2) = v8;
  if ( ((v4 >> 20) & 0x800) != 0 )
  {
    *(_WORD *)(a3 + 2) = v8 | 1;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 656), 1uLL);
  }
  else
  {
    sub_140018A54(a1);
    v10 = *(_WORD *)(a3 + 2) ^ (*(_WORD *)(a3 + 2) ^ ((unsigned __int16)(v4 >> 7) << 8)) & 0x100;
    *(_WORD *)(a3 + 2) = v10;
    v11 = *a2;
    v12 = v10 ^ ((unsigned __int8)v10 ^ ((unsigned __int16)*a2 >> 14)) & 2;
    *(_WORD *)(a3 + 2) = v12;
    if ( (v12 & 2) == 0 )
    {
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(v11 >> 2)) & 4 ^ ((unsigned __int8)(v12 ^ (v12 ^ (v11 >> 2)) & 4) ^ (unsigned __int8)(v11 >> 3)) & 8;
      *(_WORD *)(a3 + 2) = (v11 >> 4) & 0x20 ^ (v13 ^ ((unsigned __int8)(v11 >> 4) ^ (unsigned __int8)v13) & 0x10) & 0xF9DF | ~(2 * (v4 >> 20)) & (((v4 >> 5) & 1) << 10) | ~((unsigned __int16)(v4 >> 20) >> 1) & (((v4 >> 6) & 1) << 9);
    }
  }
  return 1;
}
