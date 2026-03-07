char KiCompareVarMtrr()
{
  unsigned int v1; // r10d
  __int64 v2; // r9
  unsigned int i; // r11d
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx

  if ( KeGetCurrentPrcb()->Number )
    return 1;
  v1 = 0;
  if ( !(_BYTE)qword_140C41588 )
    return 1;
  v2 = 0LL;
  for ( i = 513; ; i += 2 )
  {
    v4 = __readmsr(i - 1);
    v5 = __readmsr(i);
    v6 = 2 * v2;
    v7 = (v5 >> 11) & 1;
    if ( v7 != ((*((_QWORD *)qword_140C41598 + v6 + 1) >> 11) & 1LL)
      || v7 && (v4 != *((_QWORD *)qword_140C41598 + v6) || v5 != *((_QWORD *)qword_140C41598 + v6 + 1)) )
    {
      break;
    }
    v2 = ++v1;
    if ( v1 >= (unsigned __int64)(unsigned __int8)qword_140C41588 )
      return 1;
  }
  return 0;
}
