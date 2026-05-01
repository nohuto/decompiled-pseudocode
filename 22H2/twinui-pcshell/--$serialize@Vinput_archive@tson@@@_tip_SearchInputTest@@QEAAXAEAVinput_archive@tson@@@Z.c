/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800BEE28
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800C0F10 (-deserialize@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EE80 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

bool __fastcall _tip_SearchInputTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-60h] BYREF
  char v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  const char *v7; // [rsp+38h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const char *v10; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  const char *v13; // [rsp+68h] [rbp-18h] BYREF
  char v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]

  v14 = 18;
  v11 = 20;
  v13 = "receivedKeyUpCount";
  v8 = 19;
  v15 = a1 + 32;
  v10 = "receivedKeyDownCount";
  v12 = a1 + 28;
  v7 = "monitoredKeyUpCount";
  v9 = a1 + 24;
  v4 = "monitoredKeyDownCount";
  v6 = a1 + 20;
  v5 = 21;
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v4);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v7);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v10);
  return tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v13);
}
