void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C65190 -= a2;
  else
    qword_140C65198 -= a2;
}
