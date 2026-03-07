_QWORD *__fastcall FsRtlCheckNotifyForDelete(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = (__int64)(i - 4);
    if ( i[12] == a2 )
    {
      *(_WORD *)(v5 + 72) |= 0x20u;
      result = (_QWORD *)(v5 + 48);
      if ( (_QWORD *)*result != result )
        result = (_QWORD *)FsRtlNotifyCompleteIrpList(v5, -1073741738);
    }
  }
  return result;
}
