/*
 * XREFs of sub_1800EE3A0 @ 0x1800EE3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800EE3A0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  int v15; // r9d
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"s_apmGetPersistedDefaultAudioEndpoint");
  if ( a4 <= 2 )
  {
    v17 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 40LL))(
            qword_18019E618,
            a2,
            &v17);
    v10 = v13;
    if ( v13 >= 0 )
    {
      if ( !v17 )
      {
        v10 = -2147024809;
        v14 = 153;
        v15 = -2147024809;
LABEL_10:
        sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v15);
LABEL_12:
        sub_18000F708(&v17);
        goto LABEL_13;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 32LL))(v17, a3, a4, a5);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v10 = 0;
        goto LABEL_12;
      }
      v14 = 155;
    }
    else
    {
      v14 = 152;
    }
    v15 = v13;
    goto LABEL_10;
  }
  v10 = -2147024809;
  sub_18004BD84((int)retaddr, 146, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", -2147024809);
LABEL_13:
  sub_18000F690((__int64)pv, v11, v12);
  return v10;
}
