_QWORD *__fastcall KiProcessDisconnectList(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  struct _KEVENT *v4; // rcx

  while ( 1 )
  {
    result = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)result[1] != a1 || (v3 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = *(struct _KEVENT **)result[17];
    if ( v4 )
      KeSetEvent(v4, 0, 0);
  }
  return result;
}
