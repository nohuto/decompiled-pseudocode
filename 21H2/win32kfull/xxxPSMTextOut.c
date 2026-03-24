/*
 * XREFs of xxxPSMTextOut @ 0x1C025306C
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024C1AC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     GreGetTextMetricsW @ 0x1C00E3594 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00E36CC (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x1C015840C (GreGetTextColor.c)
 *     CALL_LPK @ 0x1C01594AC (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C0233404 (xxxClientPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025EE64 (GetPrefixCount.c)
 */

void __fastcall xxxPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, PCWSTR SourceString, unsigned int a5, int a6)
{
  unsigned __int16 *v6; // rsi
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  int PrefixCount; // edi
  int TextMetricsW; // eax
  int v15; // ebx
  LONG v16; // edi
  int TextColor; // eax
  int v18; // ebx
  struct _POINTL v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h]
  __int128 v22; // [rsp+88h] [rbp-78h]
  _OWORD v23[5]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v24; // [rsp+100h] [rbp+0h] BYREF

  v6 = &word_1C0341B30;
  v8 = 0;
  v19 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    xxxClientPSMTextOut(a1, a2, a3, &DestinationString.Length, a5, a6);
  }
  else if ( a5 < 0xFF || (v6 = (unsigned __int16 *)Win32AllocPool(2LL * (int)(a5 + 1), 1953657685LL)) != 0LL )
  {
    PrefixCount = GetPrefixCount(SourceString, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v23, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v23);
      v21 = v23[0];
      v22 = v23[2];
      if ( TextMetricsW )
      {
        v15 = v22;
        v8 = DWORD1(v21);
      }
      else
      {
        v15 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, (struct tagSIZE *)&v19, 1);
        a2 += v19.x - v15;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, (struct tagSIZE *)&v19, 1);
      v16 = v8 + a3 + 1;
      v24.left = a2;
      v24.top = v16;
      v24.bottom = v16 + 1;
      v24.right = a2 + LOWORD(v19.x) - v15 / 2;
      TextColor = GreGetTextColor(a1);
      v18 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, a2, v16, 2, &v24, (unsigned __int16 *)&word_1C02E597C, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v18);
    }
    if ( v6 != &word_1C0341B30 )
      Win32FreePool(v6);
  }
}
