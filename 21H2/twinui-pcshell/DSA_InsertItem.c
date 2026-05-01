/*
 * XREFs of DSA_InsertItem @ 0x1804E7B74
 * Callers:
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     DSA_Preallocate @ 0x1804E7C04 (DSA_Preallocate.c)
 */

int __stdcall DSA_InsertItem(HDSA hdsa, int i, const void *pitem)
{
  int v4; // ebx
  int v6; // ecx

  v4 = i;
  if ( i < 0 )
    return -1;
  if ( i > *(_DWORD *)hdsa )
    v4 = *(_DWORD *)hdsa;
  if ( !(unsigned int)DSA_Preallocate(hdsa, 1LL) )
    return -1;
  v6 = *(_DWORD *)hdsa;
  if ( v4 < *(_DWORD *)hdsa )
  {
    memmove_0(
      (void *)(*((_QWORD *)hdsa + 1) + (unsigned int)(*((_DWORD *)hdsa + 5) * (v4 + 1))),
      (const void *)(*((_QWORD *)hdsa + 1) + (unsigned int)(v4 * *((_DWORD *)hdsa + 5))),
      (unsigned int)(*((_DWORD *)hdsa + 5) * (v6 - v4)));
    v6 = *(_DWORD *)hdsa;
  }
  *(_DWORD *)hdsa = v6 + 1;
  memmove_0(
    (void *)(*((_QWORD *)hdsa + 1) + (unsigned int)(v4 * *((_DWORD *)hdsa + 5))),
    pitem,
    *((unsigned int *)hdsa + 5));
  return v4;
}
