/*
 * XREFs of sub_1800520F0 @ 0x1800520F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800520F0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ebx
  unsigned __int64 v11; // r8
  void *v12; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormat");
  *a4 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **))(*(_QWORD *)qword_18019EED0 + 32LL))(
          qword_18019EED0,
          a2,
          a3,
          &Src);
  if ( v10 >= 0 )
  {
    v12 = (void *)sub_180045410(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v12;
    if ( v12 )
      memcpy(v12, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v10 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v10 < 0 )
    sub_18005E8F8("PolicyConfigGetDeviceFormat", 3860LL, (unsigned int)v10);
  sub_18000F690((__int64)pv, v9, v11);
  return (unsigned int)v10;
}
