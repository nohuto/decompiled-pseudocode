/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VWnfHelper@@@std@@EEAAXXZ @ 0x1803E1000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj<WnfHelper>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    result = RtlUnsubscribeWnfStateChangeNotification(v4, a2, a3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
