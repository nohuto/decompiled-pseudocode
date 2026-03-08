/*
 * XREFs of KiDebugTrapOrFault @ 0x140423580
 * Callers:
 *     KiDebugTrapOrFaultShadow @ 0x140AF3180 (KiDebugTrapOrFaultShadow.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiDebugTrapOrFault(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v9; // rcx
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v17; // [rsp+C0h] [rbp+8h]

  v8 = (v17 & 1) == 0;
  if ( (v17 & 1) != 0 )
  {
LABEL_6:
    if ( v8 )
    {
      _mm_lfence();
      __asm { rdsspq  rdx }
      if ( _RDX )
        VslKernelShadowStackAssist(2, (_DWORD)_RDX, 0, *_RDX, 0LL, 4);
    }
    else if ( (KiKvaShadow & 1) != 0 )
    {
      _mm_lfence();
    }
    else
    {
      __asm { swapgs }
      _mm_lfence();
      __asm { swapgs }
      __asm { rdsspq  rdx }
      if ( _RDX )
      {
        __asm
        {
          clrssbsy qword ptr [rdx]
          setssbsy
        }
      }
    }
    return KxDebugTrapOrFault(a1, a2, retaddr, a4);
  }
  else
  {
    v9 = 8LL;
    while ( retaddr != *((void **)&KiDebugTraps + v9 - 1) )
    {
      if ( !--v9 )
      {
        v8 = 1;
        goto LABEL_6;
      }
    }
    if ( (KiCpuTracingFlags & 2) != 0 )
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 1);
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
    return KiKernelIstExit(a1, a2, a3, a4, a5, a6, a7, a8);
  }
}
