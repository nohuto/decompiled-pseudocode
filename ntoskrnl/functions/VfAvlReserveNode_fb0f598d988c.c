char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *Pool2; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    Pool2 = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, v3, 1413572182LL);
  if ( !Pool2 )
    return 0LL;
  v8 = (char *)(Pool2 + 4);
  Pool2[4] = a2;
  if ( !a3 )
    a3 = *a1;
  Pool2[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, Pool2 + 4);
  return v8;
}
