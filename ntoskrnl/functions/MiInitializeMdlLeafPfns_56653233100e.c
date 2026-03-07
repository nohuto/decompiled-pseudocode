char __fastcall MiInitializeMdlLeafPfns(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r12d
  __int64 v8; // rcx
  char result; // al
  bool v10; // bp
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  char v15; // al
  char v16; // al
  __int64 v17; // rax
  bool v18; // zf
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v5 = a5;
  v8 = 1LL;
  result = a5 < 0;
  v10 = a5 < 0 && (a5 & 0x3001000) != 0;
  if ( v10 )
    v8 = a2;
  v11 = a1 + 48 * a2;
  if ( v11 != a1 )
  {
    v12 = 48 * v8;
    v13 = (a3 >> 3) & 0xFFFFFFFFFFELL;
    do
    {
      v11 -= v12;
      a5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( _bittest64((const signed __int64 *)(v11 + 40), 0x28u) && !v10 )
      {
        v15 = *(_BYTE *)(v11 + 34);
        *(_BYTE *)(v11 + 35) &= 0xF8u;
        v16 = v15 & 0xEF;
        *(_BYTE *)(v11 + 34) = v16;
        if ( v11 != a1 )
        {
          *(_BYTE *)(v11 + 34) = v16 ^ (v16 ^ *(_BYTE *)(a1 + 34)) & 7;
          *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1 + 16);
        }
        v17 = *(_QWORD *)(v11 + 40);
        *(_BYTE *)(v11 + 36) &= 0xFCu;
        v22 = 0LL;
        v23 = v17 & 0xFFFFFEFFFFFFFFFFuLL;
        v20 = 0LL;
        v21 = 0LL;
        *(_QWORD *)(v11 + 40) = v17 & 0xFFFFFEFFFFFFFFFFuLL;
        *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
        v18 = *(_WORD *)(v11 + 32) == 2;
        *(_WORD *)(v11 + 32) -= 2;
        if ( v18 )
        {
          _InterlockedOr(v19, 0);
          *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
        }
      }
      *(_QWORD *)(v11 + 8) = 0xFFFFF68000000000uLL;
      v14 = *(_QWORD *)(v11 + 40) & 0x7FFFFF0000000000LL;
      *(_QWORD *)(v11 + 16) = a4;
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 40) = v14 | 0x3FFFFFFFFELL;
      *(_QWORD *)v11 = v13;
      MiInitializeMdlPfn(v11, v5);
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v11 != a1 );
  }
  return result;
}
