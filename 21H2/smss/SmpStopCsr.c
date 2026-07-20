/*
 * XREFs of SmpStopCsr @ 0x1400059D0
 * Callers:
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140002A70 (SmpApiCallback.c)
 * Callees:
 *     SmpLookupControlBlock @ 0x1400035F4 (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x140003BF4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140003C8C (SmpReleaseControlBlock.c)
 *     SmpTerminateCSR @ 0x1400058C4 (SmpTerminateCSR.c)
 */

__int64 __fastcall SmpStopCsr(__int64 a1)
{
  unsigned int v1; // ebx
  HANDLE *v2; // rax
  char *v3; // rdi
  unsigned int v4; // ebx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (HANDLE *)SmpLookupControlBlock(v1);
  v3 = (char *)v2;
  if ( v2 )
  {
    v4 = SmpDestroyControlBlock(v2, 1);
    SmpReleaseControlBlock(v3);
  }
  else
  {
    return (unsigned int)SmpTerminateCSR(v1);
  }
  return v4;
}
