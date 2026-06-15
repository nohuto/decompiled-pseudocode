/*
 * XREFs of sub_1800469B0 @ 0x1800469B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800469B0(__int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"s_pbmRegisterAppManagerNotification");
  if ( (unsigned int)IsPbmRegisterAppManagerNotificationSupported() )
  {
    v2 = PbmRegisterAppManagerNotification(a1);
  }
  else if ( qword_18019E618 )
  {
    v9 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
           qword_18019E618,
           a1,
           &v9);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E618 + 104LL))(qword_18019E618, v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_18000F690((__int64)pv, v5, v6);
  return (unsigned int)v2;
}
