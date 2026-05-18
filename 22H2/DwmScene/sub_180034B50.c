/*
 * XREFs of sub_180034B50 @ 0x180034B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EFA8 @ 0x18000EFA8 (sub_18000EFA8.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180031288 @ 0x180031288 (sub_180031288.c)
 *     sub_1800312B8 @ 0x1800312B8 (sub_1800312B8.c)
 *     sub_1800328C8 @ 0x1800328C8 (sub_1800328C8.c)
 *     sub_18009AD88 @ 0x18009AD88 (sub_18009AD88.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_18009ADC0 @ 0x18009ADC0 (sub_18009ADC0.c)
 *     sub_18009ADDC @ 0x18009ADDC (sub_18009ADDC.c)
 *     sub_18009AE18 @ 0x18009AE18 (sub_18009AE18.c)
 *     sub_18009AE50 @ 0x18009AE50 (sub_18009AE50.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180034B50(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  char v5; // r14
  __int64 *v6; // rcx
  char v7; // bl
  __int64 v8; // rsi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  char *v20; // rdi
  __int64 i; // rcx
  unsigned int v22; // edi
  unsigned int v23; // r12d
  size_t v24; // rax
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ebx
  unsigned int v29; // edi
  __int64 v30; // rdi
  volatile signed __int32 *v32; // [rsp+48h] [rbp-B8h]
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  int v37; // [rsp+64h] [rbp-9Ch]
  unsigned int v38; // [rsp+68h] [rbp-98h]
  __int128 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+98h] [rbp-68h] BYREF
  char v44; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  size_t v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  _DWORD v50[15]; // [rsp+E0h] [rbp-20h]
  __m128i si128; // [rsp+11Ch] [rbp+1Ch]
  int v52; // [rsp+12Ch] [rbp+2Ch]
  int v53; // [rsp+130h] [rbp+30h]
  int v54; // [rsp+134h] [rbp+34h]
  int v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+13Ch] [rbp+3Ch]
  int v57; // [rsp+140h] [rbp+40h]
  _BYTE v58[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v59; // [rsp+158h] [rbp+58h]
  _DWORD v60[2]; // [rsp+160h] [rbp+60h]
  char v61; // [rsp+168h] [rbp+68h] BYREF
  int v62; // [rsp+1B8h] [rbp+B8h]
  int v63; // [rsp+1BCh] [rbp+BCh]
  int v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v66; // [rsp+1D8h] [rbp+D8h]
  int v67; // [rsp+1DCh] [rbp+DCh]

  v47 = a3;
  v4 = a1;
  v49 = a1;
  v5 = 1;
  if ( *a2 )
  {
    v6 = (__int64 *)sub_18009ADA4(*a2, v58, *(unsigned int *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v45 = 0LL;
    v6 = (__int64 *)&v44;
    v7 = 2;
    v8 = 0LL;
  }
  v32 = (volatile signed __int32 *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v45 )
    {
      if ( !_InterlockedDecrement(v45 + 2) )
      {
        v9 = v45;
        (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v10 = v59;
    if ( v59 )
    {
      if ( !_InterlockedDecrement(v59 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( (unsigned int)sub_18009AE18(v8) == 1 )
  {
    v11 = *sub_1800312B8(v8, &v40);
    v42 = v11;
    v12 = v40;
    if ( !v40 )
      goto LABEL_20;
    v40 = 0LL;
  }
  else
  {
    v11 = *sub_180031288(v8, &v41);
    v42 = v11;
    v12 = v41;
    if ( !v41 )
      goto LABEL_20;
    v41 = 0LL;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_20:
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v11,
          0LL,
          1LL,
          0,
          &v65);
  v43 = 0LL;
  v39 = 0LL;
  v14 = *(_QWORD *)(v4 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        v39 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_1800328C8((__int64 *)&v43, &v39);
  if ( *((_QWORD *)&v39 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = *((_QWORD *)&v39 + 1);
      (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
    }
  }
  sub_1800265A4(v43, v13);
  if ( v13 < 0 )
  {
    sub_1801163DC(&unk_1802080A0, 3LL, "Failed to read Texture with HRESULT error 0x%.8x", v13);
    v5 = 0;
  }
  else
  {
    v17 = sub_18009ADC0(v8);
    v50[0] = 0;
    v50[1] = 4;
    v50[2] = 4;
    v50[3] = 4;
    v50[4] = 8;
    v50[5] = 12;
    v50[6] = 16;
    v50[7] = 4;
    v50[8] = 4;
    v50[9] = 8;
    v50[10] = 12;
    v50[11] = 16;
    v50[12] = 2;
    v50[13] = 1;
    v50[14] = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013D360);
    v52 = 2;
    v53 = 4;
    v54 = 8;
    v55 = 4;
    v56 = 1;
    v57 = 2;
    v18 = v50[v17];
    v19 = (unsigned int)sub_18009ADC0(v8);
    v60[0] = 0;
    v60[1] = 1;
    v20 = &v61;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v20 = 1;
      v20 += 4;
    }
    v62 = 4;
    v63 = 1;
    v64 = 1;
    v22 = v60[v19];
    v23 = v18 * sub_18009AE50(v8);
    v35 = v23 * sub_18009ADDC(v8);
    v38 = v66;
    v37 = v67;
    v24 = v66;
    if ( v66 > v23 )
      v24 = v23;
    v48 = v24;
    v46 = v65;
    v25 = sub_18009ADDC(v8);
    v34 = (v22 + v25 - 1) / v22;
    v26 = sub_18009AD88(v8, (v22 + v25 - 1) % v22);
    v33 = v26;
    v27 = 0;
    if ( v26 )
    {
      do
      {
        v28 = 0;
        if ( v34 )
        {
          do
          {
            v29 = v35 * v27 + v23 * v28;
            if ( v29 >= a4 )
              break;
            sub_18000EFA8((void *)(v47 + v29), v23, (const void *)(v46 + v38 * v28++ + v37 * v27), v48);
          }
          while ( v28 < v34 );
          v26 = v33;
        }
        ++v27;
      }
      while ( v27 < v26 );
      v4 = v49;
      v11 = v42;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v11, 0LL);
  }
  if ( *((_QWORD *)&v43 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL)) )
    {
      v30 = *((_QWORD *)&v43 + 1);
      (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v30 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
    }
  }
  if ( v32 )
  {
    if ( !_InterlockedDecrement(v32 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
    }
  }
  return v5;
}
