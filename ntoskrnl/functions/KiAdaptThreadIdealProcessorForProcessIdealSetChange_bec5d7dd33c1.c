char __fastcall KiAdaptThreadIdealProcessorForProcessIdealSetChange(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _WORD *a4,
        _BYTE *a5,
        _DWORD *a6)
{
  _BYTE *v6; // r15
  char v7; // r12
  unsigned __int64 v8; // rax
  _DWORD *v13; // r14
  __int64 v14; // r8
  _WORD *v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // r11
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rdi
  bool v26; // zf
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF

  v6 = a5;
  v7 = 0;
  v29 = 0LL;
  LODWORD(v8) = *(_DWORD *)(a2 + 120);
  *a5 = 0;
  v28 = 0LL;
  if ( (v8 & 1) != 0 || *(_BYTE *)(a2 + 125) )
    return v8;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( *(_QWORD *)(a2 + 64) );
  }
  LODWORD(v8) = *(_DWORD *)(a2 + 120);
  v13 = a6;
  if ( (v8 & 1) != 0 || *(_BYTE *)(a2 + 125) )
    goto LABEL_33;
  LODWORD(v8) = *(_DWORD *)(a2 + 116);
  if ( (v8 & 8) != 0 )
  {
    v14 = *(unsigned __int16 *)(a2 + 560);
    v15 = *(_WORD **)(a2 + 552);
  }
  else
  {
    v14 = *(unsigned __int16 *)(a2 + 584);
    v15 = *(_WORD **)(a2 + 576);
  }
  WORD4(v28) = v14;
  v16 = (unsigned __int16)v14 >= *v15 ? 0LL : *(_QWORD *)&v15[4 * v14 + 4];
  *(_QWORD *)&v28 = v16;
  if ( (unsigned __int16)v14 >= *a3 )
  {
    v17 = 0LL;
  }
  else
  {
    LOBYTE(v8) = v14;
    v17 = *(_QWORD *)&a3[4 * (unsigned __int16)v14 + 4];
  }
  if ( (unsigned __int16)v14 >= *a4 )
  {
    v18 = 0LL;
  }
  else
  {
    LOBYTE(v8) = v14;
    v18 = *(_QWORD *)&a4[4 * (unsigned __int16)v14 + 4];
  }
  if ( v17 == v18 )
    goto LABEL_33;
  if ( (v17 & v18) == v18 )
  {
    v19 = 1;
LABEL_27:
    v20 = v18;
    goto LABEL_28;
  }
  if ( (v17 & v18) != v17 )
  {
    v19 = 3;
    goto LABEL_27;
  }
  v19 = 2;
  v20 = v17 ^ v18;
LABEL_28:
  v21 = *(unsigned int *)(a2 + 196);
  v29 = v20;
  v22 = KiProcessorBlock[v21];
  LOBYTE(v8) = (v16 & v20) != 0;
  if ( (((v20 & *(_QWORD *)(v22 + 200)) == 0) & (unsigned __int8)v8) != 0 )
  {
    if ( v19 != 2
      || (v7 = 1,
          v23 = ((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL),
          v24 = *a6 % ((unsigned int)((0x101010101010101LL * ((v23 + (v23 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24),
          v8 = (0x101010101010101LL
              * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                  + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
          v24 >= (unsigned int)v8) )
    {
      v25 = (unsigned __int16)KeSelectIdealProcessor(
                                (__int64)&v28,
                                (_WORD *)(a1 + 644 + 2LL * (unsigned __int16)v14),
                                &v29,
                                1u);
      KiSetIdealProcessorThread(a2, v25, 0, 0LL);
      *(_QWORD *)(a2 + 64) = 0LL;
      LOBYTE(v8) = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[v25] + 192) + 138LL) != *(_WORD *)(*(_QWORD *)(v22 + 192)
                                                                                            + 138LL);
      v26 = (xmmword_140D1EAD0 & 0x8000000) == 0;
      *v6 = v8;
      if ( !v26 )
        LOBYTE(v8) = EtwTraceIdealProcessor(a2, 1351LL, (unsigned int)v21, (unsigned int)v25, v28);
      goto LABEL_34;
    }
  }
LABEL_33:
  *(_QWORD *)(a2 + 64) = 0LL;
LABEL_34:
  if ( v7 )
  {
    LODWORD(v8) = ExGenRandom(1);
    *v13 = v8;
  }
  return v8;
}
