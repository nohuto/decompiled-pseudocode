/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01461D0 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A200 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1C014AAA8 (-UT_GetFormatType@@YAHPEAUtagCLIP@@@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  int FormatType; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
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
      if ( (unsigned __int64)(v3 - 1) <= 1 )
        return;
LABEL_7:
      v6 = HMValidateHandleNoSecure(v3, 6);
      if ( v6 )
        HMUnlockDestroyObject(v6);
      return;
    }
    if ( v5 == 1 && (unsigned __int64)(v3 - 3) > 1 )
      GreDeleteServerMetaFile(v3);
  }
  else if ( v3 != 2 )
  {
    GreDeleteObject(v3);
  }
}
