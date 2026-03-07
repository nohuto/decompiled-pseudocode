_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // r10
  __int64 v3; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24));
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
