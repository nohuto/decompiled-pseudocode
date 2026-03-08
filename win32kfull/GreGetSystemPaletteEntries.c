/*
 * XREFs of GreGetSystemPaletteEntries @ 0x1C02D3540
 * Callers:
 *     CreateScreenPalette @ 0x1C022ADA8 (CreateScreenPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteEntries(HDC a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  __int64 v8; // rbx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  Entries = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v8 = *(_QWORD *)(v12[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v10);
    if ( (*(_DWORD *)(v8 + 2140) & 0x100) != 0 )
    {
      v11 = *(_QWORD *)(v8 + 1776);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v11, a2, a3, a4, 1);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v10);
    if ( v12[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  return Entries;
}
