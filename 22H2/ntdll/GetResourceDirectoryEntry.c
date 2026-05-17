/*
 * XREFs of GetResourceDirectoryEntry @ 0x18006BDBC
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BE00 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18006C044 (ValidatePointer.c)
 */

__int64 __fastcall GetResourceDirectoryEntry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx

  if ( a3 < *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14)
    && (unsigned int)ValidatePointer(a1, a2 + 8LL * a3 + 16, 8LL) )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
