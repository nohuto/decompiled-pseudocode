/*
 * XREFs of sub_180015940 @ 0x180015940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180082B74 @ 0x180082B74 (sub_180082B74.c)
 *     sub_18008833C @ 0x18008833C (sub_18008833C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180015940(__int64 a1, __int128 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  signed __int32 v13; // eax
  __int128 v14; // [rsp+20h] [rbp-99h]
  __int128 v15; // [rsp+30h] [rbp-89h]
  _QWORD v16[4]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v17[4]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-19h]
  __int128 v19; // [rsp+B0h] [rbp-9h]
  __int128 v20; // [rsp+C0h] [rbp+7h]
  __int128 v21; // [rsp+D0h] [rbp+17h]
  __int128 v22; // [rsp+E0h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+5Fh]

  v22 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v15 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v8 + 1, v8) )
      {
        *(_QWORD *)&v15 = *(_QWORD *)(v4 + 72);
        v6 = *(_QWORD *)(v4 + 80);
        *((_QWORD *)&v15 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
LABEL_3:
  sub_1800615B4(v15 + 16, &v22);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  v18 = *a2;
  v19 = a2[1];
  v20 = a2[2];
  v21 = a2[3];
  v17[0] = v18;
  v17[1] = v19;
  v17[2] = v20;
  v17[3] = v21;
  if ( (unsigned __int8)sub_180082B74(*(_QWORD *)(a1 + 32), v17) )
  {
    v16[2] = 0LL;
    v16[3] = 0LL;
    sub_18001269C(v16, (__int64)&unk_180208688);
    v9 = *(_QWORD *)(a1 + 32);
    v14 = 0LL;
    v10 = *(_QWORD *)(v9 + 80);
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v10 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v13 + 1, v13) )
        {
          *(_QWORD *)&v14 = *(_QWORD *)(v9 + 72);
          v11 = *(_QWORD *)(v9 + 80);
          *((_QWORD *)&v14 + 1) = v11;
          sub_18008833C(v14, v16);
          goto LABEL_15;
        }
      }
    }
    v11 = 0LL;
    sub_18008833C(0LL, v16);
LABEL_15:
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147024809;
    sub_18000DC98(retaddr, 122, (__int64)"SpectreNode.cpp", 0x80070057);
  }
  if ( BYTE8(v22) )
    sub_180061A34(v22);
  return v7;
}
