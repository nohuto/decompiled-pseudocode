void __fastcall ProcessUpdateKeyStateEvent(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rbp
  __int64 v6; // r14
  _BYTE *v7; // r13
  int i; // r12d
  int v9; // ebx
  char v10; // r15
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // r11
  int v14; // r8d
  int v15; // r8d
  char v16; // cl
  int v17; // r10d
  unsigned __int64 v18; // r8
  char v19; // r10
  _BYTE *v20; // rdi
  char v21; // cl
  __int64 v22; // r11
  int v23; // r8d
  int v24; // r8d
  char v25; // cl
  int v26; // r10d
  unsigned __int64 v27; // r8
  char v28; // r10
  _BYTE *v29; // rdi
  char v30; // cl
  __int64 v31; // r11
  int v32; // r8d
  int v33; // r8d
  char v34; // cl
  int v35; // r10d
  unsigned __int64 v36; // r8
  int v37; // r10d
  char v38; // r11
  _BYTE *v39; // rdi
  int v40; // eax
  int v41; // eax

  v4 = a3;
  v5 = (_BYTE *)a2;
  v6 = a1;
  v7 = (_BYTE *)a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v7 )
    {
      v9 = 0;
      v10 = 8 * i;
      do
      {
        a4 = (unsigned __int8)(v9 + v10);
        if ( ((unsigned __int8)(1 << ((v9 + v10) & 7)) & *(_BYTE *)((a4 >> 3) + v4)) != 0 )
        {
          v11 = (unsigned __int64)(unsigned int)a4 >> 2;
          v12 = 2 * (a4 & 3);
          v13 = v11 + v6;
          v14 = *(unsigned __int8 *)(v11 + v6 + 236);
          if ( ((unsigned __int8)(1 << v12) & v5[v11]) != 0 )
            v15 = v14 | (1 << v12);
          else
            v15 = v14 & ~(1 << v12);
          v16 = 2 * (a4 & 3) + 1;
          *(_BYTE *)(v13 + 236) = v15;
          if ( ((unsigned __int8)(1 << v16) & v5[v11]) != 0 )
            v17 = (unsigned __int8)v15 | (1 << v16);
          else
            v17 = (unsigned __int8)v15 & ~(1 << v16);
          *(_BYTE *)(v13 + 236) = v17;
        }
        if ( ((unsigned __int8)(1 << ((a4 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)(a4 + 1) >> 3) + v4)) != 0 )
        {
          v18 = (unsigned __int64)(unsigned __int8)(a4 + 1) >> 2;
          v19 = (a4 + 1) & 3;
          v20 = &v5[v18];
          v21 = 2 * v19;
          v22 = v18 + v6;
          v23 = *(unsigned __int8 *)(v18 + v6 + 236);
          if ( ((unsigned __int8)(1 << (2 * v19)) & *v20) != 0 )
            v24 = v23 | (1 << v21);
          else
            v24 = v23 & ~(1 << v21);
          v25 = 2 * v19 + 1;
          *(_BYTE *)(v22 + 236) = v24;
          if ( ((unsigned __int8)(1 << v25) & *v20) != 0 )
            v26 = (unsigned __int8)v24 | (1 << v25);
          else
            v26 = (unsigned __int8)v24 & ~(1 << v25);
          *(_BYTE *)(v22 + 236) = v26;
        }
        if ( ((unsigned __int8)(1 << ((a4 + 2) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)(a4 + 2) >> 3) + v4)) != 0 )
        {
          v27 = (unsigned __int64)(unsigned __int8)(a4 + 2) >> 2;
          v28 = (a4 + 2) & 3;
          v29 = &v5[v27];
          v30 = 2 * v28;
          v31 = v27 + v6;
          v32 = *(unsigned __int8 *)(v27 + v6 + 236);
          if ( ((unsigned __int8)(1 << (2 * v28)) & *v29) != 0 )
            v33 = v32 | (1 << v30);
          else
            v33 = v32 & ~(1 << v30);
          v34 = 2 * v28 + 1;
          *(_BYTE *)(v31 + 236) = v33;
          if ( ((unsigned __int8)(1 << v34) & *v29) != 0 )
            v35 = (unsigned __int8)v33 | (1 << v34);
          else
            v35 = (unsigned __int8)v33 & ~(1 << v34);
          *(_BYTE *)(v31 + 236) = v35;
        }
        LOBYTE(a4) = a4 + 3;
        a3 = (unsigned __int8)a4;
        a1 = a4 & 7;
        a2 = (unsigned int)(1 << a1);
        if ( ((unsigned __int8)a2 & *(_BYTE *)(((unsigned __int64)(unsigned __int8)a4 >> 3) + v4)) != 0 )
        {
          v36 = (unsigned __int64)(unsigned __int8)a4 >> 2;
          v37 = a4 & 3;
          v38 = 2 * v37;
          v39 = &v5[v36];
          a4 = v36 + v6;
          v40 = *(unsigned __int8 *)(v36 + v6 + 236);
          if ( ((unsigned __int8)(1 << (2 * v37)) & v5[v36]) != 0 )
            v41 = v40 | (1 << v38);
          else
            v41 = v40 & ~(1 << v38);
          a1 = (unsigned int)(2 * v37 + 1);
          *(_BYTE *)(a4 + 236) = v41;
          a3 = (unsigned __int8)v41;
          a2 = (unsigned int)(1 << (2 * v37 + 1));
          if ( ((unsigned __int8)a2 & *v39) != 0 )
            LODWORD(a3) = (unsigned __int8)v41 | (1 << (2 * v37 + 1));
          else
            LODWORD(a3) = (unsigned __int8)v41 & ~(1 << (2 * v37 + 1));
          *(_BYTE *)(a4 + 236) = a3;
        }
        v9 += 4;
      }
      while ( v9 < 8 );
    }
    ++v7;
  }
  ++*((_DWORD *)gpsi + 1746);
  if ( v5 != (_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13992) )
  {
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
}
