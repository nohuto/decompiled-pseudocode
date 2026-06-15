/*
 * XREFs of sub_180036430 @ 0x180036430
 * Callers:
 *     sub_1800744C0 @ 0x1800744C0 (sub_1800744C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180036430(__int64 a1)
{
  __int64 result; // rax

  result = combase_68(*(unsigned int *)(a1 + 56));
  if ( !(_DWORD)result )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 8LL))(*(_QWORD *)(a1 + 48));
    return 0LL;
  }
  return result;
}
