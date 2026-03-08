/*
 * XREFs of MxBootDescriptorDepleted @ 0x140B386BC
 * Callers:
 *     MxGetNextPage @ 0x140B383A4 (MxGetNextPage.c)
 * Callees:
 *     <none>
 */

void __fastcall MxBootDescriptorDepleted(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  if ( *(_QWORD *)(a1 + 16) == -1LL )
  {
    v1 = *(_QWORD *)(a1 + 32);
    v2 = *(_DWORD *)(v1 + 24);
    if ( (v2 & 0x40000000) != 0 )
    {
      *(_DWORD *)(v1 + 24) = v2 & 0xBFFFFFFF;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) |= 0x80000000;
    }
  }
}
