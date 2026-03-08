/*
 * XREFs of MiHandleEnclaveFault @ 0x140A39FAC
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  if ( !v1 )
    return 3221225477LL;
  v3 = -1073741819;
  if ( (*(_DWORD *)(v1 + 48) & 0x6200000) == 0x4200000
    && (*(_DWORD *)(v1 + 64) & 1) != 0
    && (*(_BYTE *)(v1 + 72) & 1) != 0 )
  {
    v3 = -1073740638;
  }
  MiUnlockAndDereferenceVadShared((PVOID)v1);
  return v3;
}
