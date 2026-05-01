/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800BEF00
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800C12A0 (-serialize@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18009EF04 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

char __fastcall _tip_SearchInputTest::serialize<tson::output_archive>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+20h] [rbp-60h] BYREF
  char v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  const char *v11; // [rsp+38h] [rbp-48h] BYREF
  char v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  const char *v14; // [rsp+50h] [rbp-30h] BYREF
  char v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  const char *v17; // [rsp+68h] [rbp-18h] BYREF
  char v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h]

  v18 = 18;
  v15 = 20;
  v17 = "receivedKeyUpCount";
  v12 = 19;
  v19 = a1 + 32;
  v14 = "receivedKeyDownCount";
  v16 = a1 + 28;
  v11 = "monitoredKeyUpCount";
  v13 = a1 + 24;
  v8 = "monitoredKeyDownCount";
  v10 = a1 + 20;
  v9 = 21;
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v8, a3);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v11, v4);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v14, v5);
  return tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v17, v6);
}
