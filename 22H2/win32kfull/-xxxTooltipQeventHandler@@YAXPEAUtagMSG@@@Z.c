/*
 * XREFs of ?xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z @ 0x1C013D724
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013CFE4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x1C013D668 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 */

void __fastcall xxxTooltipQeventHandler(struct tagMSG *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_DWORD *)a1 + 6) )
    xxxTooltipCallback(0, 0LL, 0LL, a4);
  else
    xxxTooltipCreateCallback(*(HWND *)a1, *((_DWORD *)a1 + 4));
}
