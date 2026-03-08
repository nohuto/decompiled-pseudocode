/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x18010D4F0
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18010BE9C (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800AB7E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18010D88C (-_Buy_raw@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

void **__fastcall anonymous_namespace_::Compressor::Compress(void **a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // rsi
  PVOID v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // r14
  char *v11; // rbx
  char *v12; // rbp
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  char *v15; // rbx
  char *v16; // rdx
  unsigned __int64 v17; // rcx
  char *v19; // rax
  char *v20; // rax
  __int64 v21; // rbx
  size_t v22; // rsi
  LONG *v23; // [rsp+30h] [rbp-28h]
  LONG *v24; // [rsp+30h] [rbp-28h]
  INT v25; // [rsp+38h] [rbp-20h]
  INT v26; // [rsp+38h] [rbp-20h]
  PVOID context; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 input_used; // [rsp+70h] [rbp+18h] BYREF

  v5 = CreateCompressor(2LL, 0LL, &context);
  v7 = 0LL;
  v8 = context;
  if ( v5 != 1 )
    v8 = 0LL;
  v6 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
  context = v8;
  v9 = 0;
  *a1 = 0LL;
  v10 = v6 / 0xA;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 / 0xA )
  {
    std::vector<unsigned char>::_Buy_raw(a1, v6 / 0xA);
    v11 = (char *)*a1;
    memset_0(*a1, 0, v6 / 0xA);
    v8 = context;
    v9 = v10 + (_DWORD)v11;
    a1[1] = &v11[v10];
  }
  if ( Compress(
         v8,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         (PBYTE)*a1,
         v9 - *(_DWORD *)a1,
         (PLONG)&input_used,
         v23,
         v25) == 1 )
    goto LABEL_12;
  if ( GetLastError() == 122 )
  {
    v12 = (char *)a1[1];
    v13 = (char *)*a1;
    v14 = v12 - (_BYTE *)*a1;
    if ( input_used < v14 )
    {
      v19 = &v13[input_used];
    }
    else
    {
      if ( input_used <= v14 )
        goto LABEL_11;
      if ( input_used > (_BYTE *)a1[2] - v13 )
      {
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, input_used);
        goto LABEL_11;
      }
      v21 = input_used - v14;
      memset_0(a1[1], 0, input_used - v14);
      v19 = &v12[v21];
    }
    a1[1] = v19;
LABEL_11:
    if ( Compress(
           context,
           *(const BYTE **)a3,
           *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
           (PBYTE)*a1,
           *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
           (PLONG)&input_used,
           v24,
           v26) == 1 )
    {
LABEL_12:
      v7 = input_used;
      goto LABEL_13;
    }
  }
  input_used = 0LL;
LABEL_13:
  v15 = (char *)a1[1];
  v16 = (char *)*a1;
  v17 = v15 - (_BYTE *)*a1;
  if ( v7 < v17 )
  {
    v20 = &v16[v7];
    goto LABEL_21;
  }
  if ( v7 > v17 )
  {
    if ( v7 > (_BYTE *)a1[2] - v16 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, v7);
      goto LABEL_17;
    }
    v22 = v7 - v17;
    memset_0(a1[1], 0, v22);
    v20 = &v15[v22];
LABEL_21:
    a1[1] = v20;
  }
LABEL_17:
  CloseCompressor(context);
  return a1;
}
