/*
 * XREFs of ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D68C
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007DFA0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018CFE0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801926C0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD **__fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::operator=(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  if ( a1 != a2 )
  {
    v3 = (_QWORD *)*a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      v5 = (std::_Ref_count_base *)v4[3];
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      operator delete(v4, (const struct std::nothrow_t *)0x20);
    }
  }
  return a1;
}
