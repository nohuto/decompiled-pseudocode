/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800AE4F8
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F244 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V-$nvp@AEAV-$vector_.c)
 * Callees:
 *     ??$?RV?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@1@V?$nvp@AEAG@1@V21@V?$nvp@AEAI@1@V?$nvp@AEAUstring_tag@tson@@@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x18009D214 (--$-RV-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@1@V-$nvp@AEAG@1@V21@V-$nvp@AEAI@1@V-$nvp.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  char v19; // [rsp+60h] [rbp-A0h]
  __int128 *v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  char v22; // [rsp+78h] [rbp-88h]
  int *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  char v25; // [rsp+90h] [rbp-70h]
  __int128 *v26; // [rsp+98h] [rbp-68h]
  const char *v27; // [rsp+A0h] [rbp-60h] BYREF
  char v28; // [rsp+A8h] [rbp-58h]
  __int16 *v29; // [rsp+B0h] [rbp-50h]
  const char *v30; // [rsp+B8h] [rbp-48h] BYREF
  char v31; // [rsp+C0h] [rbp-40h]
  __int128 *v32; // [rsp+C8h] [rbp-38h]
  const char *v33; // [rsp+D0h] [rbp-30h] BYREF
  char v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int128 v36; // [rsp+E8h] [rbp-18h] BYREF
  __int128 *v37; // [rsp+F8h] [rbp-8h]
  __int128 v38; // [rsp+100h] [rbp+0h] BYREF
  __int128 *v39; // [rsp+110h] [rbp+10h]
  __int128 v40; // [rsp+118h] [rbp+18h] BYREF
  __int128 *v41; // [rsp+128h] [rbp+28h]
  __int128 v42; // [rsp+130h] [rbp+30h] BYREF
  __int128 *v43; // [rsp+140h] [rbp+40h]
  __int16 v44; // [rsp+168h] [rbp+68h] BYREF
  int v45; // [rsp+170h] [rbp+70h] BYREF
  int v46; // [rsp+178h] [rbp+78h] BYREF

  v3 = *((_QWORD *)a2 + 6);
  v46 = *((_DWORD *)a2 + 1);
  v44 = *((_WORD *)a2 + 28);
  v45 = *(_DWORD *)a2;
  v5 = -1LL;
  v16[0] = v3;
  if ( v3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(v3 + v6) );
    v16[1] = v6;
  }
  else
  {
    v16[1] = 0LL;
  }
  v7 = *(_OWORD *)v16;
  v8 = *((_QWORD *)a2 + 15);
  LOBYTE(v17) = 0;
  v43 = v17;
  v16[0] = v8;
  v42 = v7;
  if ( v8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    v16[1] = v9;
  }
  else
  {
    v16[1] = 0LL;
  }
  v10 = *(_OWORD *)v16;
  v11 = *((_QWORD *)a2 + 2);
  LOBYTE(v17) = 0;
  v41 = v17;
  v16[0] = v11;
  v40 = v10;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
    v16[1] = v12;
  }
  else
  {
    v16[1] = 0LL;
  }
  v13 = *(_OWORD *)v16;
  v14 = *((_QWORD *)a2 + 8);
  LOBYTE(v17) = 0;
  v39 = v17;
  v16[0] = v14;
  v38 = v13;
  if ( v14 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(v14 + v5) );
    v16[1] = v5;
  }
  else
  {
    v16[1] = 0LL;
  }
  v15 = *(_OWORD *)v16;
  LOBYTE(v17) = 0;
  v16[0] = (__int64)"context";
  v37 = v17;
  v17 = &v36;
  LOBYTE(v16[1]) = 7;
  v18 = (__int64)"message";
  v19 = 7;
  v20 = &v38;
  v21 = (__int64)"type";
  v23 = &v45;
  v24 = (__int64)"module";
  v26 = &v40;
  v27 = "line";
  v29 = &v44;
  v30 = "file";
  v32 = &v42;
  v33 = "hr";
  v35 = &v46;
  v36 = v15;
  v22 = 4;
  v25 = 6;
  v28 = 4;
  v31 = 4;
  v34 = 2;
  tson::output_archive::operator()<tson::nvp<long &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
    this,
    (__int64)&v33,
    (__int64)&v30,
    (__int64)&v27,
    &v24,
    (__int64)&v21,
    &v18,
    v16);
}
