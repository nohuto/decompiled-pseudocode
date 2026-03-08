/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x140A318F0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax

  if ( !MiIsRetpolineEnabled() || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v5 = MiLookupDataTableEntry(v4, 1);
    result = v5[6] + *((unsigned int *)v5 + 16) + (unsigned int)dword_140C694FC;
    *a2 = (unsigned int)(dword_140C65500 << 12);
  }
  return result;
}
