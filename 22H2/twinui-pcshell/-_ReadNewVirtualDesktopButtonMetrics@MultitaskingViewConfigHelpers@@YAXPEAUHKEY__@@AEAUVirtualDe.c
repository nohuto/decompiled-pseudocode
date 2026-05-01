/*
 * XREFs of ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x180407750
 * Callers:
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x180407B24 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x18040687C (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180407934 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadNewVirtualDesktopButtonMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct VirtualDesktopNewButtonMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  unsigned int *v10; // r9
  unsigned int *v11; // r9
  struct _MARGINS *v12; // r9
  int v13; // [rsp+38h] [rbp+10h] BYREF

  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805BBA08,
         (const unsigned __int16 *)&v13,
         a4) >= 0 )
    *(_DWORD *)a2 = v13;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805BB9C8,
         (const unsigned __int16 *)&v13,
         v6) >= 0 )
    *((_DWORD *)a2 + 1) = v13;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_rest_opacity",
    (float *)a2 + 2,
    v7);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_hottrack_opacity",
    (float *)a2 + 4,
    v8);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_pressdown_opacity",
    (float *)a2 + 6,
    v9);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805BB8B8,
         (const unsigned __int16 *)&v13,
         v10) >= 0 )
    *((_DWORD *)a2 + 8) = v13;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (HKEY)&stru_1805BB878,
         (const unsigned __int16 *)&v13,
         v11) >= 0 )
    *((_DWORD *)a2 + 9) = v13;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_1805BBF10,
    (const unsigned __int16 *)a2 + 20,
    v12);
}
