/*
 * XREFs of GreSetRectRgn @ 0x1C008E9A0
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C002C8B0 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006D8F4 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngSetRectRgn @ 0x1C008E8D0 (EngSetRectRgn.c)
 *     SetEmptyRgn @ 0x1C008E960 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1C016BCB0 (NtGdiSetRectRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r14d
  struct _RECTL v10; // [rsp+20h] [rbp-50h] BYREF
  struct _RECTL *v11[8]; // [rsp+30h] [rbp-40h] BYREF

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
      if ( a2 > a4 )
      {
        v10.left = a4;
        v10.right = a2;
      }
      if ( a3 > a5 )
      {
        v10.top = a5;
        v10.bottom = a3;
      }
      RGNOBJ::vSet(v11, &v10);
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v8;
}
