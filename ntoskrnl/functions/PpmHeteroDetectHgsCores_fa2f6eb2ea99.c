char __fastcall PpmHeteroDetectHgsCores(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // rcx
  unsigned __int8 v5; // si
  unsigned __int8 v6; // di
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // cl
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned int v11; // r8d
  _DWORD *v12; // r10
  __int64 v13; // rdx
  bool v14; // cl
  __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned __int8 v17; // r13
  char v18; // r15
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // r13
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  __int64 v28; // r12
  __int64 Prcb; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v33; // [rsp+24h] [rbp-24h] BYREF
  unsigned __int16 *v34; // [rsp+28h] [rbp-20h] BYREF
  __int64 v35; // [rsp+30h] [rbp-18h]
  __int16 v36; // [rsp+38h] [rbp-10h]
  int v37; // [rsp+3Ah] [rbp-Eh]
  __int16 v38; // [rsp+3Eh] [rbp-Ah]
  unsigned __int8 v40; // [rsp+98h] [rbp+50h]
  unsigned __int8 v41; // [rsp+A0h] [rbp+58h]
  char v42; // [rsp+A8h] [rbp+60h]

  v1 = 0;
  v2 = a1;
  v3 = 0;
  v37 = 0;
  v38 = 0;
  v33 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    if ( (unsigned __int8)PoHeteroIsArchFavoredCoreSupported() || PpmHeteroHgsHeteroCoreTypes )
    {
      v3 = 1;
      v35 = qword_140C0BD78[0];
      v5 = -1;
      v42 = -1;
      v34 = (unsigned __int16 *)&PpmCheckRegistered;
      v6 = 0;
      v40 = 0;
      v41 = 0;
      v36 = 0;
      if ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) )
      {
        do
        {
          v7 = *(_BYTE *)(KeGetPrcb(v33) + 34125);
          v8 = v7;
          if ( v7 <= v6 )
            v8 = v6;
          v6 = v8;
          if ( v7 >= v5 )
            v7 = v5;
          v5 = v7;
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) );
        v42 = v5;
      }
      if ( PpmHeteroHgsPopulated )
      {
        v16 = 0;
        if ( *(_DWORD *)(v2 + 4) )
        {
          v17 = 0;
          do
          {
            v36 = 0;
            v35 = qword_140C0BD78[0];
            v18 = 1;
            v34 = (unsigned __int16 *)&PpmCheckRegistered;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) )
            {
              v19 = v40;
              v20 = v41;
              do
              {
                v21 = *(_QWORD *)(KeGetPrcb(v33) + 34128);
                v22 = v19;
                if ( *(_BYTE *)(v21 + 4LL * v16 + 5) > v19 )
                  v22 = *(_BYTE *)(v21 + 4LL * v16 + 5);
                v19 = v22;
                v23 = v20;
                if ( *(_BYTE *)(v21 + 4LL * v16 + 4) > v20 )
                  v23 = *(_BYTE *)(v21 + 4LL * v16 + 4);
                v20 = v23;
                if ( *(_BYTE *)(v21 + 4LL * v16 + 6) && *(_BYTE *)(v21 + 4LL * v16 + 7) )
                  v18 = 0;
                else
                  v1 = 1;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) );
              v5 = v42;
              v40 = v19;
              v2 = a1;
              v41 = v20;
              v17 = v40;
            }
            v24 = *(_QWORD *)(v2 + 16);
            v25 = (v1 != 0) + 1;
            v26 = v17;
            if ( v25 < v17 )
              v26 = (v1 != 0) + 1;
            *(_BYTE *)(v24 + 2LL * v16) = v26;
            v27 = v41;
            if ( v25 < v41 )
              v27 = (v1 != 0) + 1;
            v1 = 0;
            *(_BYTE *)(v24 + 2LL * v16 + 1) = v27;
            v35 = qword_140C0BD78[0];
            v34 = (unsigned __int16 *)&PpmCheckRegistered;
            v36 = 0;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) )
            {
              do
              {
                v28 = v33;
                Prcb = KeGetPrcb(v33);
                v30 = *(_QWORD *)(Prcb + 34128);
                v31 = v16 + *(_DWORD *)(v2 + 4) * (_DWORD)v28;
                if ( !v18 && (!*(_BYTE *)(v30 + 4LL * v16 + 6) || !*(_BYTE *)(v30 + 4LL * v16 + 7)) )
                  *(_WORD *)(v2 + 4 * v31 + 26) = 257;
                *(_BYTE *)(v2 + 4 * v31 + 25) = *(_BYTE *)(v30 + 4LL * v16 + 4);
                *(_BYTE *)(v2 + 4 * v31 + 24) = *(_BYTE *)(v30 + 4LL * v16 + 5);
                *(_BYTE *)(v28 + *(_QWORD *)(v2 + 8)) = *(_BYTE *)(Prcb + 34125) != v5;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) );
              v17 = v40;
              v1 = 0;
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v2 + 4) );
          return 1;
        }
      }
      else if ( v6 != v5 )
      {
        v35 = qword_140C0BD78[0];
        v36 = 0;
        v34 = (unsigned __int16 *)&PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v34) )
        {
          v9 = v33;
          v10 = KeGetPrcb(v33);
          *(_BYTE *)(v9 + *(_QWORD *)(v2 + 8)) = *(_BYTE *)(v10 + 34125) != v5;
          v11 = 0;
          v12 = PpmHeteroCapability;
          if ( *((_DWORD *)PpmHeteroCapability + 1) )
          {
            do
            {
              v13 = v11 + *(_DWORD *)(v2 + 4) * (_DWORD)v9;
              v14 = *(_BYTE *)(v10 + 34125) == v5;
              *(_BYTE *)(v2 + 4 * v13 + 25) = *(_BYTE *)(v10 + 34125) != v5;
              *(_BYTE *)(v2 + 4 * v13 + 24) = v14;
              v15 = v11++;
              *(_WORD *)(*(_QWORD *)(v2 + 16) + 2 * v15) = 257;
            }
            while ( v11 < v12[1] );
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v4 + 4) = 1;
    }
  }
  return v3;
}
