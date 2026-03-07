_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
