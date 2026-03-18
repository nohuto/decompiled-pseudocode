/*
 * XREFs of RtlpGetEntireXStateAreaLength @ 0x14024ED80
 * Callers:
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x1405E805C (RtlpGetNonLegacyXStateAreaLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  _DWORD *v4; // rdx

  v2 = 2;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return MEMORY[0xFFFFF780000003E8];
  result = 576LL;
  v4 = (_DWORD *)0xFFFFF7800000060CLL;
  do
  {
    if ( ((1LL << v2) & a1) != 0 )
    {
      if ( ((1LL << v2) & MEMORY[0xFFFFF780000005F8]) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*v4 + result);
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 0x40 );
  return result;
}
