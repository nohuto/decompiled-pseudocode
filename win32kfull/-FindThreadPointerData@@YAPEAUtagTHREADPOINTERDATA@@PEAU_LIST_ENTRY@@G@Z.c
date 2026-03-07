struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *result; // rax

  result = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  while ( LOWORD(result[1].Flink) != a2 )
  {
    result = result->Flink;
    if ( result == a1 )
      return 0LL;
  }
  return result;
}
