_QWORD *__fastcall ViIrpLogDatabaseFindPointer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdx
  _QWORD *result; // rax

  v2 = ViIrpLogDatabase;
  *a2 = ViIrpLogDatabase;
  v3 = (_QWORD *)(v2 + 8);
  v4 = *(_QWORD **)(v2 + 8);
  if ( v4 == (_QWORD *)(v2 + 8) )
    return 0LL;
  while ( 1 )
  {
    result = v4 - 1;
    if ( *(v4 - 1) == a1 )
      break;
    v4 = (_QWORD *)*v4;
    if ( v4 == v3 )
      return 0LL;
  }
  return result;
}
