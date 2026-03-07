__int64 __fastcall DCompositionProcessCallout(struct _W32PROCESS *a1, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    return (unsigned int)DirectComposition::CProcessData::OnProcessCreation(a1);
  else
    DirectComposition::CProcessData::OnProcessDestruction(a1);
  return v2;
}
