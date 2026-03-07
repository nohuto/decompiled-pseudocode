wchar_t *__fastcall WppGuidToStr(wchar_t *buf, const _GUID *guid)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r11

  WppIntToHex(buf, guid->Data1, 8);
  *(_WORD *)(v2 + 16) = 45;
  WppIntToHex((wchar_t *)(v2 + 18), *(unsigned __int16 *)(v3 + 4), 4);
  *(_WORD *)(v4 + 26) = 45;
  WppIntToHex((wchar_t *)(v4 + 28), *(unsigned __int16 *)(v5 + 6), 4);
  *(_WORD *)(v6 + 36) = 45;
  WppIntToHex((wchar_t *)(v6 + 38), *(unsigned __int8 *)(v7 + 8), 2);
  WppIntToHex((wchar_t *)(v9 + 42), *(unsigned __int8 *)(v8 + 9), 2);
  *(_WORD *)(v10 + 46) = 45;
  WppIntToHex((wchar_t *)(v10 + 48), *(unsigned __int8 *)(v11 + 10), 2);
  WppIntToHex((wchar_t *)(v13 + 52), *(unsigned __int8 *)(v12 + 11), 2);
  WppIntToHex((wchar_t *)(v15 + 56), *(unsigned __int8 *)(v14 + 12), 2);
  WppIntToHex((wchar_t *)(v17 + 60), *(unsigned __int8 *)(v16 + 13), 2);
  WppIntToHex((wchar_t *)(v19 + 64), *(unsigned __int8 *)(v18 + 14), 2);
  WppIntToHex((wchar_t *)(v21 + 68), *(unsigned __int8 *)(v20 + 15), 2);
  *(_WORD *)(v22 + 72) = 0;
  return (wchar_t *)v22;
}
