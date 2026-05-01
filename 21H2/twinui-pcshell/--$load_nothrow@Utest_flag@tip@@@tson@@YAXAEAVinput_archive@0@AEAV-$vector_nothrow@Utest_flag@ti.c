/*
 * XREFs of ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB44
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F1A8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18009CDE4 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     ??0test_flag@tip@@QEAA@$$QEAU01@@Z @ 0x1800A119C (--0test_flag@tip@@QEAA@$$QEAU01@@Z.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ @ 0x1800AB9D8 (-clear@-$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800ACEA8 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AD238 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAA_N_K@Z @ 0x1800ADC38 (-reserve@-$vector_nothrow@Utest_flag@tip@@@tip@@QEAA_N_K@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE84 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

HRESULT __fastcall tson::load_nothrow<tip::test_flag>(tson *this, _QWORD *a2)
{
  HRESULT result; // eax
  __int64 v5; // rbx
  struct tip::test_flag *v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  __int16 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  _BYTE v15[72]; // [rsp+58h] [rbp-11h] BYREF

  v10 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)this, &v10);
  result = tip::vector_nothrow<tip::test_flag>::clear(a2);
  v5 = v10;
  while ( v5 )
  {
    --v5;
    v11 = 0;
    v12 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v14 = 0LL;
    memset_0(v15, 0, 0x40uLL);
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)&v11, v6);
    tson::input_archive::finishNode(this);
    v7 = a2[1];
    if ( a2[2] < v7 )
    {
      v9 = 1;
    }
    else
    {
      if ( v7 )
        v8 = 2 * v7;
      else
        v8 = 10LL;
      v9 = tip::vector_nothrow<tip::test_flag>::reserve(a2, v8);
    }
    if ( v9 )
      tip::test_flag::test_flag(*a2 + 104LL * a2[2]++, &v11);
    result = PropVariantClear(pvar);
  }
  return result;
}
