/*
 * XREFs of ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18009CDE4
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB44 (--$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@ti.c)
 *     ??$load_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@Z @ 0x18009EC64 (--$load_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 * Callees:
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::size_tag &>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v4 = *(_QWORD *)(a1 + 136);
    if ( v4 )
    {
      v5 = 4 * v4;
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      v5 = 4LL;
    }
    if ( *(_DWORD *)(v5 + a1 + 32) != 1 && *(int *)(a1 + 8) >= 0 )
      *(_DWORD *)(a1 + 8) = -2147023267;
    v7 = 0;
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v7, 2uLL);
    *a2 = v7;
  }
  return a1;
}
