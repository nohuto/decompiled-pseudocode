/*
 * XREFs of sub_18001DA88 @ 0x18001DA88
 * Callers:
 *     sub_180017E8C @ 0x180017E8C (sub_180017E8C.c)
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18001D3DC @ 0x18001D3DC (sub_18001D3DC.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001DA88(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  signed int v5; // edi
  volatile signed __int32 *v6; // rbx
  int v7; // edx
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  _QWORD v11[4]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[8]; // [rsp+68h] [rbp+Fh] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+17h]
  _BYTE v15[8]; // [rsp+78h] [rbp+1Fh] BYREF
  volatile signed __int32 *v16; // [rsp+80h] [rbp+27h]
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = a1 + 2;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 2, a2);
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001269C(v11, (__int64)&unk_180208688);
  v4 = (_QWORD *)sub_180087A00(*v3, v13, v11);
  v5 = sub_18001D3DC(a1 + 4, v4);
  v6 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( v5 < 0 )
  {
    v7 = 33;
LABEL_7:
    sub_18000DC98(retaddr, v7, (__int64)"SpectreWorld.cpp", v5);
    return (unsigned int)v5;
  }
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_18001269C(v12, (__int64)&qword_1802086E8);
  v9 = (_QWORD *)sub_180087A00(*v3, v15, v12);
  v5 = sub_18001D3DC(a1 + 5, v9);
  v10 = v16;
  if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v5 < 0 )
  {
    v7 = 37;
    goto LABEL_7;
  }
  return 0LL;
}
