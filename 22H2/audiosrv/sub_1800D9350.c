/*
 * XREFs of sub_1800D9350 @ 0x1800D9350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D9350(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  void *v11; // rcx
  int v12; // edx
  void *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  void *v16; // rcx
  void *Src; // [rsp+38h] [rbp-11h] BYREF
  void **p_Src; // [rsp+40h] [rbp-9h]
  void *v20; // [rsp+48h] [rbp-1h] BYREF
  char v21; // [rsp+50h] [rbp+7h]
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+57h]

  Src = 0LL;
  v8 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector");
  v20 = 0LL;
  p_Src = &Src;
  v21 = 1;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)qword_18019EED0 + 304LL))(
          qword_18019EED0,
          a2,
          a3,
          a4,
          &v20);
  if ( v21 )
  {
    v11 = *p_Src;
    *p_Src = v20;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v10 < 0 )
  {
    v12 = 3874;
LABEL_8:
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v10);
    goto LABEL_10;
  }
  v13 = (void *)sub_180045410(*((unsigned __int16 *)Src + 8) + 18LL);
  *a5 = v13;
  if ( !v13 )
  {
    v10 = -2147024882;
    v12 = 3881;
    goto LABEL_8;
  }
  memcpy(v13, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  v10 = 0;
LABEL_10:
  sub_18000F690((__int64)pv, v14, v15);
  v16 = Src;
  Src = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  return (unsigned int)v10;
}
