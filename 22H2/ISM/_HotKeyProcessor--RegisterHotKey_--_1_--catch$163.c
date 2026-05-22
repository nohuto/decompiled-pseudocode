/*
 * XREFs of _HotKeyProcessor::RegisterHotKey_::_1_::catch$163 @ 0x1801A160C
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180149140 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall HotKeyProcessor::RegisterHotKey_::_1_::catch_163(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 104) = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(a1, a2, "HotKeyProcessor::RegisterHotKey", 296LL, 14);
  return 0LL;
}
