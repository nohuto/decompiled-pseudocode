/*
 * XREFs of DxgkChangeD3RequestsState @ 0x1C01F3EB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 */

__int64 __fastcall DxgkChangeD3RequestsState(__int64 a1, char a2)
{
  if ( !a1 )
    return 3221225480LL;
  if ( a2 )
    DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
  else
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 4104LL));
  return 0LL;
}
