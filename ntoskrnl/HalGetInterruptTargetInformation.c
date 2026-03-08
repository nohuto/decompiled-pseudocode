/*
 * XREFs of HalGetInterruptTargetInformation @ 0x14037D3A0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     HalpInterruptIsMsiSupported @ 0x14037D4DC (HalpInterruptIsMsiSupported.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalGetInterruptTargetInformation(int a1, int a2, __int64 a3)
{
  bool v6; // zf
  int v7; // edi
  int v8; // ecx
  __int64 result; // rax
  ULONG_PTR i; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax

  if ( a1 && a1 != 2 )
  {
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 418);
    return 3221225485LL;
  }
  *(_QWORD *)(a3 + 4) = 0LL;
  *(_QWORD *)(a3 + 12) = 0LL;
  v6 = HalpInterruptPhysicalModeOnly == 0;
  *(_DWORD *)a3 = a1;
  if ( v6 && HalpInterruptLogicalMode )
    v7 = (HalpInterruptClusterModeEnabled != 0) + 2;
  else
    v7 = 1;
  *(_DWORD *)(a3 + 20) = v7;
  if ( (unsigned __int8)HalpInterruptIsMsiSupported(0LL) )
    *(_DWORD *)(a3 + 8) = 1;
  if ( (HalpFeatureBits & 0x80u) != 0 )
    *(_DWORD *)(a3 + 8) |= 8u;
  if ( a1 != 2 )
  {
    v8 = 0;
    result = 3221226021LL;
    if ( !(_DWORD)HalpInterruptProcessorCount )
      return result;
    for ( i = HalpInterruptProcessorState; !*(_BYTE *)(i + 13) || *(_DWORD *)i != a2; i += 64LL )
    {
      if ( ++v8 >= (unsigned int)HalpInterruptProcessorCount )
        return result;
    }
    v11 = HalpInterruptTargets;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(i + 16);
    v12 = 3LL * *(unsigned int *)(i + 20);
    if ( v7 == 1
      || (v13 = qword_140C63A68[*(unsigned __int16 *)(i + 16)], _bittest64(&v13, *(unsigned __int8 *)(i + 18))) )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 20) = 1;
    }
    else
    {
      *(_DWORD *)(a3 + 20) = v7;
      if ( v7 == 2 )
      {
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 8 * v12 + 8);
      }
      else
      {
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 8 * v12 + 12);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(v11 + 8 * v12 + 8);
      }
    }
  }
  return 0LL;
}
