__int64 __fastcall AnFwConfigureProgressResources(__int64 a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140D16700, NotificationEvent, 1u);
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 )
    return 0LL;
  if ( dword_140C0E53C == 1 )
  {
    word_140C0B4E4 = 0;
    word_140C0B4DC = -7936;
    word_140C0B4E8 = -7818;
    word_140C0B4E0 = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL, &v5) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140C0E530);
  v4[1] = dword_140C0E538;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD *)a1, (_DWORD *)(a1 + 8), (__int64)v4, (_QWORD *)(a1 + 28), &v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140C0E3D4 = ((BgpGxRectangleSize(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 8), BitsPerPixel) + 15) & 0xFFFFFFF0)
                  + 128;
  dword_140C0E3D0 = dword_140C0E3D4 * ((unsigned __int16)word_140C0B4E8 - (unsigned __int16)word_140C0B4DC + 1);
  dword_140C0E3D8 = BgpTxtRegionSize(v8);
  return v8;
}
