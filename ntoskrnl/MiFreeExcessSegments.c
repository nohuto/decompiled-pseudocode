unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_140C6F658 / 0xAuLL);
  if ( qword_140C6F568 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (void *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1760LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1464LL), 0, 0);
      }
    }
  }
  return result;
}
