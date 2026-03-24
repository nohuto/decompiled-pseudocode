/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x1800D6480
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18004C610 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004F150 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800D669C (-_Buy_raw@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800EB0A0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 */

void **__fastcall anonymous_namespace_::Compressor::Compress(void **a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned __int64 v6; // rsi
  PVOID v7; // rcx
  unsigned __int128 v8; // rax
  size_t v9; // rbp
  char *v10; // rbx
  char *v11; // rcx
  _BYTE *v12; // r8
  unsigned __int64 v13; // rax
  char *v14; // rcx
  unsigned __int64 v15; // rax
  char *v17; // rbx
  char *v18; // rbx
  LONG *v19; // [rsp+30h] [rbp-18h]
  LONG *v20; // [rsp+30h] [rbp-18h]
  INT v21; // [rsp+38h] [rbp-10h]
  INT v22; // [rsp+38h] [rbp-10h]
  PVOID context; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 input_used; // [rsp+60h] [rbp+18h] BYREF

  v5 = CreateCompressor(2LL, 0LL, &context);
  v6 = 0LL;
  v7 = context;
  if ( v5 != 1 )
    v7 = 0LL;
  v8 = (unsigned __int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
  context = v7;
  *a1 = 0LL;
  v9 = *((_QWORD *)&v8 + 1) >> 3;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( *((_QWORD *)&v8 + 1) >> 3 )
  {
    std::vector<unsigned char>::_Buy_raw(a1, *((_QWORD *)&v8 + 1) >> 3);
    v10 = (char *)*a1;
    memset_0(*a1, 0, v9);
    v7 = context;
    a1[1] = &v10[v9];
  }
  if ( Compress(
         v7,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         (PBYTE)*a1,
         *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
         (PLONG)&input_used,
         v19,
         v21) == 1 )
    goto LABEL_12;
  if ( GetLastError() != 122 )
    goto LABEL_22;
  v11 = (char *)a1[1];
  v12 = *a1;
  v13 = v11 - (_BYTE *)*a1;
  if ( input_used < v13 )
  {
    LODWORD(v11) = (_DWORD)v12 + input_used;
    a1[1] = &v12[input_used];
  }
  else if ( input_used > v13 )
  {
    if ( input_used <= (_BYTE *)a1[2] - v12 )
    {
      v17 = &v12[input_used];
      memset_0(v11, 0, &v12[input_used] - v11);
      LODWORD(v11) = (_DWORD)v17;
      a1[1] = v17;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)a1, input_used);
      v11 = (char *)a1[1];
    }
  }
  if ( Compress(
         context,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         (PBYTE)*a1,
         (_DWORD)v11 - *(_DWORD *)a1,
         (PLONG)&input_used,
         v20,
         v22) == 1 )
LABEL_12:
    v6 = input_used;
  else
LABEL_22:
    input_used = 0LL;
  v14 = (char *)*a1;
  v15 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( v6 < v15 )
  {
    a1[1] = &v14[v6];
  }
  else if ( v6 > v15 )
  {
    if ( v6 <= (_BYTE *)a1[2] - v14 )
    {
      v18 = &v14[v6];
      memset_0(a1[1], 0, &v14[v6] - (_BYTE *)a1[1]);
      a1[1] = v18;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)a1, v6);
    }
  }
  CloseCompressor(context);
  return a1;
}
