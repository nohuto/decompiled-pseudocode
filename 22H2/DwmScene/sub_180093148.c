/*
 * XREFs of sub_180093148 @ 0x180093148
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180090BD0 @ 0x180090BD0 (sub_180090BD0.c)
 *     sub_1800CD334 @ 0x1800CD334 (sub_1800CD334.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180093148(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  int v7; // r14d
  __int64 *v8; // rdi
  int v9; // r15d
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-20h]

  *(_DWORD *)(a1 + 292) &= ~0x10000000u;
  *(_DWORD *)(a1 + 292) |= 0x40u;
  *(_DWORD *)(a1 + 288) = 0;
  v6 = (_QWORD *)sub_180062680(a1);
  v7 = *(_DWORD *)(a1 + 304);
  v8 = (__int64 *)(a1 + 272);
  v9 = *(_DWORD *)(a1 + 116);
  v10 = *(_QWORD *)(a1 + 272);
  if ( !v10 )
  {
    sub_180090BD0(v6, &v14, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(v8, &v14);
    v11 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    sub_18006294C(*v8, 8, 0);
    v10 = *v8;
  }
  v12 = sub_180030CCC(12, v9);
  return sub_1800CD334(v10, a2, a3, v12, v7, 12);
}
