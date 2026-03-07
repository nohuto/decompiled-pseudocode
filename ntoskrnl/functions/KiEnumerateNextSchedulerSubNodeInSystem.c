__int64 __fastcall KiEnumerateNextSchedulerSubNodeInSystem(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int NextNode; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  while ( (int)KeEnumerateNextSchedulerSubNodeInNode(a1 + 8, &v8) < 0 )
  {
    NextNode = MmGetNextNode(*(_DWORD *)a1, (int *)(a1 + 4));
    if ( NextNode == -1 )
      break;
    v6 = KeNodeBlock[NextNode];
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v6 + 16);
  }
  if ( v8 )
    *a2 = v8;
  else
    return (unsigned int)-2147483622;
  return v2;
}
