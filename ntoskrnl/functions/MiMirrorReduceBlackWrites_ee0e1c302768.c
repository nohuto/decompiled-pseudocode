__int64 __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // r8
  unsigned int v9; // ebp
  __int64 v10; // r14
  unsigned __int64 v11; // r14
  _QWORD *v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  unsigned int v19; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  v2 = *(_DWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 12);
  v17 = v4;
  v21 = v5;
  if ( (v2 & 8) != 0 )
  {
    v6 = 1LL;
  }
  else
  {
    v6 = 2LL;
    if ( (v2 & 0x400) != 0 )
      v6 = 1LL;
  }
  v7 = 0;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0;
  v20 = 0;
  v19 = 0;
LABEL_6:
  v16 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v6 > 1 )
        v10 = 88LL * v7 + v3 + 2944;
      else
        v10 = *(_QWORD *)(v3 + 8 * v6 + 2496) + 88LL * v9;
      v11 = *(_QWORD *)(v10 + 16);
      if ( v11 != v8 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(48 * v11 - 0x220000000000LL);
          if ( v6 == 2 && MiIsDecayPfn(v11) )
          {
            v13 = v12[2];
            if ( qword_140C657C0 && (v13 & 0x10) == 0 )
              v13 &= ~qword_140C657C0;
            v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
            if ( v14 == v11 )
              goto LABEL_21;
            do
            {
              MiMirrorOmitPagesFromCopy(v17, v14, 1uLL);
              v14 = *(_QWORD *)(48 * v14 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
            }
            while ( v14 != v11 );
            v6 = v16;
          }
          else
          {
            MiMirrorOmitPagesFromCopy(v17, v11, 1uLL);
          }
          v8 = 0x3FFFFFFFFFLL;
LABEL_21:
          v11 = *v12 & 0xFFFFFFFFFFLL;
          if ( v11 == v8 )
          {
            v9 = v19;
            v7 = v20;
            v3 = a1;
            v5 = v21;
            break;
          }
        }
      }
      if ( v6 > 1 )
        break;
      v19 = ++v9;
      if ( v9 >= 3 * dword_140C6577C )
      {
        v9 = 0;
        v19 = 0;
        break;
      }
    }
    if ( !v6 )
      return MiMirrorNodeLargePages(v17, v3, 1LL);
    if ( v6 == 2 )
    {
      v20 = ++v7;
      if ( v7 != v5 )
        continue;
    }
    --v6;
    goto LABEL_6;
  }
}
