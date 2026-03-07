__int64 __fastcall CmpAddUoWToRollbackPacket(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdi
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  void *v10; // rcx

  v2 = *(_QWORD *)(a2 + 56);
  if ( (*(_DWORD *)(v2 + 48) & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(v2 + 72);
    v6 = (void *)v5;
  }
  else
  {
    v5 = *(_QWORD *)(v2 + 56);
    v6 = (void *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  ObfReferenceObject(v6);
  v7 = CmpAddPointerToRollbackPacket(a1, v5);
  v8 = v7;
  if ( v7 == -1073740008 )
  {
    v8 = 0;
  }
  else if ( v7 >= 0 )
  {
    return 0;
  }
  if ( v5 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( (*(_DWORD *)(v9 + 48) & 0x80u) == 0 )
      v10 = *(void **)(v9 + 72);
    else
      v10 = (void *)(*(_QWORD *)(v9 + 56) & 0xFFFFFFFFFFFFFFFEuLL);
    ObfDereferenceObject(v10);
  }
  return v8;
}
