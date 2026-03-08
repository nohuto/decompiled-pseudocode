/*
 * XREFs of CmpVolumeContextCreate @ 0x14084C438
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x1402447A4 (CmSiAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpVolumeContextStart @ 0x14084C4D0 (CmpVolumeContextStart.c)
 *     CmpVolumeContextCleanup @ 0x14085EE74 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, struct _PRIVILEGE_SET **a3)
{
  struct _PRIVILEGE_SET *Memory; // rax
  unsigned int v7; // edi
  struct _PRIVILEGE_SET *v8; // rbx
  int v9; // esi

  Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(72LL, 0x39384D43u);
  v7 = 0;
  v8 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, 0x48uLL);
    *(_QWORD *)&v8[1].Control = 1LL;
    v9 = CmpVolumeContextStart(v8, a1, a2);
    if ( v9 < 0 )
    {
      CmpVolumeContextCleanup(v8);
      CmSiFreeMemory(v8);
      return (unsigned int)v9;
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
