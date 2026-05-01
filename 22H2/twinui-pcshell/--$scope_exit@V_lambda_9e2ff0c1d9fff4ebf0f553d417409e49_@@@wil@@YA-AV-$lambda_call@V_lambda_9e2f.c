/*
 * XREFs of ??$scope_exit@V_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@wil@@YA?AV?$lambda_call@V_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@details@0@$$QEAV_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@Z @ 0x1801346C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C760 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit<_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 8) = 0;
  result = a1;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
