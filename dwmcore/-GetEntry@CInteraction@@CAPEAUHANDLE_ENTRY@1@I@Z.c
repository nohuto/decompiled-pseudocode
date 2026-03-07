struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // r8
  int v3; // r9d

  LOBYTE(v1) = HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1);
  if ( v1 )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)lpMem + (unsigned int)(Size * v3));
  return (struct CInteraction::HANDLE_ENTRY *)v2;
}
