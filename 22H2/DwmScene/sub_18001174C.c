/*
 * XREFs of sub_18001174C @ 0x18001174C
 * Callers:
 *     sub_180017958 @ 0x180017958 (sub_180017958.c)
 * Callees:
 *     sub_180010C38 @ 0x180010C38 (sub_180010C38.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_18007FC94 @ 0x18007FC94 (sub_18007FC94.c)
 *     sub_18008B774 @ 0x18008B774 (sub_18008B774.c)
 *     sub_18008B778 @ 0x18008B778 (sub_18008B778.c)
 *     sub_18008B780 @ 0x18008B780 (sub_18008B780.c)
 *     sub_18008B784 @ 0x18008B784 (sub_18008B784.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001174C(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(a1 + 48) = a2;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
      v8 = v7 == 2;
    else
      v8 = 2;
    v9 = sub_18007FC94(*a3);
    v10 = sub_1800752B4(v9, 1LL);
    v11 = sub_180010C38(*(_QWORD *)(a1 + 16), &v15);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), v11);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_18008B784(*(_QWORD *)(a1 + 32), v8);
    sub_18008B778(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_18008B774(*(_QWORD *)(a1 + 32), 3LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180209368, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180209728, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180209AE8, 0LL) )
    {
      v6 = 1;
    }
    LOBYTE(v13) = v6;
    sub_18008B780(*(_QWORD *)(a1 + 32), v13);
  }
  return 0LL;
}
