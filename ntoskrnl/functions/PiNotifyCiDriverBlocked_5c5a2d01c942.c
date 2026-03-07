__int64 __fastcall PiNotifyCiDriverBlocked(__int128 *a1, int a2, const void **a3)
{
  __int64 Pool2; // rax
  void *v7; // rdi
  __int128 v9; // xmm0
  unsigned int updated; // ebx

  Pool2 = ExAllocatePool2(256LL, (unsigned int)*(unsigned __int16 *)a3 + 22, 538996816LL);
  v7 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v9 = *a1;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_OWORD *)Pool2 = v9;
  *(_WORD *)(Pool2 + 20) = *(_WORD *)a3;
  memmove((void *)(Pool2 + 22), a3[1], *(unsigned __int16 *)a3);
  updated = ZwUpdateWnfStateData((__int64)&WNF_CI_BLOCKED_DRIVER, (__int64)v7);
  ExFreePoolWithTag(v7, 0);
  return updated;
}
