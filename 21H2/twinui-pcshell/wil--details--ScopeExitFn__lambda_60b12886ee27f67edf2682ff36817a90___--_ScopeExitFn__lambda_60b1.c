/*
 * XREFs of wil::details::ScopeExitFn__lambda_60b12886ee27f67edf2682ff36817a90___::_ScopeExitFn__lambda_60b12886ee27f67edf2682ff36817a90___ @ 0x18034D444
 * Callers:
 *     _WindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x18034F3B6 (_WindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_60b12886ee27f67edf2682ff36817a90___::_ScopeExitFn__lambda_60b12886ee27f67edf2682ff36817a90___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 581) = 0;
  }
  return result;
}
