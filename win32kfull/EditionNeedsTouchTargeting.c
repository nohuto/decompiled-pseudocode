__int64 __fastcall EditionNeedsTouchTargeting(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v5; // rsi
  __int128 v6; // xmm0
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-39h] BYREF
  __int128 v10; // [rsp+30h] [rbp-29h] BYREF
  __int128 v11; // [rsp+40h] [rbp-19h] BYREF
  __int128 v12; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v13[3]; // [rsp+60h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 60) || !(unsigned int)TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 32), a2) )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 188) = 0;
  *(_DWORD *)(a3 + 184) = 0;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( (unsigned int)_GetDeviceRects(a2, &v11, &v12) )
  {
    v9 = v12;
    v10 = v11;
    _SetHimetricToPixelRatio(&v10, &v9, a3);
    v5 = &v11;
  }
  v6 = *(_OWORD *)(a2 + 104);
  *(_QWORD *)((char *)v13 + 4) = *(_QWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 100);
  *(_OWORD *)((char *)v13 + 12) = v6;
  *(_OWORD *)((char *)&v13[1] + 12) = v6;
  if ( (v7 & 2) != 0 )
    HIDWORD(v13[2]) = *(_DWORD *)(a2 + 136);
  else
    HIDWORD(v13[2]) = 0;
  TouchTargetingCreateContact(v13, v5, 1LL, a3);
  return 1LL;
}
