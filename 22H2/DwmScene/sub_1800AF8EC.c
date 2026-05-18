/*
 * XREFs of sub_1800AF8EC @ 0x1800AF8EC
 * Callers:
 *     sub_1800AF860 @ 0x1800AF860 (sub_1800AF860.c)
 *     sub_1800B0040 @ 0x1800B0040 (sub_1800B0040.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_18006171C @ 0x18006171C (sub_18006171C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_180075908 @ 0x180075908 (sub_180075908.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     sub_180099964 @ 0x180099964 (sub_180099964.c)
 *     sub_1800AA1D0 @ 0x1800AA1D0 (sub_1800AA1D0.c)
 *     sub_1800AA1E0 @ 0x1800AA1E0 (sub_1800AA1E0.c)
 *     sub_1800AA1F0 @ 0x1800AA1F0 (sub_1800AA1F0.c)
 *     sub_1800AC830 @ 0x1800AC830 (sub_1800AC830.c)
 *     sub_1800AE41C @ 0x1800AE41C (sub_1800AE41C.c)
 *     sub_1800AF6B0 @ 0x1800AF6B0 (sub_1800AF6B0.c)
 *     sub_1800B0284 @ 0x1800B0284 (sub_1800B0284.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_broadcast @ 0x18011FB62 (_Cnd_broadcast.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
signed __int32 __fastcall sub_1800AF8EC(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  bool v4; // dl
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r12d
  int v12; // edx
  __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  volatile signed __int32 *v27; // rbx
  __int64 *v28; // r13
  __int64 *i; // rsi
  volatile signed __int32 *v30; // rcx
  __int64 *v31; // rbx
  __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rax
  unsigned __int64 *v35; // rax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  signed __int32 result; // eax
  volatile signed __int32 *v41; // rbx
  int v42; // [rsp+38h] [rbp-D0h]
  __int64 *v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  char v45; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v56; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v57; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v58; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v59; // [rsp+100h] [rbp-8h] BYREF

  *(_BYTE *)(a1 + 424) = 1;
  v56 = 0LL;
  sub_1800AF6B0(a1, &v56);
  if ( (_QWORD)v56 )
    v2 = *(_DWORD *)(v56 + 192);
  else
    v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = v3 != *(_QWORD *)(a1 + 72);
  if ( v3 != *(_QWORD *)(a1 + 72) && *(_BYTE *)(a1 + 432) )
  {
    v4 = v2 > *(_DWORD *)(a1 + 428);
    *(_DWORD *)(a1 + 428) = v2;
  }
  if ( v4 )
  {
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(a1 + 440) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                          + 1000000000 * (perf_counter / perf_frequency);
    v59 = 0LL;
    v7 = sub_180075908(*(_QWORD *)(a1 + 24));
    sub_18006171C(v7, (__int64)&v59);
    v42 = 0;
    v54 = 0uLL;
    if ( (_QWORD)v56 )
    {
      v8 = sub_1800615B4(v56 + 16, (__int64)&v44);
      if ( &v54 != (__int128 *)v8 )
      {
        if ( BYTE8(v54) )
          sub_180061A34(v54);
        *(_QWORD *)&v54 = *(_QWORD *)v8;
        BYTE8(v54) = *(_BYTE *)(v8 + 8);
        *(_QWORD *)v8 = 0LL;
        *(_BYTE *)(v8 + 8) = 0;
      }
      if ( v45 )
        sub_180061A34(v44);
      v9 = v56;
      v42 = *(_DWORD *)(v56 + 112);
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 )
      {
        *(_DWORD *)(v56 + 112) = v10;
        v10 = *(_DWORD *)(a1 + 16);
        v9 = v56;
      }
      v11 = *(_DWORD *)(v9 + 112);
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 16);
      if ( v11 )
      {
        v10 = *(_DWORD *)(a1 + 16);
      }
      else
      {
        v11 = 1;
        v10 = 0;
      }
    }
    v12 = 1;
    if ( v10 )
      v12 = v10;
    v13 = sub_1800752B4(*(_QWORD *)(a1 + 24), v12);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180208B28);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v13 + 88LL))(v13, &unk_180208B48);
    v14 = *(__int64 **)(a1 + 64);
    v15 = *(__int64 **)(a1 + 72);
    v43 = v15;
    while ( v14 != v15 )
    {
      v53 = 0LL;
      v16 = v14[1];
      if ( v16 )
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)(v16 + 8);
          if ( !v20 )
            break;
          if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v20 + 1, v20) )
          {
            v17 = *v14;
            v53 = *(_OWORD *)v14;
            goto LABEL_26;
          }
        }
      }
      v17 = v53;
LABEL_26:
      if ( v17 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 352LL))(v17) )
      {
        v55 = 0LL;
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v53 + 376LL))(v53, &v48);
        v55 = 0LL;
        v19 = *(_QWORD *)(v18 + 8);
        if ( v19 )
        {
          while ( 1 )
          {
            v21 = *(_DWORD *)(v19 + 8);
            if ( !v21 )
              break;
            if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v21 + 1, v21) )
            {
              v55 = *(_OWORD *)v18;
              break;
            }
          }
        }
        v22 = v49;
        if ( v49 && _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, v19, v18);
        if ( (_QWORD)v55
          && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v55 + 16LL))(v55, v19, v18) )
        {
          v58 = 0LL;
          sub_18006156C(v55 + 24, (__int64)&v58);
          v57 = 0LL;
          sub_18006156C(v53 + 8, (__int64)&v57);
          v23 = sub_1800752B4(*(_QWORD *)(a1 + 24), v11);
          v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v23 + 72LL))(v23, &unk_180208B88, 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 304LL))(v53, v24);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 72LL))(v53);
          v25 = v53;
          v26 = sub_1800752F4(*(_QWORD *)(a1 + 24), &v50);
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 192LL))(v25, v26);
          v27 = v51;
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 232LL))(v53, v11);
          v28 = *(__int64 **)(a1 + 48);
          for ( i = *(__int64 **)(a1 + 40); i != v28; i += 2 )
          {
            v30 = (volatile signed __int32 *)i[1];
            if ( v30 )
            {
              _InterlockedIncrement(v30 + 3);
              v30 = (volatile signed __int32 *)i[1];
            }
            v31 = *(__int64 **)(a1 + 88);
            v32 = (__int64 *)v31[1];
            if ( *((_BYTE *)v32 + 25) )
              goto LABEL_57;
            do
            {
              if ( v32[5] >= (unsigned __int64)v30 )
              {
                v31 = v32;
                v32 = (__int64 *)*v32;
              }
              else
              {
                v32 = (__int64 *)v32[2];
              }
            }
            while ( !*((_BYTE *)v32 + 25) );
            if ( v31 == *(__int64 **)(a1 + 88) || (unsigned __int64)v30 < v31[5] )
LABEL_57:
              v31 = *(__int64 **)(a1 + 88);
            if ( v30 && _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( v31 != *(__int64 **)(a1 + 88) )
            {
              v33 = sub_1800AA1E0(*i, &v46);
              if ( sub_180099964(v33, (unsigned __int64 *)v31 + 6)
                || (v34 = sub_1800AA1D0(*i, &v47), sub_180099964(v34, (unsigned __int64 *)v31 + 7))
                || (unsigned int)sub_1800AA1F0(*i) != *((_DWORD *)v31 + 16) )
              {
                sub_1800AC830(*i, v31[6], v31[7], *((_DWORD *)v31 + 16));
              }
            }
          }
          (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), &v53);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 240LL))(v53, v11);
          sub_180077C90(*(_QWORD **)(a1 + 24), (__int64)&v56, a1 + 40, &v53);
          sub_180076F08(*(_QWORD **)(a1 + 24), &v55, &v53, (__int64)&v57, (__int64)&v58, (__int64)&v54);
          (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), &v53);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 248LL))(v53);
          v35 = sub_1800AE41C(&v52, v14);
          sub_180079CB0(*(_QWORD *)(a1 + 24), v35);
          if ( BYTE8(v57) )
            sub_180061A34(v57);
          if ( BYTE8(v58) )
            sub_180061A34(v58);
          v15 = v43;
        }
        v36 = (volatile signed __int32 *)*((_QWORD *)&v55 + 1);
        if ( *((_QWORD *)&v55 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64))v36)(v36, v19, v18);
            if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          }
        }
      }
      v37 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
      if ( *((_QWORD *)&v53 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
      v14 += 2;
    }
    if ( (_QWORD)v56 )
      *(_DWORD *)(v56 + 112) = v42;
    v38 = Query_perf_frequency();
    v39 = Query_perf_counter();
    sub_1800B0284(a1, 1000000000 * (v39 % v38) / v38 + 1000000000 * (v39 / v38) - *(_QWORD *)(a1 + 440));
    if ( BYTE8(v54) )
      sub_180061A34(v54);
    if ( BYTE8(v59) )
      sub_180061A3C(v59);
  }
  *(_BYTE *)(a1 + 424) = 0;
  result = Cnd_broadcast((_Cnd_t)(a1 + 280));
  if ( result )
  {
    std::_Throw_C_error(result);
    JUMPOUT(0x1800B0037LL);
  }
  v41 = (volatile signed __int32 *)*((_QWORD *)&v56 + 1);
  if ( *((_QWORD *)&v56 + 1) )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 8LL));
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
      result = _InterlockedDecrement(v41 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
    }
  }
  return result;
}
