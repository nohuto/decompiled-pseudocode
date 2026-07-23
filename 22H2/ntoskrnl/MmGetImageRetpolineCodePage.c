/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1407CDAC0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1402F3630 (MiIsRetpolineEnabled.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  PVOID v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax

  if ( !MiIsRetpolineEnabled() || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v6 = MiLookupDataTableEntry((unsigned __int64)v4, 1);
    result = *(_QWORD *)(v6 + 48) + *(unsigned int *)(v6 + 64) + (unsigned int)dword_140C4CCB0;
    *a2 = (unsigned int)(dword_140C4CC88 << 12);
  }
  return result;
}
