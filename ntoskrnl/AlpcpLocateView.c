/*
 * XREFs of AlpcpLocateView @ 0x1406A0954
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpQueryRemoteView @ 0x140774F54 (AlpcpQueryRemoteView.c)
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
