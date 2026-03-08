/*
 * XREFs of ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800DB430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CShape::IsEmpty(CShape *this)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0LL;
  (*(void (__fastcall **)(CShape *, __int128 *, _QWORD))(v1 + 48))(this, &v3, 0LL);
  return *((float *)&v3 + 2) <= *(float *)&v3 || *((float *)&v3 + 3) <= *((float *)&v3 + 1);
}
