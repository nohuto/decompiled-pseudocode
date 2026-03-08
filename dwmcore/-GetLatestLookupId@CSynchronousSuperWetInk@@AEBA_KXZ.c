/*
 * XREFs of ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x180250384
 * Callers:
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18024FECC (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSynchronousSuperWetInk::GetLatestLookupId(CSynchronousSuperWetInk *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 31);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
