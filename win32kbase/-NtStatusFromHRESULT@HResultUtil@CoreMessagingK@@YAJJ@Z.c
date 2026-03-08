/*
 * XREFs of ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0273FB0
 * Callers:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00831CC (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00C02B8 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00C077C (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00CE7F4 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00CE8B4 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::HResultUtil::NtStatusFromHRESULT(CoreMessagingK::HResultUtil *this)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  if ( ((unsigned int)this & 0x10000000) != 0 )
    return (unsigned int)this & 0xEFFFFFFF;
  if ( ((unsigned int)this & 0xFFF0000) == 0x70000 )
  {
    result = (unsigned __int16)this;
    v2 = (unsigned __int16)this | 0xC0070000;
    if ( (_DWORD)result )
      return v2;
  }
  else if ( ((unsigned int)this & 0xFFF0000) == 0x280000 )
  {
    return (unsigned __int16)this | 0xC0290000;
  }
  else
  {
    result = 3221225473LL;
    if ( (int)this >= 0 )
      return 0LL;
  }
  return result;
}
