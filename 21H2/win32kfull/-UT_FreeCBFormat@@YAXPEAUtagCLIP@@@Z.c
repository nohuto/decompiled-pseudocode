/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015CD28
 * Callers:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C002F5A8 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123C80 (xxxEmptyClipboard.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015CBDC (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021F03C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021F1E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021F394 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1C015CDA4 (-UT_GetFormatType@@YAHPEAUtagCLIP@@@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B8C84 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  int FormatType; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( !*((_QWORD *)a1 + 1) )
    return;
  FormatType = UT_GetFormatType(a1);
  if ( !FormatType )
  {
    if ( !*(_DWORD *)(v2 + 16) )
      return;
    goto LABEL_7;
  }
  v4 = FormatType - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( v3 - 1 <= 1 )
        return;
LABEL_7:
      v6 = HMValidateHandleNoSecure(v3, 6);
      if ( v6 )
        HMUnlockDestroyObject(v6);
      return;
    }
    if ( v5 == 1 && v3 - 3 > 1 )
      GreDeleteServerMetaFile(v3);
  }
  else if ( v3 != 2 )
  {
    GreDeleteObject(v3);
  }
}
