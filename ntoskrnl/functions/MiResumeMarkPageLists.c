void __fastcall MiResumeMarkPageLists(__int64 a1, int a2)
{
  if ( a2 )
    *(_BYTE *)(a1 + 15780) = a2;
  *(_BYTE *)(a1 + 15781) = 1;
}
