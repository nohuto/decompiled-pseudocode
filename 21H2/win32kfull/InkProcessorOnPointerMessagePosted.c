/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x1C021AD00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C024CDC0 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(unsigned int a1, unsigned __int64 a2)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnPointerMessagePosted(InkProcessor::s_pInstance, a1, a2);
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
    v2 = -1073741823;
    v4 = &v2;
    v6 &= (unsigned int)InkProcessor::s_pInstance;
    v5 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0326250, (unsigned __int8 *)dword_1C02EFE22, 0LL, 0LL, 3u, &v3);
  }
}
