/*
 * XREFs of ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEBG_K01@Z @ 0x180011604
 * Callers:
 *     ?GetMainViewMode@ViewModeHelpers@Cortana@@YA?AW4MainViewMode@12@PEAUHSTRING__@@@Z @ 0x180011244 (-GetMainViewMode@ViewModeHelpers@Cortana@@YA-AW4MainViewMode@12@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?AreEqual@ViewModeHelpers@Cortana@@YA_NPEBG_K01@Z @ 0x180011908 (-AreEqual@ViewModeHelpers@Cortana@@YA_NPEBG_K01@Z.c)
 */

__int64 __fastcall Cortana::ViewModeHelpers::GetMainViewMode(
        Cortana::ViewModeHelpers *a1,
        const unsigned __int16 *a2,
        Cortana::ViewModeHelpers *a3,
        const unsigned __int16 *a4)
{
  int v4; // ebx
  int v9; // edi
  unsigned __int64 v11; // [rsp+20h] [rbp-8h]
  unsigned __int64 v12; // [rsp+20h] [rbp-8h]
  unsigned __int64 v13; // [rsp+20h] [rbp-8h]
  unsigned __int64 v14; // [rsp+20h] [rbp-8h]
  unsigned __int64 v15; // [rsp+20h] [rbp-8h]
  unsigned __int64 v16; // [rsp+20h] [rbp-8h]
  unsigned __int64 v17; // [rsp+20h] [rbp-8h]
  unsigned __int64 v18; // [rsp+20h] [rbp-8h]
  unsigned __int64 v19; // [rsp+20h] [rbp-8h]
  unsigned __int64 v20; // [rsp+20h] [rbp-8h]
  unsigned __int64 v21; // [rsp+20h] [rbp-8h]
  unsigned __int64 v22; // [rsp+20h] [rbp-8h]
  unsigned __int64 v23; // [rsp+20h] [rbp-8h]
  unsigned __int64 v24; // [rsp+20h] [rbp-8h]
  unsigned __int64 v25; // [rsp+20h] [rbp-8h]
  unsigned __int64 v26; // [rsp+20h] [rbp-8h]
  unsigned __int64 v27; // [rsp+20h] [rbp-8h]
  unsigned __int64 v28; // [rsp+20h] [rbp-8h]
  unsigned __int64 v29; // [rsp+20h] [rbp-8h]
  unsigned __int64 v30; // [rsp+20h] [rbp-8h]
  unsigned __int64 v31; // [rsp+20h] [rbp-8h]

  v4 = 0;
  if ( !a1 || Cortana::ViewModeHelpers::AreEqual(a1, a2, (unsigned __int64)L"Unknown", (const unsigned __int16 *)7, v11) )
  {
    v9 = 0;
    if ( a3
      && (Cortana::ViewModeHelpers::AreEqual(
            a3,
            a4,
            (unsigned __int64)L"CenterScreen",
            (const unsigned __int16 *)0xC,
            v11)
       || Cortana::ViewModeHelpers::AreEqual(
            a3,
            a4,
            (unsigned __int64)L"MergedHome",
            (const unsigned __int16 *)0xA,
            v27)
       || Cortana::ViewModeHelpers::AreEqual(a3, a4, (unsigned __int64)L"Idle", (const unsigned __int16 *)4, v28)
       || Cortana::ViewModeHelpers::AreEqual(a3, a4, (unsigned __int64)L"MyStuff", (const unsigned __int16 *)7, v29)
       || Cortana::ViewModeHelpers::AreEqual(
            a3,
            a4,
            (unsigned __int64)L"QFSearchBox",
            (const unsigned __int16 *)0xB,
            v30)
       || Cortana::ViewModeHelpers::AreEqual(
            a3,
            a4,
            (unsigned __int64)L"AppTransition",
            (const unsigned __int16 *)0xD,
            v31)) )
    {
      v9 = 1;
    }
  }
  else
  {
    if ( Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"SearchButton",
           (const unsigned __int16 *)0xC,
           v11)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"TaskBarSearchBox",
           (const unsigned __int16 *)0x10,
           v12)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"TaskBarSearchBoxOnStartup",
           (const unsigned __int16 *)0x19,
           v13)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"TextShortcutKey",
           (const unsigned __int16 *)0xF,
           v14)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"StartContextMenu",
           (const unsigned __int16 *)0x10,
           v15)
      || Cortana::ViewModeHelpers::AreEqual(a1, a2, (unsigned __int64)L"TextPTPTap", (const unsigned __int16 *)0xA, v16)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"StartButton",
           (const unsigned __int16 *)0xB,
           v17)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"StartLightDismiss",
           (const unsigned __int16 *)0x11,
           v18)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"HardwareBtn",
           (const unsigned __int16 *)0xB,
           v19)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"PressAndHoldSearchButton",
           (const unsigned __int16 *)0x18,
           v20)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"BingSafeSearch",
           (const unsigned __int16 *)0xE,
           v21)
      || Cortana::ViewModeHelpers::AreEqual(a1, a2, (unsigned __int64)L"Hidden", (const unsigned __int16 *)6, v22)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"MSWindowsSearchProtocol",
           (const unsigned __int16 *)0x17,
           v23)
      || Cortana::ViewModeHelpers::AreEqual(a1, a2, (unsigned __int64)L"CortanaApp", (const unsigned __int16 *)0xA, v24)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"TaskBarSearchBoxDragAndDrop",
           (const unsigned __int16 *)0x1B,
           v25)
      || Cortana::ViewModeHelpers::AreEqual(
           a1,
           a2,
           (unsigned __int64)L"TaskBarDynamicSearchBox",
           (const unsigned __int16 *)0x17,
           v26) )
    {
      v4 = 1;
    }
    v9 = v4;
  }
  return (unsigned int)(v9 + 1);
}
