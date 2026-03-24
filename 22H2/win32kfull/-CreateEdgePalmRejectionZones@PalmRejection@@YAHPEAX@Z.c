/*
 * XREFs of ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C0206D88
 * Callers:
 *     EditionCreateEdgePalmRejectionZones @ 0x1C0206F70 (EditionCreateEdgePalmRejectionZones.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C012282C (_GetPointerDeviceRects.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C0206E9C (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::CreateEdgePalmRejectionZones(PalmRejection *this, void *a2)
{
  __int64 v3; // r10
  _DWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v6; // [rsp+2Ch] [rbp-24h]
  _DWORD v7[4]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF

  if ( !gPalmRejectSettingsInitialized )
  {
    PalmRejection::_ReadSettingsFromRegKey(this);
    gPalmRejectSettingsInitialized = 1;
  }
  v8 = 0LL;
  GetPointerDeviceRects((__int64)this, &v8, 0LL);
  v5[0] = 0;
  LODWORD(v8) = 0;
  v5[2] = gPalmRejectVEdgeThr;
  v3 = HIDWORD(*((_QWORD *)&v8 + 1));
  v7[0] = DWORD2(v8) - gPalmRejectVEdgeThr + 1;
  v5[1] = gPalmRejectTopEdgeThr;
  v6 = HIDWORD(v8) - gPalmRejectHEdgeThr + 1;
  v7[2] = ++DWORD2(v8);
  v7[3] = v6;
  DWORD1(v8) = v6;
  v7[1] = gPalmRejectTopEdgeThr;
  HIDWORD(v8) = v3 + 1;
  AddEdgePalmRejectionZone(this, 1LL, v5);
  AddEdgePalmRejectionZone(this, 2LL, v7);
  AddEdgePalmRejectionZone(this, 3LL, &v8);
  return 1LL;
}
