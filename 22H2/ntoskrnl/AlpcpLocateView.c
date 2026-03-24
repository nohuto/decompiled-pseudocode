/*
 * XREFs of AlpcpLocateView @ 0x1406DAAD0
 * Callers:
 *     AlpcpQueryRemoteView @ 0x1405DDA24 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AlpcpLocateView(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 56);
  for ( result = (_QWORD *)*v2; result != v2; result = (_QWORD *)*result )
  {
    if ( result[3] == a2 )
      return result;
  }
  return 0LL;
}
