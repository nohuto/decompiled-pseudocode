/*
 * XREFs of wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___ @ 0x14004A2D8
 * Callers:
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$0 @ 0x14002C800 (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$0.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$0 @ 0x14004ABEA (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___(
        _BYTE *a1)
{
  __int64 result; // rax
  void *v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(void **)(**(_QWORD **)a1 + 144LL);
    if ( v3 )
    {
      CoTaskMemFree(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(**(_QWORD **)a1 + 144LL) = 0LL;
    }
  }
  return result;
}
