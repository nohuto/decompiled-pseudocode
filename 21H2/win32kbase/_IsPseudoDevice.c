/*
 * XREFs of _IsPseudoDevice @ 0x1C01E8910
 * Callers:
 *     TouchTargetingEnabledForInput @ 0x1C01E8740 (TouchTargetingEnabledForInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall IsPseudoDevice(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 1;
  if ( v1 )
  {
    v3 = HMValidateHandleNoSecure(v1, 19);
    if ( v3 )
      return (*(_DWORD *)(v3 + 184) & 0x2000u) >> 13;
  }
  return v2;
}
