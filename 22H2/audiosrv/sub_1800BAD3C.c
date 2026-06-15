/*
 * XREFs of sub_1800BAD3C @ 0x1800BAD3C
 * Callers:
 *     sub_1800B8B90 @ 0x1800B8B90 (sub_1800B8B90.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055C94 @ 0x180055C94 (sub_180055C94.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BAA4C @ 0x1800BAA4C (sub_1800BAA4C.c)
 */

__int64 __fastcall sub_1800BAD3C(__int64 a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned int v7; // eax
  unsigned int v8; // r12d
  _DWORD *v9; // r14
  __int64 *v10; // rsi
  unsigned __int64 v11; // r11
  __int64 *v12; // r10
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // r11d
  unsigned __int64 i; // r10
  __int64 v22; // r8
  unsigned __int16 *v23; // rax
  __int64 v24; // r9
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  __int64 *v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 *v30; // rcx
  __int64 v31; // r10
  unsigned __int16 *v32; // rax
  __int64 v33; // r9
  int v34; // r8d
  int v35; // edx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned __int16 *v39; // rax
  __int64 v40; // r10
  int v41; // r8d
  int v42; // ecx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v7 = sub_180055C94(v5, v6, a2);
  v8 = v7;
  if ( !v7 )
    goto LABEL_51;
  v9 = sub_18006A1B0(saturated_mul(v7, 4uLL));
  if ( v9 )
  {
    v10 = (__int64 *)(v5 + 8);
    v11 = 0LL;
    v12 = v10;
    v13 = (v6 - (unsigned __int64)v10 + 7) >> 3;
    if ( (unsigned __int64)v10 > v6 )
      v13 = 0LL;
    if ( v13 )
    {
      do
      {
        v14 = *v12;
        if ( *v12 )
        {
          if ( !a2 )
            goto LABEL_14;
          v15 = *(unsigned __int16 **)(v14 + 32);
          if ( v15 )
          {
            v16 = a2 - (_QWORD)v15;
            do
            {
              v17 = *(unsigned __int16 *)((char *)v15 + v16);
              v18 = *v15 - v17;
              if ( v18 )
                break;
              ++v15;
            }
            while ( v17 );
            if ( !v18 )
            {
LABEL_14:
              v19 = (unsigned int)v4++;
              v9[v19] = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 8LL);
            }
          }
        }
        ++v12;
        ++v11;
      }
      while ( v11 < v13 );
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2, v9, v8);
    v20 = 0;
    for ( i = 0LL; i < v13; ++i )
    {
      v22 = *v10;
      if ( *v10 )
      {
        if ( !a2 )
          goto LABEL_24;
        v23 = *(unsigned __int16 **)(v22 + 32);
        if ( v23 )
        {
          v24 = a2 - (_QWORD)v23;
          do
          {
            v25 = *(unsigned __int16 *)((char *)v23 + v24);
            v26 = *v23 - v25;
            if ( v26 )
              break;
            ++v23;
          }
          while ( v25 );
          if ( !v26 )
          {
LABEL_24:
            v27 = v20++;
            *(_DWORD *)(*(_QWORD *)(v22 + 24) + 8LL) = v9[v27];
          }
        }
      }
      ++v10;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  sub_180033A70(v9);
  if ( v4 >= 0 )
  {
LABEL_51:
    v28 = (__int64 *)(v6 + 8);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    v30 = (__int64 *)(v6 + 8);
    if ( v6 + 8 < v29 )
    {
      while ( 1 )
      {
        v31 = *v30;
        if ( *v30 )
        {
          if ( !a2 )
            break;
          v32 = *(unsigned __int16 **)(v31 + 32);
          if ( v32 )
          {
            v33 = a2 - (_QWORD)v32;
            do
            {
              v34 = *(unsigned __int16 *)((char *)v32 + v33);
              v35 = *v32 - v34;
              if ( v35 )
                break;
              ++v32;
            }
            while ( v34 );
            if ( !v35 )
              break;
          }
        }
        if ( (unsigned __int64)++v30 >= v29 )
          goto LABEL_48;
      }
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(
             a1,
             a2,
             *(_QWORD *)(*(_QWORD *)(v31 + 24) + 8LL));
      if ( v4 >= 0 )
      {
        v36 = 0LL;
        v37 = (v29 - (unsigned __int64)v28 + 7) >> 3;
        if ( v37 )
        {
          do
          {
            v38 = *v28;
            if ( *v28 )
            {
              if ( !a2 )
                goto LABEL_46;
              v39 = *(unsigned __int16 **)(v38 + 32);
              if ( v39 )
              {
                v40 = a2 - (_QWORD)v39;
                do
                {
                  v41 = *(unsigned __int16 *)((char *)v39 + v40);
                  v42 = *v39 - v41;
                  if ( v42 )
                    break;
                  ++v39;
                }
                while ( v41 );
                if ( !v42 )
LABEL_46:
                  *(_QWORD *)(*(_QWORD *)(v38 + 24) + 8LL) = 0LL;
              }
            }
            ++v28;
            ++v36;
          }
          while ( v36 < v37 );
        }
      }
    }
  }
LABEL_48:
  sub_1800BAA4C(a1, a2, 0);
  return (unsigned int)v4;
}
