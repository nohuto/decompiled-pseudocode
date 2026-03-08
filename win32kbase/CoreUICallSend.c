/*
 * XREFs of CoreUICallSend @ 0x1C00AE1E8
 * Callers:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00831CC (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00C02B8 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00C077C (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00CE7F4 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00CE8B4 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 * Callees:
 *     CoreUICallSendVaList @ 0x1C00AE220 (CoreUICallSendVaList.c)
 */

__int64 CoreUICallSend(int a1, int a2, int a3, int a4, __int16 a5, __int64 a6, ...)
{
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  return CoreUICallSendVaList(a1, a2, a3, a4, a5, a6, va);
}
