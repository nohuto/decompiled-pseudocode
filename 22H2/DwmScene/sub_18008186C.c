/*
 * XREFs of sub_18008186C @ 0x18008186C
 * Callers:
 *     sub_1800817CC @ 0x1800817CC (sub_1800817CC.c)
 * Callees:
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_18007E6A4 @ 0x18007E6A4 (sub_18007E6A4.c)
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_18007E7C8 @ 0x18007E7C8 (sub_18007E7C8.c)
 *     sub_18007E934 @ 0x18007E934 (sub_18007E934.c)
 *     sub_18007E9CC @ 0x18007E9CC (sub_18007E9CC.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_1800807D8 @ 0x1800807D8 (sub_1800807D8.c)
 *     sub_1800833A8 @ 0x1800833A8 (sub_1800833A8.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_18008186C(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax

  sub_1800839A4(a1);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        goto LABEL_7;
    }
    while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
    v2 = *(volatile signed __int32 **)(a1 + 80);
  }
LABEL_7:
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  sub_1800759EC();
}
