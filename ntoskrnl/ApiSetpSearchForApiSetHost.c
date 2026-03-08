/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x140612500
 * Callers:
 *     ApiSetResolveToHost @ 0x1402F3878 (ApiSetResolveToHost.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140684CA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, const WCHAR *a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebx
  const WCHAR *v8; // r10
  SIZE_T v10; // r13
  int v11; // ebp
  __int64 v12; // r15
  LONG v13; // eax

  v4 = 1;
  v5 = a4 + *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20) - 1;
  v8 = a2;
  if ( v6 >= 1 )
  {
    v10 = a3;
    do
    {
      v11 = (v4 + v6) >> 1;
      v12 = a4 + *(unsigned int *)(a1 + 16) + 20LL * v11;
      v13 = RtlCompareUnicodeStrings(v8, v10, (PCWCH)(a4 + *(unsigned int *)(v12 + 4)), *(_DWORD *)(v12 + 8) >> 1, 1u);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          return v12;
        v4 = v11 + 1;
      }
      else
      {
        v6 = v11 - 1;
      }
      v8 = a2;
    }
    while ( v4 <= v6 );
  }
  return v5;
}
