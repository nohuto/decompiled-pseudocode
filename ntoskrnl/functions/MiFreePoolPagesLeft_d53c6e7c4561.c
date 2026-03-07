__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C65108;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140C695A8;
    v2 = qword_140C695B8;
  }
  return v2 - v1;
}
