/*
 * XREFs of sub_18010AF30 @ 0x18010AF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007FC9C @ 0x18007FC9C (sub_18007FC9C.c)
 *     sub_180080B78 @ 0x180080B78 (sub_180080B78.c)
 *     sub_180092720 @ 0x180092720 (sub_180092720.c)
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_180092738 @ 0x180092738 (sub_180092738.c)
 *     sub_180095BB4 @ 0x180095BB4 (sub_180095BB4.c)
 *     sub_180095BE0 @ 0x180095BE0 (sub_180095BE0.c)
 *     sub_1800ACD60 @ 0x1800ACD60 (sub_1800ACD60.c)
 *     sub_1800EFFC8 @ 0x1800EFFC8 (sub_1800EFFC8.c)
 *     sub_1800F0038 @ 0x1800F0038 (sub_1800F0038.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18010AF30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // r8
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+6Ch] [rbp-9Ch]
  int v20; // [rsp+7Ch] [rbp-8Ch]
  __int128 v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+90h] [rbp-78h]
  __int128 v23; // [rsp+94h] [rbp-74h]
  int v24; // [rsp+A4h] [rbp-64h]
  __m128 v25[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v26[4]; // [rsp+E8h] [rbp-20h] BYREF

  v17 = 0LL;
  sub_180095BB4(a2, &v17);
  sub_180092720(v17);
  sub_18009272C(v17);
  sub_180092738(v17);
  v16 = 0LL;
  result = (__int64)sub_180095BE0(a2, &v16, a3, 0);
  if ( (_QWORD)v16 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(a2 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(a2 + 56);
          v7 = *(volatile signed __int32 **)(a2 + 64);
          break;
        }
      }
    }
    sub_18007FC9C(v6, (__int64)v25);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v10 = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
        {
          v10 = *(_QWORD *)(a2 + 56);
          v11 = *(volatile signed __int32 **)(a2 + 64);
          break;
        }
      }
    }
    sub_180080B78(v10, (__int64)v26);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v18 = 1065353216;
    v19 = 0LL;
    v20 = 1065353216;
    v21 = 0LL;
    v22 = 1065353216;
    v23 = 0LL;
    v24 = 1065353216;
    sub_1800ACD60(v25, &v18);
    sub_1800EFFC8(v16, &qword_18020B6F8, &v18);
    sub_1800EFFC8(v16, &qword_18020B718, v26);
    sub_1800F0038(v16, &qword_18020B738);
    sub_1800F0038(v16, &qword_18020B758);
    result = sub_1800F0038(v16, &qword_18020B778);
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
