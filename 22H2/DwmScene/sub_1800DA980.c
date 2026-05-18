/*
 * XREFs of sub_1800DA980 @ 0x1800DA980
 * Callers:
 *     sub_1800DB720 @ 0x1800DB720 (sub_1800DB720.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DA980(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  v5 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 68) || *v2 != *v5)
    && (std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), v5),
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 152LL))(a2, v2),
        *(_BYTE *)(a1 + 68))
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
