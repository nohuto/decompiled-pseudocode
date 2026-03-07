__int64 __fastcall PalmRejection::CreateEdgePalmRejectionZones(PalmRejection *this, void *a2)
{
  PalmRejection *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r14d
  int v16; // r13d
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  int v23; // [rsp+20h] [rbp-20h] BYREF
  int v24; // [rsp+24h] [rbp-1Ch]
  int v25; // [rsp+28h] [rbp-18h]
  int v26; // [rsp+2Ch] [rbp-14h]
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF
  int v29; // [rsp+88h] [rbp+48h]
  int v30; // [rsp+90h] [rbp+50h]

  if ( !*(_DWORD *)(SGDGetUserSessionState(this) + 17352) )
  {
    PalmRejection::_ReadSettingsFromRegKey(v3);
    *(_DWORD *)(SGDGetUserSessionState(v4) + 17352) = 1;
  }
  v27 = 0LL;
  GetPointerDeviceRects((__int64)this, &v27, 0LL);
  v6 = *(_DWORD *)(SGDGetUserSessionState(v5) + 17364);
  v8 = *(_DWORD *)(SGDGetUserSessionState(v7) + 17360);
  v10 = *(_DWORD *)(SGDGetUserSessionState(v9) + 17356);
  v12 = *(_DWORD *)(SGDGetUserSessionState(v11) + 17360);
  v14 = SGDGetUserSessionState(v13);
  v15 = DWORD2(v27);
  v16 = *(_DWORD *)(v14 + 17364);
  v29 = DWORD2(v27) + 1;
  v18 = *(_DWORD *)(SGDGetUserSessionState(v17) + 17356);
  v20 = SGDGetUserSessionState(v19);
  v23 = 0;
  v25 = v8;
  v21 = HIDWORD(v27);
  v30 = *(_DWORD *)(v20 + 17356);
  v24 = v6;
  v26 = HIDWORD(v27) - v10 + 1;
  AddEdgePalmRejectionZone(this, 1LL, &v23);
  v24 = v16;
  v25 = v29;
  v23 = v15 - v12 + 1;
  v26 = v21 - v18 + 1;
  AddEdgePalmRejectionZone(this, 2LL, &v23);
  v23 = 0;
  v25 = v29;
  v24 = v21 - v30 + 1;
  v26 = v21 + 1;
  AddEdgePalmRejectionZone(this, 3LL, &v23);
  return 1LL;
}
