/*
 * XREFs of wil::details::lambda_call__lambda_706da2b58d53bcaf8418f19c711363fe___::_lambda_call__lambda_706da2b58d53bcaf8418f19c711363fe___ @ 0x1801578E4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal_::_1_::dtor$0 @ 0x18015EED2 (_Windows--Internal--Holographic--SpatialGraphDriverClient--GetSupportedDDILevelsInternal_--_1_--.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_706da2b58d53bcaf8418f19c711363fe___::_lambda_call__lambda_706da2b58d53bcaf8418f19c711363fe___(
        __int64 a1)
{
  _QWORD **v1; // rax
  _QWORD *v2; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD ***)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = *v1;
    result = 0x100000001LL;
    *v2 = 0x100000001LL;
  }
  return result;
}
