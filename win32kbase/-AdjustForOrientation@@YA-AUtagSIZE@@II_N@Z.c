struct tagSIZE __fastcall AdjustForOrientation(unsigned int a1, unsigned int a2, char a3)
{
  if ( a3 )
    return (struct tagSIZE)__PAIR64__(a1, a2);
  else
    return (struct tagSIZE)__PAIR64__(a2, a1);
}
