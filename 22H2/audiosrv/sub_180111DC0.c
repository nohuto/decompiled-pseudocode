/*
 * XREFs of sub_180111DC0 @ 0x180111DC0
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180111DC0(__int64 a1, _QWORD *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  LPVOID v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+20h] BYREF

  ppv = 0LL;
  v12 = 0LL;
  sub_1800CB144((__int64 *)&ppv);
  v4 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 821;
LABEL_7:
    sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v4);
    goto LABEL_12;
  }
  v7 = ppv;
  v8 = v12;
  v12 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, a1, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 823;
    goto LABEL_7;
  }
  v9 = v12;
  if ( v12 )
  {
    *a2 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    *a2 = 0LL;
  }
  v5 = 0;
LABEL_12:
  sub_18000F708(&v12);
  sub_18000F708((__int64 *)&ppv);
  return v5;
}
