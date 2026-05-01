/*
 * XREFs of ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800AD644
 * Callers:
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EF5C (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V?$nvp@AEAG@2@V12@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@0@Z @ 0x18009F07C (--$process@V-$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V-$nvp@AEAG@2@V12@V-$nvp@AEAI@2@V-$nvp@.c)
 */

void __fastcall tson::load_nothrow(tson *this, struct tson::input_archive *a2, struct wil::StoredFailureInfo *a3)
{
  unsigned __int16 v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v10[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v11[2]; // [rsp+80h] [rbp-80h] BYREF
  const char *v12; // [rsp+90h] [rbp-70h] BYREF
  char v13; // [rsp+98h] [rbp-68h]
  int *v14; // [rsp+A0h] [rbp-60h]
  const char *v15; // [rsp+A8h] [rbp-58h] BYREF
  char v16; // [rsp+B0h] [rbp-50h]
  _QWORD *v17; // [rsp+B8h] [rbp-48h]
  const char *v18; // [rsp+C0h] [rbp-40h] BYREF
  char v19; // [rsp+C8h] [rbp-38h]
  _QWORD *v20; // [rsp+D0h] [rbp-30h]
  const char *v21; // [rsp+D8h] [rbp-28h] BYREF
  char v22; // [rsp+E0h] [rbp-20h]
  int *v23; // [rsp+E8h] [rbp-18h]
  __int64 v24; // [rsp+F0h] [rbp-10h] BYREF
  char v25; // [rsp+F8h] [rbp-8h]
  _QWORD *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h] BYREF
  char v28; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h] BYREF
  char v31; // [rsp+128h] [rbp+28h]
  _QWORD *v32; // [rsp+130h] [rbp+30h]
  _DWORD v33[4]; // [rsp+140h] [rbp+40h] BYREF
  _WORD *v34; // [rsp+150h] [rbp+50h]
  _BYTE *v35; // [rsp+170h] [rbp+70h]
  int v36; // [rsp+178h] [rbp+78h]
  _BYTE *v37; // [rsp+180h] [rbp+80h]
  _BYTE *v38; // [rsp+1B8h] [rbp+B8h]
  _BYTE v39[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v40[256]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v41[256]; // [rsp+350h] [rbp+250h] BYREF
  _WORD v42[256]; // [rsp+450h] [rbp+350h] BYREF

  v10[1] = 128LL;
  v6 = 0;
  v5 = 0;
  v7 = 0;
  v40[0] = 0;
  v39[0] = 0;
  v42[0] = 0;
  v41[0] = 0;
  v11[0] = v40;
  v10[0] = v39;
  v9[0] = v42;
  v8[0] = v41;
  v15 = "context";
  v17 = v8;
  v18 = "message";
  v20 = v9;
  v21 = "type";
  v23 = &v7;
  v24 = (__int64)"module";
  v26 = v10;
  v27 = (__int64)"line";
  v29 = &v5;
  v30 = (__int64)"file";
  v32 = v11;
  v12 = "hr";
  v11[1] = 256LL;
  v9[1] = 256LL;
  v8[1] = 256LL;
  v14 = &v6;
  v16 = 7;
  v19 = 7;
  v22 = 4;
  v25 = 6;
  v28 = 4;
  v31 = 4;
  v13 = 2;
  tson::input_archive::process<tson::nvp<long &>>((__int64)this, (__int64)&v12);
  tson::input_archive::process<tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
    this,
    (__int64)&v30,
    (__int64)&v27,
    (__int64)&v24,
    (__int64)&v21,
    (__int64 *)&v18,
    (__int64 *)&v15);
  memset_0(v33, 0, 0x90uLL);
  v33[1] = v6;
  v35 = v40;
  v36 = v5;
  v38 = v39;
  v33[0] = v7;
  v34 = v42;
  v37 = v41;
  wil::StoredFailureInfo::SetFailureInfo(a2, (const struct wil::FailureInfo *)v33);
}
