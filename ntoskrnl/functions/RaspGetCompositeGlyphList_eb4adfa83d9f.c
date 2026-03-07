__int64 __fastcall RaspGetCompositeGlyphList(
        __int64 a1,
        int a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r14
  _QWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 *v14; // r12
  __int64 Memory; // rax
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int16 v18; // r12
  unsigned int v19; // ebx
  char v20; // ah
  int GlyphData; // r15d
  _WORD *v22; // rcx
  _WORD *v23; // rdx
  _QWORD *v25; // rbx
  __int64 v26; // rax
  _WORD v27[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v28[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v29; // [rsp+38h] [rbp-18h] BYREF
  __int16 v30; // [rsp+3Ch] [rbp-14h] BYREF
  int v31; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v32; // [rsp+48h] [rbp-8h] BYREF
  __int16 v33; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v34; // [rsp+A0h] [rbp+50h]
  _WORD *v35; // [rsp+A8h] [rbp+58h]

  v35 = a4;
  v34 = a3;
  v27[0] = 0;
  v30 = 0;
  v28[0] = 0;
  *a6 = 0;
  v31 = 0;
  v33 = 0;
  v32 = 0LL;
  *a5 = 0;
  *a4 = 0;
  *a3 = 0;
  if ( a2 == -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  v10 = v9 + a2;
  LOWORD(v29) = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v11, (unsigned int)(v9 + a2), &v29);
  if ( (v29 & 0x8000u) == 0 )
    return 3221225485LL;
  v12 = a7;
  v13 = v10 + 10;
  v29 = v13;
  a7[1] = a7;
  *v12 = v12;
  while ( 1 )
  {
    v14 = a8;
    Memory = RaspAllocateMemory(0x2AuLL, a8);
    v16 = Memory;
    if ( !Memory )
    {
      GlyphData = -1073741670;
      goto LABEL_27;
    }
    *(_OWORD *)Memory = 0LL;
    *(_OWORD *)(Memory + 16) = 0LL;
    *(_QWORD *)(Memory + 32) = 0LL;
    *(_WORD *)(Memory + 40) = 0;
    v17 = (__int64 *)v12[1];
    if ( (_QWORD *)*v17 != v12 )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)v16 = v12;
    *(_QWORD *)(v16 + 8) = v17;
    *v17 = v16;
    v12[1] = v16;
    FioFwReadUshortAtOffset(v11, v13, &v30);
    v18 = v30;
    v19 = v13 + 2;
    *(_WORD *)(v16 + 24) = v30;
    FioFwReadUshortAtOffset(v11, v19, v28);
    *(_WORD *)(v16 + 26) = v28[0];
    FioFwReadUshortAtOffset(v11, v19 + 2, v27);
    if ( (v18 & 1) != 0 )
    {
      *(_WORD *)(v16 + 28) = v27[0];
      FioFwReadUshortAtOffset(v11, v19 + 4, v27);
      v13 = v19 + 6;
      *(_WORD *)(v16 + 30) = v27[0];
    }
    else
    {
      v13 = v19 + 4;
      v20 = HIBYTE(v27[0]);
      *(_BYTE *)(v16 + 29) = v27[0];
      *(_BYTE *)(v16 + 28) = v20;
    }
    if ( (v18 & 8) == 0 )
    {
      if ( (v18 & 0x40) != 0 )
      {
        FioFwReadUshortAtOffset(v11, v13, &v33);
        *(_WORD *)(v16 + 32) = v33;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v33);
        *(_WORD *)(v16 + 34) = v33;
      }
      else
      {
        if ( (v18 & 0x80u) == 0 )
          goto LABEL_18;
        FioFwReadUshortAtOffset(v11, v13, &v33);
        *(_WORD *)(v16 + 32) = v33;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v33);
        v13 += 4;
        *(_WORD *)(v16 + 34) = v33;
        FioFwReadUshortAtOffset(v11, v13, &v33);
        *(_WORD *)(v16 + 36) = v33;
        FioFwReadUshortAtOffset(v11, v13 + 2, &v33);
        *(_DWORD *)(v16 + 38) = v33;
      }
      v13 += 4;
      goto LABEL_18;
    }
    FioFwReadUshortAtOffset(v11, v13, &v33);
    v13 += 2;
    *(_WORD *)(v16 + 32) = v33;
LABEL_18:
    GlyphData = RaspMapGlyphIndexToLocation(a1, v28[0], &v31);
    if ( GlyphData < 0 )
      break;
    GlyphData = RaspLoadGlyphData(a1, v31, (int)v28, (__int64 *)&v32, a8);
    if ( GlyphData < 0 )
      break;
    v22 = v34;
    *(_QWORD *)(v16 + 16) = v32;
    v23 = v32;
    *v22 += v32[12];
    *v35 += *v23;
    if ( (v18 & 0x20) == 0 )
    {
      if ( (v18 & 0x100) != 0 )
      {
        FioFwReadUshortAtOffset(v11, v13, a5);
        v13 += 2;
      }
      *a6 = v13 - v29;
      return (unsigned int)GlyphData;
    }
  }
  v14 = a8;
LABEL_27:
  while ( 1 )
  {
    v25 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 == v12 )
      return (unsigned int)GlyphData;
    if ( (_QWORD *)v25[1] != v12 )
      goto LABEL_31;
    v26 = *v25;
    if ( *(_QWORD **)(*v25 + 8LL) != v25 )
      goto LABEL_31;
    *v12 = v26;
    *(_QWORD *)(v26 + 8) = v12;
    RaspFreeMemory(v25[2], v14);
    RaspFreeMemory((__int64)v25, v14);
  }
}
