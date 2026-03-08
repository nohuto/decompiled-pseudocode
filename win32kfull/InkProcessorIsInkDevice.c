/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C02010B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C0200C34 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C0240CBC (-IsEnabled@InkProcessor@@QEBA_NXZ.c)
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1C0241A50 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(
        unsigned __int16 a1,
        unsigned __int16 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v5; // ebx
  int InkProcessor; // eax
  InkProcessor *v11; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-40h] BYREF
  InkProcessor **v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v5 = 0;
  v11 = 0LL;
  InkProcessor = GetInkProcessor(&v11);
  if ( InkProcessor >= 0 )
  {
    if ( InkProcessor::IsEnabled(v11) )
      return InkDeviceParser::IsInkDevice(a1, a2, a3, a4);
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v11) = InkProcessor;
    v14 = 4LL;
    v13 = &v11;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v12);
  }
  return v5;
}
