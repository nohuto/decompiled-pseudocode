/*
 * XREFs of ?GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z @ 0x1C0011464
 * Callers:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0011344 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001EC08 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x1C0073BC0 (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(
        MonDescParser::EDID_PARSER *this,
        int a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 i; // rcx
  char v5; // dl

  v2 = *(_QWORD *)this + 18LL * a2;
  for ( result = 0LL; result < 0xD; ++result )
  {
    if ( *(_BYTE *)(result + v2 + 59) == 10 )
      break;
  }
  for ( i = result + 1; i < 0xD; ++i )
  {
    v5 = *(_BYTE *)(i + v2 + 59);
    if ( (v5 & 0xDE) != 0 || v5 == 33 )
      return 0LL;
  }
  return result;
}
