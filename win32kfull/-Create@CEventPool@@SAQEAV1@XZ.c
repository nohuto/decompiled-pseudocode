union _SLIST_HEADER *CEventPool::Create(void)
{
  union _SLIST_HEADER *result; // rax
  union _SLIST_HEADER *v1; // rbx

  result = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    InitializeSListHead(result + 1);
    LODWORD(v1->Alignment) = 0;
    return v1;
  }
  return result;
}
