/*
 * XREFs of sub_1800DFDC0 @ 0x1800DFDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800718D4 @ 0x1800718D4 (sub_1800718D4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C65D8 @ 0x1800C65D8 (sub_1800C65D8.c)
 */

__int64 __fastcall sub_1800DFDC0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v8 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"AudioServerIsOffloadCapable");
  v19 = 0LL;
  v10 = *(_QWORD *)qword_18019E618;
  v11 = sub_1800C65D8((__int64)&v19);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 32))(qword_18019E618, a1, v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE60 + 80LL))(qword_18019EE60, v19)
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 144LL))(v19, a3, 0LL) )
    {
      v20 = 0LL;
      v14 = sub_1800718D4(&v20);
      v15 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
              ::pv,
              a2,
              0LL,
              0LL,
              v14);
      v13 = v15;
      if ( v15 >= 0 )
      {
        *a4 = sub_180047F60(v20);
        v13 = 0;
      }
      else
      {
        sub_18004BD84((int)retaddr, 4460, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v15);
      }
      sub_18000F708(&v20);
    }
    else
    {
      *a4 = 0;
      v13 = 0;
    }
  }
  else
  {
    sub_18004BD84((int)retaddr, 4446, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
  }
  sub_18000F708(&v19);
  sub_18000F690((__int64)pv, v16, v17);
  return v13;
}
