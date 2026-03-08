/*
 * XREFs of MiValidateAllocationType @ 0x1407C5194
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1407C4C00 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MiValidateAllocationType(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // r9d
  int v6; // eax
  int v7; // r8d
  int v8; // eax
  bool v9; // zf
  int ProtectionMask; // eax
  int v11; // eax

  v3 = a3;
  v4 = a1;
  if ( (a1 & 0x9E038FFF) != 0 || (a1 & 0x1083000) == 0 )
    return 3221225485LL;
  if ( (a1 & 0x61EC4000) == 0 )
    return 0LL;
  v6 = 0x80000;
  if ( (a1 & 0x80000) != 0 || (v6 = 0x1000000, (a1 & 0x1000000) != 0) )
  {
    if ( a1 != v6 )
      return 3221225485LL;
    goto LABEL_13;
  }
  if ( (a1 & 0x200000) == 0 )
  {
LABEL_13:
    v7 = a1 & 0x2000;
    goto LABEL_14;
  }
  if ( (a2 & 0x90000000) != 0 )
    return 3221225485LL;
  v7 = a1 & 0x2000;
  if ( (a1 & 0x2000) == 0 || (a1 & 0x840000) != 0 )
    return 3221225485LL;
LABEL_14:
  v8 = a1 & 0x20400000;
  if ( (a1 & 0x20400000) == 0x20400000 )
  {
    v9 = (a1 & 0x40800000) == 0;
  }
  else
  {
    if ( v8 != 0x20000000 )
      goto LABEL_16;
    v9 = (a1 & 0x40C00000) == 0;
  }
  if ( !v9 )
    return 3221225485LL;
LABEL_16:
  if ( (a1 & 0x800000) == 0 )
  {
    if ( v8 != 0x400000 )
    {
      if ( (a1 & 0x40000000) == 0 || (a1 & 0x100000) == 0 )
        goto LABEL_19;
      return 3221225485LL;
    }
    if ( !v7 || (a1 & 0xFF8F9FFF) != 0 )
      return 3221225485LL;
    ProtectionMask = MiMakeProtectionMask(v3);
    if ( ProtectionMask != -1 && (ProtectionMask & 0xFFFFFFF8) != 0x10 )
    {
      v11 = ProtectionMask & 7;
      if ( v11 == 4 || v11 == 1 )
        goto LABEL_19;
    }
    return 3221225541LL;
  }
  if ( (a1 & 0x40400000) != 0 )
    return 3221225485LL;
  if ( (v3 & 0xFFFFF9F9) != 0 )
    return 3221225541LL;
LABEL_19:
  if ( (v4 & 0x40000) != 0 )
  {
    if ( v7 && (v4 & 0xBFEBDFFF) == 0 && v3 == 1 )
      return 0LL;
    return 3221225485LL;
  }
  if ( (v4 & 0x4000) == 0 )
    return 0LL;
  if ( !v7 )
    return 3221225485LL;
  return (v4 & 0xDF9F8FFF) != 0 ? 0xC000000D : 0;
}
