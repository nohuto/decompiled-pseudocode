/*
 * XREFs of ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C0207348
 * Callers:
 *     EditionCreateEdgePalmRejectionZones @ 0x1C0207530 (EditionCreateEdgePalmRejectionZones.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C0122BAC (_GetPointerDeviceRects.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C020745C (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::CreateEdgePalmRejectionZones(PalmRejection *this, void *a2)
{
  __int64 v3; // r10
  int v5; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+24h] [rbp-2Ch]
  unsigned int v7; // [rsp+2Ch] [rbp-24h]
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+40h] [rbp-10h] BYREF

  if ( !gPalmRejectSettingsInitialized )
  {
    PalmRejection::_ReadSettingsFromRegKey(this);
    gPalmRejectSettingsInitialized = 1;
  }
  v9 = 0LL;
  GetPointerDeviceRects((__int64)this, &v9, 0LL);
  v5 = 0;
  LODWORD(v9) = 0;
  v3 = HIDWORD(*((_QWORD *)&v9 + 1));
  v8[0] = DWORD2(v9) - gPalmRejectVEdgeThr + 1;
  v6 = __PAIR64__(gPalmRejectVEdgeThr, gPalmRejectTopEdgeThr);
  v7 = HIDWORD(v9) - gPalmRejectHEdgeThr + 1;
  v8[2] = ++DWORD2(v9);
  v8[3] = v7;
  DWORD1(v9) = v7;
  v8[1] = gPalmRejectTopEdgeThr;
  HIDWORD(v9) = v3 + 1;
  AddEdgePalmRejectionZone(this, 1LL, &v5);
  AddEdgePalmRejectionZone(this, 2LL, v8);
  AddEdgePalmRejectionZone(this, 3LL, &v9);
  return 1LL;
}
