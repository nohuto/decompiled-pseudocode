__int64 __fastcall HUBID_AppendStringToIDString(const void **a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r12d
  char *Pool2; // rax
  char *v8; // rbp
  void *v9; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(_DWORD *)(a2 + 4) - 2;
  else
    v5 = 0;
  v6 = v5 + *(unsigned __int16 *)a1 + 4;
  Pool2 = (char *)ExAllocatePool2(64LL, v6, 1681082453LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    if ( v5 )
      memmove(Pool2, *(const void **)(a2 + 8), v5);
    memmove(&v8[v5], a1[1], *(unsigned __int16 *)a1);
    v9 = *(void **)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 4) = v6;
    if ( v9 )
      ExFreePoolWithTag(v9, 0x64334855u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
