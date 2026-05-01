/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180134704
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180145130 (-deserialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAE.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1801344E8 (--$process@V-$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V-$nvp@AEAV-$basic_string@GU-$char_tra.c)
 */

bool __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+40h] [rbp-59h] BYREF
  char v4; // [rsp+48h] [rbp-51h]
  __int64 v5; // [rsp+50h] [rbp-49h]
  __int64 v6; // [rsp+58h] [rbp-41h] BYREF
  char v7; // [rsp+60h] [rbp-39h]
  __int64 v8; // [rsp+68h] [rbp-31h]
  __int64 v9; // [rsp+70h] [rbp-29h] BYREF
  char v10; // [rsp+78h] [rbp-21h]
  __int64 v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h] BYREF
  char v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  const char *v15; // [rsp+A0h] [rbp+7h] BYREF
  char v16; // [rsp+A8h] [rbp+Fh]
  __int64 v17; // [rsp+B0h] [rbp+17h]
  const char *v18; // [rsp+B8h] [rbp+1Fh] BYREF
  char v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  const char *v21; // [rsp+D0h] [rbp+37h] BYREF
  char v22; // [rsp+D8h] [rbp+3Fh]
  __int64 v23; // [rsp+E0h] [rbp+47h]

  v4 = 16;
  v3 = (__int64)"pinFailureResult";
  v7 = 6;
  v5 = a1 + 100;
  v10 = 21;
  v6 = (__int64)"caller";
  v13 = 11;
  v8 = a1 + 96;
  v16 = 20;
  v9 = (__int64)"consentDialogApproved";
  v11 = a1 + 92;
  v12 = (__int64)"consentType";
  v14 = a1 + 88;
  v15 = "requestorProcessName";
  v17 = a1 + 56;
  v18 = "requestorAppId";
  v20 = a1 + 24;
  v21 = "apiType";
  v23 = a1 + 16;
  v19 = 14;
  v22 = 7;
  return tson::input_archive::process<tson::nvp<enum PinManagerTipTests::ApiType &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
           a2,
           (__int64)&v21,
           (__int64 *)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
