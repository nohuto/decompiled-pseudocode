/*
 * XREFs of sub_180072244 @ 0x180072244
 * Callers:
 *     sub_18006CF7C @ 0x18006CF7C (sub_18006CF7C.c)
 *     sub_18006D178 @ 0x18006D178 (sub_18006D178.c)
 *     sub_18006F4F4 @ 0x18006F4F4 (sub_18006F4F4.c)
 *     sub_18007B574 @ 0x18007B574 (sub_18007B574.c)
 *     sub_18007B9BC @ 0x18007B9BC (sub_18007B9BC.c)
 *     sub_18007BCE0 @ 0x18007BCE0 (sub_18007BCE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072244(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
