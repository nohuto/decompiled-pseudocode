__int64 __fastcall bInitPathAlloc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  result = (__int64)GreCreateSemaphoreInternal(0);
  v1[755] = result;
  if ( result )
  {
    v1[756] = 0LL;
    result = 1LL;
    v1[757] = 0LL;
  }
  return result;
}
