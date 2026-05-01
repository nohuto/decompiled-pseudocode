/*
 * XREFs of ??0_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@QEAA@PEAU_ITEMIDLIST@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180134D4C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C8D0 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_9e2ff0c1d9fff4ebf0f553d417409e49_::_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)a3 = 0;
  result = a1;
  *(_QWORD *)(a3 + 24) = 7LL;
  return result;
}
