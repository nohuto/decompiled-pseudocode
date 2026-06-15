/*
 * XREFs of sub_1800DFF60 @ 0x1800DFF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011A288 @ 0x18011A288 (sub_18011A288.c)
 */

__int64 __fastcall sub_1800DFF60(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v13 = 0LL;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioServerIsRawStreamSupported");
  if ( a3 > 3 )
  {
    v9 = -2147024809;
LABEL_3:
    sub_18005E8F8((__int64)"AudioServerIsRawStreamSupported", 4506, v9);
    goto LABEL_4;
  }
  v9 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         a2,
         0LL,
         0LL,
         &v13);
  if ( v9 < 0 )
    goto LABEL_3;
  *a4 = (unsigned __int8)sub_18011A288(v13, a3) != 0;
LABEL_4:
  if ( v9 < 0 )
    sub_18004BD84((int)retaddr, 4507, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v9);
  sub_18000F690((__int64)pv, v10, v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v9;
}
