/*
 * XREFs of sub_18000FF9C @ 0x18000FF9C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_1 @ 0x18011FECD (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18011FECD.c)
 *     sub_180120BAD @ 0x180120BAD (sub_180120BAD.c)
 *     sub_1801276C0 @ 0x1801276C0 (sub_1801276C0.c)
 *     sub_180127972 @ 0x180127972 (sub_180127972.c)
 *     sub_18012A347 @ 0x18012A347 (sub_18012A347.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_14 @ 0x18012A353 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_14.c)
 *     sub_18012A35F @ 0x18012A35F (sub_18012A35F.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_8 @ 0x18012B263 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_8.c)
 *     sub_18012B28F @ 0x18012B28F (sub_18012B28F.c)
 *     sub_18012B2CB @ 0x18012B2CB (sub_18012B2CB.c)
 *     ?dtor$0@?0??_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z@4HA @ 0x18012B5B7 (-dtor$0@-0--_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_Cancellat.c)
 *     sub_18012B766 @ 0x18012B766 (sub_18012B766.c)
 * Callees:
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

int __fastcall sub_18000FF9C(_Mtx_t *a1)
{
  int result; // eax

  result = Mtx_unlock(*a1);
  if ( result )
  {
    std::_Throw_C_error(result);
    JUMPOUT(0x18000FFBALL);
  }
  return result;
}
