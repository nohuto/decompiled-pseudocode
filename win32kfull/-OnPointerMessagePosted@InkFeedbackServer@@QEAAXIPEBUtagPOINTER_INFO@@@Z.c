/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x1C014AC80
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C014AB96 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InkFeedbackServer::OnPointerMessagePosted(
        InkFeedbackServer **this,
        int a2,
        const struct tagPOINTER_INFO *a3)
{
  InkFeedbackServer *i; // rbx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( a2 == 583 || a2 == 594 )
  {
    if ( a3 )
    {
      for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 16LL))((__int64)i - 8, *((unsigned int *)a3 + 1));
    }
    else if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = -1073741823;
      v9 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v7);
    }
  }
}
