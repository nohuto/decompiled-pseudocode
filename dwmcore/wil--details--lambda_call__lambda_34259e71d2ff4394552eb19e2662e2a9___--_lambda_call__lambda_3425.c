_BYTE *__fastcall wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)CDrawingContext::PopLayerInternal(**(_QWORD **)(a1 + 8));
  }
  return result;
}
