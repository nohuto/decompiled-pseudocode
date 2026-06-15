/*
 * XREFs of sub_1800B85A0 @ 0x1800B85A0
 * Callers:
 *     sub_1800BA8D0 @ 0x1800BA8D0 (sub_1800BA8D0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

BOOL __fastcall sub_1800B85A0(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  BOOL result; // eax

  if ( !a1 )
  {
    sub_1800BB2C8(3221225477LL);
    __debugbreak();
  }
  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      ((void (__fastcall *)(_QWORD))*v2)(v2[1]);
      v3 = (_QWORD *)v2[2];
      result = sub_18006A148(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
