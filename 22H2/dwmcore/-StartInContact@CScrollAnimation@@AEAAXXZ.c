/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180203D38
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802034B0 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152990 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  void (*v4)(void); // rax
  CScrollAnimation *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  CScrollAnimation **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
  v7 = 0LL;
  v3 = *(_QWORD *)this;
  *(_OWORD *)((char *)this + 408) = 0LL;
  *((_QWORD *)this + 42) = v2;
  v4 = *(void (**)(void))(v3 + 336);
  *((_QWORD *)this + 53) = v7;
  v4();
  *((_DWORD *)this + 78) = 1;
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v10 = 0;
    v8 = &v5;
    v5 = this;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344E80,
      (unsigned __int8 *)dword_1802E9DBC,
      0LL,
      0LL,
      3u,
      &v6);
  }
}
