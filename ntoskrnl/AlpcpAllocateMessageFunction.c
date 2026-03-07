void *__fastcall AlpcpAllocateMessageFunction(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 Handle; // rax

  Pool2 = ExAllocatePool2(256LL, a2, a3);
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return v4;
  v5 = Pool2 + 48;
  memset((void *)(Pool2 + 48), 0, 0x118uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 264) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
