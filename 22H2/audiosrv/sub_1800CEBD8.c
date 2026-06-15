/*
 * XREFs of sub_1800CEBD8 @ 0x1800CEBD8
 * Callers:
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 * Callees:
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C8A28 @ 0x1800C8A28 (sub_1800C8A28.c)
 *     sub_1800CECB0 @ 0x1800CECB0 (sub_1800CECB0.c)
 *     sub_1800CF544 @ 0x1800CF544 (sub_1800CF544.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CEBD8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rax

  v3 = a1 + 56;
  v4 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = sub_18002C4D0(v3);
  if ( v7 )
  {
    do
    {
      v8 = (__int64 *)sub_1800CF544(v6, v7);
      v4 = *v8;
      if ( *v8 && (unsigned int)sub_1800C8A28(*v8) )
        break;
      v4 = 0LL;
      v7 = sub_1800CECB0(v3, v7);
    }
    while ( v7 );
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *a2 = v4;
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4 == 0 ? 0x80070490 : 0;
}
