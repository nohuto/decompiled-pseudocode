void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2)
{
  __int64 v2; // rbx
  void *v3; // rcx
  IRP *v4; // rsi
  void *v5; // rdi

  v2 = a1 - 72;
  if ( a2 )
  {
    v4 = *(IRP **)(v2 + 32);
    v5 = *(void **)(v2 + 48);
    if ( v4 )
    {
      IopFreeIrpExtension(*(_QWORD *)(v2 + 32), 9, 1);
      IopExceptionCleanupEx(v5, v4, v4->UserEvent, 0LL, 0);
      return;
    }
    if ( v5 )
      ObfDereferenceObject(*(PVOID *)(v2 + 48));
  }
  v3 = *(void **)(v2 + 56);
  if ( v3 )
    ObfDereferenceObject(v3);
  ExFreePoolWithTag((PVOID)v2, 0);
}
