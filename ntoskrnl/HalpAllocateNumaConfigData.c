/*
 * XREFs of HalpAllocateNumaConfigData @ 0x140B636D0
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140B633D4 (HalpInitializeConfigurationFromMadt.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpAllocateNumaConfigData(int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  char *v20; // r8

  v4 = 4 * a2;
  v5 = (unsigned int)(4 * a1);
  v7 = a3;
  v8 = 2 * a1 * a1;
  v9 = a4;
  v10 = v8
      + ((((((((((v4 + ((v4 + 79) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + v4 + 7) & 0xFFFFFFF8) + v5 + 7) & 0xFFFFFFF8)
          + v5
          + 7) & 0xFFFFFFF8)
        + v5
        + 7) & 0xFFFFFFF8);
  if ( a3 )
  {
    v7 = a3 + 1;
    v10 = 16 * (a3 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  if ( a4 )
  {
    v9 = a4 + 1;
    v10 = 16 * (a4 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  result = HalpMmAllocateMemoryInternal(v10, 1u);
  v12 = result;
  if ( result )
  {
    memset((void *)result, 0, v10);
    v13 = (v12 + 79) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpNumaConfig = v12;
    *(_QWORD *)v12 = v13;
    *(_DWORD *)(v12 + 64) = a1;
    v14 = (v13 + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 8) = v14;
    v15 = (v14 + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 16) = v15;
    v16 = (v15 + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 24) = v16;
    v17 = ((unsigned int)v5 + 7LL + v16) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 32) = v17;
    v18 = (v17 + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 40) = v18;
    v19 = (v18 + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 48) = v19;
    v20 = (char *)(v8 + v19);
    result = a2;
    *(_DWORD *)(v12 + 68) = a2;
    if ( v7 )
    {
      result = 16LL * v7;
      HalpNumaMemoryRanges = (void *)((unsigned __int64)(v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v20 = (char *)HalpNumaMemoryRanges + result;
    }
    if ( v9 )
    {
      HalpChannelMemoryRangeCount = v9;
      result = (unsigned __int64)(v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      HalpChannelMemoryRanges = (void *)result;
    }
  }
  return result;
}
