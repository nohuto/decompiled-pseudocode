/*
 * XREFs of sub_1800D98E0 @ 0x1800D98E0
 * Callers:
 *     sub_1800DB720 @ 0x1800DB720 (sub_1800DB720.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D98E0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  _QWORD *v5; // r14
  unsigned int i; // ebp
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx

  v3 = (unsigned int *)(a1 + 908);
  v5 = (_QWORD *)(a1 + 8);
  for ( i = 0; i < 0xF; ++i )
  {
    if ( *(_BYTE *)(a1 + 1088) || v5[30] != *v5 || *(v3 - 30) != *(v3 - 45) || (result = *v3, v3[15] != (_DWORD)result) )
    {
      v8 = 16LL * i;
      v9 = v8 + a1;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v8 + a1 + 248), (_QWORD *)(v8 + a1 + 8));
      *(v3 - 30) = *(v3 - 45);
      v10 = *v3;
      v3[15] = *v3;
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int))(*(_QWORD *)a2 + 144LL))(
                 a2,
                 v9 + 248,
                 i,
                 *(v3 - 30),
                 v10);
    }
    ++v3;
    v5 += 2;
  }
  *(_BYTE *)(a1 + 1088) = 0;
  return result;
}
