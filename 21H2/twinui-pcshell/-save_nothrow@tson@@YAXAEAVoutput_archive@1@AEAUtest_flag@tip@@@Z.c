/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE178
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F264 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V-$nvp@AEAV-$vector_.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x18009CD90 (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x18009CE64 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF50 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x18009D08C (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009D178 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x18009D35C (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x18009D63C (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009EE44 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009EFC0 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB24 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3FC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip::test_flag *a3)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm0
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  bool v20; // zf
  rsize_t v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-60h] BYREF
  struct tson::output_archive *v29; // [rsp+30h] [rbp-50h]
  const char *v30; // [rsp+38h] [rbp-48h] BYREF
  char v31; // [rsp+40h] [rbp-40h]
  char *v32; // [rsp+48h] [rbp-38h]
  const char *v33; // [rsp+50h] [rbp-30h] BYREF
  char v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF
  struct tson::output_archive *v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+B0h] [rbp+30h] BYREF

  v4 = -1LL;
  v5 = *((_QWORD *)a2 + 1);
  *(_QWORD *)&v28 = v5;
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_BYTE *)(v5 + v7) );
    *((_QWORD *)&v28 + 1) = v7;
  }
  else
  {
    v28 = 0uLL;
  }
  v8 = v28;
  LOBYTE(v29) = 0;
  v9 = (unsigned __int16 *)((char *)a2 + 16);
  v30 = "type";
  v31 = 4;
  *(_QWORD *)&v28 = "reason";
  v32 = (char *)a2 + 16;
  v33 = "name";
  v34 = 4;
  v35 = v8;
  BYTE8(v28) = 6;
  v36 = v29;
  v29 = a2;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v28, (__int64)a3);
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  tson::output_archive::operator()<tson::ansistring_tag &>(this, &v35, v10);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v30, v11);
  v14 = *v9;
  if ( v14 <= 0x12 )
  {
    if ( v14 == 18 )
    {
      v31 = 5;
      v30 = "value";
      v32 = (char *)a2 + 24;
      tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v30, v13);
      return;
    }
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          v18 = v17 - 6;
          if ( v18 )
          {
            v19 = v18 - 5;
            if ( v19 )
            {
              if ( v19 == 1 )
              {
                v31 = 5;
                v30 = "value";
                v32 = (char *)a2 + 24;
                tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)this, (__int64 *)&v30, v13);
              }
            }
            else
            {
              v31 = 5;
              v30 = "value";
              v32 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<char &>>((__int64)this, (__int64 *)&v30, v13);
            }
          }
          else
          {
            v20 = *((_WORD *)a2 + 12) == 0;
            *(_QWORD *)&v28 = "value";
            BYTE8(v28) = 5;
            BYTE9(v28) = !v20;
            *(_QWORD *)this = "value";
            *((_BYTE *)this + 8) = 5;
            tson::output_archive::operator()<bool &>((__int64)this, (char *)&v28 + 9, v13);
          }
        }
        else
        {
          v31 = 5;
          v30 = "value";
          v32 = (char *)a2 + 24;
          tson::output_archive::operator()<tson::nvp<double &>>((__int64)this, (__int64)&v30, v13);
        }
      }
      else
      {
        v31 = 5;
        v30 = "value";
        v32 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v30, v13);
      }
      return;
    }
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOBYTE(v13) = 13;
    LOWORD(v37) = *((_WORD *)a2 + 12);
    LOBYTE(v12) = (_WORD)v37 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v21 = 2LL;
LABEL_21:
    tson::write_buffer::push_back(*((void ***)this + 18), &v37, v21);
    return;
  }
  v22 = v14 - 19;
  if ( !v22 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    tson::output_archive::saveValue((void ***)this, *((unsigned int *)a2 + 6), v13);
    return;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    LOBYTE(v13) = 19;
    goto LABEL_40;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    LOBYTE(v13) = 20;
LABEL_40:
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v37 = *((_QWORD *)a2 + 3);
    LOBYTE(v12) = v37 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v12, v13) )
      return;
    v21 = 8LL;
    goto LABEL_21;
  }
  v25 = v24 - 9;
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      v26 = *((_QWORD *)a2 + 3);
      *(_QWORD *)&v28 = v26;
      if ( v26 )
      {
        do
          ++v4;
        while ( *(_WORD *)(v26 + 2 * v4) );
        *((_QWORD *)&v28 + 1) = v4;
      }
      else
      {
        v28 = 0uLL;
      }
      LOBYTE(v29) = 0;
      v33 = "value";
      v35 = v28;
      v34 = 5;
      v36 = v29;
      *(_QWORD *)this = "value";
      *((_BYTE *)this + 8) = 5;
      tson::output_archive::operator()<tson::string_tag &>(this, &v35, v13);
    }
  }
  else
  {
    v27 = *((_QWORD *)a2 + 3);
    *(_QWORD *)&v28 = v27;
    if ( v27 )
    {
      do
        ++v4;
      while ( *(_BYTE *)(v27 + v4) );
      *((_QWORD *)&v28 + 1) = v4;
    }
    else
    {
      v28 = 0uLL;
    }
    LOBYTE(v29) = 0;
    v33 = "value";
    v35 = v28;
    v34 = 5;
    v36 = v29;
    tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(this, (__int64)&v33, v13);
  }
}
