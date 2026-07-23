/*
 * XREFs of PiNotifyCiDriverBlocked @ 0x1408A2D84
 * Callers:
 *     PiIsDriverBlocked @ 0x14077E204 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiNotifyCiDriverBlocked(_OWORD *a1, const void **a2)
{
  unsigned int v4; // ebx
  char *PoolWithTag; // rax
  void *v6; // rdi
  ULONG v8; // r8d
  unsigned int updated; // ebx

  v4 = *(unsigned __int16 *)a2 + 18;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_OWORD *)PoolWithTag = *a1;
  *((_WORD *)PoolWithTag + 8) = *(_WORD *)a2;
  memmove(PoolWithTag + 18, a2[1], *(unsigned __int16 *)a2);
  v8 = 4096;
  if ( v4 < 0x1000 )
    v8 = v4;
  updated = ZwUpdateWnfStateData(&WNF_CI_BLOCKED_DRIVER, v6, v8, 0LL, 0LL, 0, 0);
  ExFreePoolWithTag(v6, 0);
  return updated;
}
