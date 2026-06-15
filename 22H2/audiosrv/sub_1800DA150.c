/*
 * XREFs of sub_1800DA150 @ 0x1800DA150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D4A5C @ 0x1800D4A5C (sub_1800D4A5C.c)
 */

__int64 __fastcall sub_1800DA150(__int64 a1, void *a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  void *v17; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"PolicyConfigSetProcessingPeriod");
  v19 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a1,
         &v19) >= 0 )
  {
    v9 = (_DWORD *)sub_180008448(v8, sub_1800B6240)[1];
    if ( *v9 > 4u )
    {
      v16 = *a3;
      v17 = a2;
      sub_1800D4A5C((__int64)v9, byte_18016700D, v10, v11, &v17, (__int64)&v16);
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v12 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)qword_18019EED0 + 64LL))(
          qword_18019EED0,
          a2,
          a3);
  sub_18000F690((__int64)pv, v13, v14);
  return v12;
}
