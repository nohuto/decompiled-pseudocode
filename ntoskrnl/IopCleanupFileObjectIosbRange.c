void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  char *v2; // rsi
  _QWORD *v3; // rbp
  char *v4; // rbx
  void *v5; // rcx
  PMDL *v6; // rdi
  __int64 v7; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  v2 = 0LL;
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v4 = (char *)v3[1];
  if ( v4 )
  {
    while ( *(_QWORD *)(a1 + 16) != *((_QWORD *)v4 + 3) )
    {
      v2 = v4;
      v4 = (char *)*((_QWORD *)v4 + 5);
      if ( !v4 )
        goto LABEL_6;
    }
    --*(_DWORD *)v4;
  }
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    v5 = (void *)*((_QWORD *)v4 + 4);
    v6 = (PMDL *)(v4 + 24);
    if ( v5 )
      MmUnmapLockedPages(v5, *v6);
    MmUnlockPages(*v6);
    IoFreeMdl(*v6);
    v7 = *((_QWORD *)v4 + 5);
    if ( v2 )
      *((_QWORD *)v2 + 5) = v7;
    else
      v3[1] = v7;
    ExFreePoolWithTag(v4, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  ExReleaseFastMutex(&IoStatusBlockRangeTableLock);
}
