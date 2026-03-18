/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C021AC20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C024C77C (-IsEnabled@InkProcessor@@QEBA_NXZ.c)
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1C024D5B0 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(
        unsigned __int16 a1,
        unsigned __int16 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v5; // ebx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v5 = 0;
  if ( InkProcessor::s_pInstance )
  {
    if ( InkProcessor::IsEnabled(InkProcessor::s_pInstance) )
      return InkDeviceParser::IsInkDevice(a1, a2, a3, a4);
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
    v10 = -1073741823;
    v12 = &v10;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0326250, (unsigned __int8 *)dword_1C02EFE22, 0LL, 0LL, 3u, &v11);
  }
  return v5;
}
