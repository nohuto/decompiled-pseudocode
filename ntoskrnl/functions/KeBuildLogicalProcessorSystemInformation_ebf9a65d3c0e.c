__int64 __fastcall KeBuildLogicalProcessorSystemInformation(
        unsigned __int16 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v4; // r12
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int *v7; // r11
  unsigned int v8; // r13d
  unsigned __int16 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  bool v15; // al
  __int64 v16; // rbp
  _QWORD *v17; // r13
  __int64 v18; // r15
  __int64 v19; // r15
  unsigned int v20; // edx
  __int64 *v21; // r9
  _QWORD *v22; // rbx
  __int64 SubNodeForGroup; // rax
  int v24; // r8d
  __int64 v25; // r9
  unsigned int v26; // r10d
  __int64 v27; // rax
  _OWORD v29[5]; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+88h] [rbp+10h]

  v4 = 0LL;
  v29[0] = 0LL;
  v5 = 0;
  v6 = 0;
  v31 = 0;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v11 = KiProcessorBlock[v4];
      v12 = *(unsigned __int8 *)(v11 + 208);
      if ( (_WORD)v12 == v10 )
      {
        v13 = *(_QWORD *)(v11 + 8 * v12 + 34584);
        *(_QWORD *)&v29[0] = v13;
        WORD4(v29[0]) = v12;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
        {
          v6 += 32;
          if ( v6 > v8 )
          {
            v5 = -1073741820;
          }
          else
          {
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)a2 = v13;
            *(_DWORD *)(a2 + 8) = 3;
            a2 += 32LL;
          }
        }
        v14 = *(_QWORD *)(v11 + 34912);
        *(_QWORD *)&v29[0] = v14;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
        {
          v15 = *(_QWORD *)(v11 + 200) != v14;
          v6 += 32;
          if ( v6 > v8 )
          {
            v5 = -1073741820;
          }
          else
          {
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_BYTE *)(a2 + 16) = v15;
            *(_QWORD *)a2 = v14;
            a2 += 32LL;
          }
        }
        v16 = 0LL;
        if ( *(_DWORD *)(v11 + 34452) )
        {
          v17 = (_QWORD *)(a2 + 16);
          do
          {
            WORD4(v29[0]) = a1;
            v18 = v11 + 264LL * (unsigned int)v16;
            if ( a1 >= *(_WORD *)(v18 + 40632) )
              v19 = 0LL;
            else
              v19 = *(_QWORD *)(v18 + 8LL * a1 + 40640);
            *(_QWORD *)&v29[0] = v19;
            if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)v29) )
            {
              v6 += 32;
              if ( v6 > a3 )
              {
                v5 = -1073741820;
              }
              else
              {
                v17[1] = 0LL;
                *v17 = 0LL;
                *(_QWORD *)a2 = v19;
                a2 += 32LL;
                *((_DWORD *)v17 - 2) = 2;
                *v17 = *(_QWORD *)(v11 + 12 * v16 + 34392);
                *((_DWORD *)v17 + 2) = *(_DWORD *)(v11 + 12 * v16 + 34400);
                v17 += 4;
              }
            }
            v16 = (unsigned int)(v16 + 1);
          }
          while ( (unsigned int)v16 < *(_DWORD *)(v11 + 34452) );
          LODWORD(v4) = v31;
          v10 = a1;
          v8 = a3;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v31 = v4;
    }
    while ( (unsigned int)v4 < (unsigned int)KeNumberProcessors_0 );
    v7 = a4;
  }
  if ( KeNumberNodes )
  {
    v20 = v10;
    v21 = KeNodeBlock;
    v22 = (_QWORD *)(a2 + 16);
    do
    {
      SubNodeForGroup = KiGetSubNodeForGroup(*v21, v20);
      if ( SubNodeForGroup )
      {
        v27 = *(_QWORD *)(SubNodeForGroup + 128);
        if ( v27 )
        {
          v6 += 32;
          if ( v6 <= v8 )
          {
            *v22 = 0LL;
            v22[1] = 0LL;
            *(_DWORD *)v22 = v24;
            *(v22 - 2) = v27;
            *((_DWORD *)v22 - 2) = 1;
            v22 += 4;
          }
          else
          {
            v5 = -1073741820;
          }
        }
      }
      v21 = (__int64 *)(v25 + 8);
    }
    while ( v24 + 1 < v26 );
  }
  *v7 = v6;
  return v5;
}
