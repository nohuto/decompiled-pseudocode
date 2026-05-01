/*
 * XREFs of ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126D94
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18011AB44 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108E9C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180116830 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x180119640 (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180126020 (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180128BAC (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?string@path@filesystem@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@XZ @ 0x180128F64 (-string@path@filesystem@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@3@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void **__fastcall std::filesystem::filesystem_error::_Pretty_message(void **Src, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD v13[2]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-9h]
  unsigned __int64 v15; // [rsp+48h] [rbp-1h]
  _QWORD v16[2]; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+17h]
  unsigned __int64 v18; // [rsp+68h] [rbp+1Fh]

  Src[2] = 0LL;
  Src[3] = (void *)15;
  *(_BYTE *)Src = 0;
  std::filesystem::path::string(a3, v16);
  std::filesystem::path::string(a4, v13);
  v7 = v14 + v17 + *(_QWORD *)(a2 + 8) + (v14 != 0 ? 8LL : 4LL);
  v8 = (unsigned __int64)Src[2];
  if ( v8 <= v7 && Src[3] != (void *)v7 )
  {
    if ( (unsigned __int64)Src[3] >= v7 )
    {
      if ( v7 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
        std::string::_Become_small(Src);
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>(Src, v7 - v8);
      Src[2] = (void *)v8;
    }
  }
  std::string::append(Src, *(const void **)a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
  std::string::append(Src, ": \"", 3uLL);
  v9 = v16;
  if ( v18 >= 0x10 )
    v9 = (_QWORD *)v16[0];
  std::string::append(Src, v9, v17);
  if ( v14 )
  {
    std::string::append(Src, "\", \"", 4uLL);
    v11 = v13;
    if ( v15 >= 0x10 )
      v11 = (_QWORD *)v13[0];
    std::string::append(Src, v11, v14);
  }
  LOBYTE(v10) = 34;
  std::string::push_back(Src, v10);
  std::string::~string((__int64)v13);
  std::string::~string((__int64)v16);
  return Src;
}
