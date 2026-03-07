struct _SLIST_ENTRY *EtwpReferenceLastBranchLookasideList()
{
  __int64 v0; // rdi
  int v1; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C6B090);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, v0, 2021094469LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C6B094);
  }
  while ( (int)result < v1 );
  return result;
}
