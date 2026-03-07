void __fastcall NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(_QWORD *a1)
{
  __int64 v1; // rdi
  void *v3; // rcx
  void *v4; // rcx

  v1 = a1[4];
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 24) != *(_QWORD *)(v1 + 16) )
      RtlFindSetBits((PRTL_BITMAP)(*(_QWORD *)(v1 + 24) ^ *(_QWORD *)(v1 + 16)), 1u, 0);
    if ( *(_QWORD *)v1 )
      ExFreePoolWithTag(*(PVOID *)v1, 0);
    if ( *(_QWORD *)(v1 + 16) != *(_QWORD *)(v1 + 24) )
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(v1 + 16) ^ *(_QWORD *)(v1 + 24)), 0);
    ExFreePoolWithTag((PVOID)v1, 0);
    a1[4] = 0LL;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    MmUnmapViewInSessionSpace(v3);
    a1[3] = 0LL;
  }
  v4 = (void *)a1[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    a1[2] = 0LL;
  }
}
