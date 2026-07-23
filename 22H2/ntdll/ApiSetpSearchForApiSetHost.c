/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x180019B88
 * Callers:
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180015FF0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, const WCHAR *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r12
  int v5; // ebp
  int v7; // ebx
  const WCHAR *v8; // r10
  __int64 v9; // rdi
  SIZE_T v10; // r13
  int v11; // esi
  LONG v12; // eax

  v4 = *(unsigned int *)(a1 + 16);
  v5 = 1;
  v7 = *(_DWORD *)(a1 + 20) - 1;
  v8 = a2;
  v9 = v4 + a4;
  if ( v7 >= 1 )
  {
    v10 = a3;
    do
    {
      v11 = (v7 + v5) >> 1;
      v12 = RtlCompareUnicodeStrings(
              v8,
              v10,
              (PCWCH)(a4 + *(unsigned int *)(a4 + v4 + 20LL * v11 + 4)),
              (unsigned __int64)*(unsigned int *)(a4 + v4 + 20LL * v11 + 8) >> 1,
              1u);
      if ( v12 < 0 )
      {
        v7 = v11 - 1;
      }
      else
      {
        if ( v12 <= 0 )
          return a4 + v4 + 20LL * v11;
        v5 = v11 + 1;
      }
      v8 = a2;
    }
    while ( v5 <= v7 );
  }
  return v9;
}
