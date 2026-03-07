__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *v2; // rax

  v1 = 0;
  v2 = qword_140CF7680;
  while ( a1 != *v2 )
  {
    if ( (__int64)++v2 >= (__int64)qword_140CF76A0 )
      return v1;
  }
  return 1;
}
