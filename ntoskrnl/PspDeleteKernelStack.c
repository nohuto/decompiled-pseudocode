/*
 * XREFs of PspDeleteKernelStack @ 0x1402ED360
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 *     KeResetKernelShadowStackRstorssp @ 0x140971390 (KeResetKernelShadowStackRstorssp.c)
 *     KiDeleteKernelShadowStack @ 0x14097141C (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r9
  bool v6; // zf
  unsigned int v7; // r10d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 || (v6 = *(_QWORD *)(a2 + 16) == *(_QWORD *)(a1 + 96), v3 = 8LL, !v6) )
    v3 = 2LL;
  result = MmDeleteKernelStackEx(*(_QWORD *)a2, v3, a1);
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 40) & 7;
    v8 = *(_QWORD *)(a2 + 48);
    if ( v7 == 2 )
    {
      KeResetKernelShadowStackRstorssp(&v8, *(_QWORD *)(a2 + 56));
      v5 = v8;
    }
    return KiDeleteKernelShadowStack(*(_QWORD *)(a2 + 32), v7, 0LL, v5);
  }
  return result;
}
