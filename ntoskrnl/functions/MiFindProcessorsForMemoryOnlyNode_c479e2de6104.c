__int64 __fastcall MiFindProcessorsForMemoryOnlyNode(unsigned int a1, unsigned int a2)
{
  _DWORD *v2; // r12
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  unsigned int *v5; // r14
  __int64 v6; // r9
  __int64 v7; // r11
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rax
  _WORD *v11; // rsi
  unsigned int i; // ebp
  __int64 v13; // rdi
  __int64 v14; // rcx
  int EngineType; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  __int16 v21; // r8
  __int64 v22; // r10
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+30h] [rbp-68h]
  unsigned __int64 v32; // [rsp+38h] [rbp-60h]
  _OWORD v33[5]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v34; // [rsp+A0h] [rbp+8h]
  int FirstSetRightGroupAffinity; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v2 = *(_DWORD **)(376LL * a1 + qword_140C65720 + 368);
  v3 = qword_140C65718 + 4LL * (unsigned __int16)KeNumberNodes * a1;
  v4 = v3 + 4LL * (unsigned __int16)KeNumberNodes;
  v5 = (unsigned int *)(v3 + 4);
  v32 = v4;
  if ( (unsigned __int64)v5 < v4 )
  {
    v6 = 0LL;
    while ( 2 )
    {
      LODWORD(v7) = v6;
      v8 = *v5;
      v37 = v6;
      v9 = *(_QWORD *)(376LL * *v5 + qword_140C65720 + 368);
      v10 = v6;
      v30 = v6;
      v11 = (_WORD *)(v9 + 16);
      do
      {
        v34 = *(v11 - 3);
        if ( v34 )
        {
          for ( i = *(unsigned __int16 *)(v9 + 8) - 1; ; --i )
          {
            v33[0] = *(_OWORD *)(*(_QWORD *)v9 + 16LL * i);
            v13 = *(_QWORD *)&v33[0];
            if ( *(_QWORD *)&v33[0] )
              break;
LABEL_29:
            if ( !i )
            {
              v10 = v30;
              goto LABEL_32;
            }
          }
          do
          {
            FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v33);
            v14 = KiProcessorBlock[FirstSetRightGroupAffinity];
            v13 &= ~*(_QWORD *)(v14 + 200);
            *(_QWORD *)&v33[0] = v13;
            EngineType = MiGetEngineType(v14);
            v7 = v37;
            if ( EngineType == v37 )
            {
              v31 = *(_QWORD *)(v16 + 34912);
              if ( !(v17 | v13 & v31) )
              {
                v6 = 0LL;
                goto LABEL_29;
              }
              v18 = FirstSetRightGroupAffinity;
              v29 = v13;
              do
              {
                v19 = MiGetEngineType(KiProcessorBlock[v18]);
                v23 = v19 == (_DWORD)v7;
                v24 = a2;
                if ( !v23 )
                  break;
                v25 = *(_QWORD *)(v20 + 200);
                v22 |= v25;
                ++v21;
                v26 = ~v25;
                v6 &= v26;
                v13 = v29 & v26;
                v29 = v13;
                v27 = v13;
                *(_QWORD *)&v33[0] = v13;
                if ( a2 == 1 )
                {
                  v13 &= ~v31;
                  *(_QWORD *)&v33[0] = v27 & ~v31;
                  v6 = v6 == 0;
                  v24 = 1;
                  break;
                }
                if ( a2 == 2 )
                {
                  v6 = 0LL;
                  break;
                }
                v18 = ++FirstSetRightGroupAffinity;
              }
              while ( v6 );
              if ( (!v21 || v24 == 2 || v21 != v34) && !v6 )
                break;
            }
            v6 = 0LL;
            v22 = 0LL;
            v21 = 0;
          }
          while ( v13 );
          if ( !v21 )
            goto LABEL_29;
          if ( a2 <= 1 )
          {
            if ( *(v11 - 3) == v21 )
              goto LABEL_29;
            *(_QWORD *)(*(_QWORD *)v9 + 16LL * i) &= ~v22;
            *(v11 - 3) -= v21;
            if ( !a2 )
              --*v11;
          }
          result = 1LL;
          **(_QWORD **)v2 = v22;
          *(_WORD *)(*(_QWORD *)v2 + 8LL) = *(_WORD *)(*(_QWORD *)v9 + 16LL * i + 8);
          *((_WORD *)v2 + v7 + 5) = v21;
          *((_WORD *)v2 + v7 + 8) = 1;
          v2[6] = v8;
          return result;
        }
LABEL_32:
        LODWORD(v7) = v7 + 1;
        ++v10;
        ++v11;
        v37 = v7;
        v30 = v10;
      }
      while ( v10 < 3 );
      if ( (unsigned __int64)++v5 < v32 )
        continue;
      break;
    }
  }
  return 0LL;
}
