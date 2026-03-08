/*
 * XREFs of BgkResumePrepare @ 0x140A969F4
 * Callers:
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 *     BgkpLockBgfxCodeSection @ 0x140AEBB60 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AEC590 (BgkpUnlockBgfxCodeSection.c)
 *     BgGetContext @ 0x140AEE26C (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x140AEE344 (BgMarkHiberPhase.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( !Context )
    {
      BgkpUnlockBgfxCodeSection();
      return (unsigned int)-1073741670;
    }
    v5 = *(void **)(Context + 16);
    if ( v5 )
      PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
    qword_140D18150 = v4;
  }
  else
  {
    v6 = qword_140D18150;
    if ( !qword_140D18150 )
      return (unsigned int)-1073741670;
    PoSetHiberRange(0LL, 0x10000u, qword_140D18150, *(unsigned int *)qword_140D18150, 0);
    v7 = (void *)v6[2];
    if ( v7 )
      PoSetHiberRange(0LL, 0x10000u, v7, *((unsigned int *)v6 + 6), 0);
    return (unsigned int)BgMarkHiberPhase();
  }
  return v1;
}
