void __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  int v15; // r14d
  unsigned __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  __int64 i; // rcx
  __int64 v20; // r13
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // r14d
  __int64 v24; // rbx
  int v25; // esi
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // ebx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  unsigned __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+88h] [rbp+20h]

  if ( (*(_BYTE *)(a1 + 207) & 1) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    v6 = v5 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 24;
    v37 = v6;
    v7 = a1 + 160;
    v8 = 0LL;
    v9 = v5 + (a2 != 0 ? 24LL : 8LL);
    v10 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v10 )
      v10 ^= v7;
    v11 = *(_BYTE *)(v7 + 8) & 1;
    v12 = 0LL;
    while ( v10 )
    {
      if ( a3 < *(_DWORD *)(v10 + 24) )
      {
        v13 = *(_QWORD *)v10;
        v12 = v10;
      }
      else
      {
        if ( a3 <= *(_DWORD *)(v10 + 24) )
          goto LABEL_14;
        v13 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v13 )
        v10 ^= v13;
      else
        v10 = v13;
    }
    v10 = v12;
LABEL_14:
    v14 = v10 - 24;
    v15 = *(_DWORD *)(v10 - 24 + 48);
    if ( v15 == a3 + 1 && v15 != -1 )
    {
      ++*(_DWORD *)(v14 + 52);
      v8 = v10 - 24;
      *(_DWORD *)(v14 + 48) = a3;
    }
    v16 = *(_QWORD *)v10;
    v17 = 0;
    v18 = v10;
    if ( *(_QWORD *)v10 )
    {
      for ( ; *(_QWORD *)(v16 + 8); v16 = *(_QWORD *)(v16 + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v10 + 16); ; i = *(_QWORD *)(v16 + 16) )
      {
        v16 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v16 || *(_QWORD *)(v16 + 8) == v18 )
          break;
        v18 = v16;
      }
    }
    if ( v16 )
    {
      v20 = v16 - 24;
      v21 = *(_DWORD *)(v16 - 24 + 52);
      v22 = v21 + *(_DWORD *)(v16 - 24 + 48);
      v17 = v22 - 1;
      LODWORD(v36) = v22 - 1;
      if ( v22 == a3 )
      {
        if ( *(_DWORD *)(v14 + 48) == a3 )
        {
          *(_DWORD *)(v20 + 52) = v21 + *(_DWORD *)(v14 + 52);
          *(_DWORD *)(v14 + 52) = 0;
          RtlRbRemoveNode(a1 + 144, v10 - 24);
          RtlRbRemoveNode(a1 + 160, v10);
          v34 = *(unsigned __int64 **)(a1 + 184);
          if ( *v34 != a1 + 176 )
            __fastfail(3u);
          v17 = v36;
          *(_QWORD *)v14 = a1 + 176;
          v8 = v20 | 1;
          *(_QWORD *)(v14 + 8) = v34;
          *v34 = v14;
          *(_QWORD *)(a1 + 184) = v14;
        }
        else
        {
          v8 = v20;
          *(_DWORD *)(v20 + 52) = v21 + 1;
        }
      }
      v6 = v37;
    }
    if ( v8 )
    {
      if ( (v8 & 1) != 0 )
      {
        v8 &= ~1uLL;
      }
      else
      {
        v29 = *(_DWORD *)(v8 + 48);
        if ( v29 == a3 )
        {
          v32 = RtlLengthCurrentClearRunBackward(v9, a3, 0xFFFFFFFF);
          if ( v32 > 1 )
          {
            v33 = RtlLengthCurrentClearRunBackward(v6, a3, v32);
            *(_DWORD *)(v8 + 52) += v33 - 1;
            *(_DWORD *)(v8 + 48) = a3 - v33 + 1;
          }
        }
        else
        {
          v30 = v29 + *(_DWORD *)(v8 + 52);
          v31 = RtlLengthCurrentClearRunForward(v9, (unsigned int)(v30 - 1), 0xFFFFFFFFLL);
          if ( v31 > 1 )
            *(_DWORD *)(v8 + 52) += RtlLengthCurrentClearRunForward(v6, (unsigned int)(v30 - 1), v31) - 1;
        }
      }
      MiBitmapsCachedEntryLengthChanged(a1, v8, 1LL);
    }
    else
    {
      v23 = v15 - ((v15 != -1) + 1) - a3;
      v24 = *(_QWORD *)(a1 + 176);
      v25 = a3 - ((v17 != 0) + 1) - v17;
      if ( v24 == a1 + 176 )
      {
        v35 = *(_QWORD *)(a1 + 152);
        if ( (v35 & 1) != 0 )
        {
          if ( v35 == 1 )
            v24 = 0LL;
          else
            v24 = v35 ^ ((a1 + 144) | 1);
        }
        else
        {
          v24 = *(_QWORD *)(a1 + 152);
        }
      }
      v36 = v24;
      v26 = a3 - (v17 != 0) - v17 + v23;
      if ( v26 < 0x20
        || *(_DWORD *)(v24 + 52) >= v26
        || v23
        && ((v27 = RtlLengthCurrentClearRunForward(v9, a3, v23 + 1),
             v23 = v27 - 1,
             v26 = v25 + v27,
             (unsigned int)(v25 + v27) < 0x20)
         || *(_DWORD *)(v24 + 52) >= v26)
        || v25
        && ((v28 = RtlLengthCurrentClearRunBackward(v9, a3, v25 + 1), v25 = v28 - 1, v26 = v23 + v28, v23 + v28 < 0x20)
         || *(_DWORD *)(v24 + 52) >= v26) )
      {
        if ( *(_DWORD *)(a1 + 140) > v26 )
          v26 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 140) = v26;
      }
      else
      {
        MiRescanPageFileBitmapPortion(a1, v6, a3 - v25, v26, (__int64)&v36);
      }
    }
  }
}
