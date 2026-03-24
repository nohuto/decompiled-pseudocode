/*
 * XREFs of GreSetRectRgn @ 0x1C007FC00
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0038920 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006F95C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     SetEmptyRgn @ 0x1C007FBC0 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1C013ECA0 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C014BB30 (EngSetRectRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C007FCD4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebp
  struct _RECTL v10; // [rsp+20h] [rbp-58h] BYREF
  struct _RECTL *v11[8]; // [rsp+30h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 0, 0);
  v8 = 0;
  if ( v11[0] )
  {
    v10.left = a2;
    v10.top = a3;
    v10.right = a4;
    v10.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      ERECTL::vOrder((ERECTL *)&v10);
      RGNOBJ::vSet(v11, &v10);
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v8;
}
