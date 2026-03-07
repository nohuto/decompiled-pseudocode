void __fastcall RemovePDEVFromList(struct PDEV **a1, struct PDEV *a2)
{
  struct PDEV *v4; // r8
  struct PDEV *v5; // rax

  SGDGetSessionState(a1);
  v4 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(struct PDEV **)a2;
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(struct PDEV **)v4;
      if ( *(struct PDEV **)v4 == a2 )
        break;
      v4 = *(struct PDEV **)v4;
      if ( !v5 )
        return;
    }
    *(_QWORD *)v4 = *(_QWORD *)a2;
  }
}
