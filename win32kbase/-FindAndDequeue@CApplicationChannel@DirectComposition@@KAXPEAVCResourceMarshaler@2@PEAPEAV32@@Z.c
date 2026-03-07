void __fastcall DirectComposition::CApplicationChannel::FindAndDequeue(
        struct DirectComposition::CResourceMarshaler **a1,
        struct DirectComposition::CResourceMarshaler ***a2)
{
  struct DirectComposition::CResourceMarshaler **v2; // rax

  while ( 1 )
  {
    v2 = *a2;
    if ( !*a2 )
      break;
    if ( v2 == a1 )
    {
      *a2 = (struct DirectComposition::CResourceMarshaler **)a1[1];
      a1[1] = 0LL;
      return;
    }
    a2 = (struct DirectComposition::CResourceMarshaler ***)(v2 + 1);
  }
}
