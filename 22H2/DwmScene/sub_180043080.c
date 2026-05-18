/*
 * XREFs of sub_180043080 @ 0x180043080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_1800328C8 @ 0x1800328C8 (sub_1800328C8.c)
 *     sub_1800338FC @ 0x1800338FC (sub_1800338FC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043080(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  signed __int32 v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 136) != 1 )
    goto LABEL_31;
  v19 = 0LL;
  v6 = *(_QWORD *)(a1 + 120);
  v18 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v7 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v14 + 1, v14) )
      {
        *(_QWORD *)&v18 = *(_QWORD *)(v6 + 72);
        v8 = *(_QWORD *)(v6 + 80);
        *((_QWORD *)&v18 + 1) = v8;
        goto LABEL_4;
      }
    }
  }
  v8 = *((_QWORD *)&v18 + 1);
LABEL_4:
  sub_1800328C8((__int64 *)&v19, &v18);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  v20 = 0LL;
  sub_1800338FC(*(_QWORD **)(a1 + 120), &v20);
  v10 = *(_DWORD *)(a1 + 140);
  if ( !v10 )
  {
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v20 + 232LL))(
            v20,
            *(_QWORD *)(a1 + 96),
            &v23,
            16LL,
            a3 != 1);
    if ( !v12 )
    {
      *(_QWORD *)(a1 + 144) = v23;
      *(_BYTE *)(a1 + 152) = DWORD2(v23) != 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, bool))(*(_QWORD *)v20 + 232LL))(
            v20,
            *(_QWORD *)(a1 + 96),
            &v22,
            8LL,
            a3 != 1);
    if ( !v12 )
    {
      v13 = v22;
      goto LABEL_13;
    }
LABEL_23:
    if ( v12 != 1 )
    {
      sub_1800265A4(v19, v12);
      *(_DWORD *)(a1 + 136) = 5;
    }
    goto LABEL_25;
  }
  if ( v11 == 2 )
  {
    v21 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, bool))(*(_QWORD *)v20 + 232LL))(
            v20,
            *(_QWORD *)(a1 + 96),
            &v21,
            4LL,
            a3 != 1);
    if ( !v12 )
    {
      v13 = v21;
LABEL_13:
      *(_QWORD *)(a1 + 144) = v13;
LABEL_22:
      *(_DWORD *)(a1 + 136) = 2;
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_25:
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
LABEL_31:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 144);
  return a2;
}
