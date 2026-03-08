/*
 * XREFs of SepFreePrimaryGroup @ 0x1409C6958
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SepFreePrimaryGroup(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdx
  unsigned __int16 *v4; // rcx

  result = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 140) += 4 * *(unsigned __int8 *)(result + 1) + 8;
  v3 = *(unsigned __int16 **)(a1 + 184);
  if ( v3 )
  {
    v4 = *(unsigned __int16 **)(a1 + 176);
    if ( v4 != v3 )
    {
      memmove(v4, v3, v3[1]);
      result = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 184) = result;
    }
  }
  return result;
}
