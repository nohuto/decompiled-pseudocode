/*
 * XREFs of PspSetThreadPpmPolicy @ 0x140773D10
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetThreadPpmPolicy(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  __int64 result; // rax
  signed __int32 v5; // ett
  int v6; // edx

  v2 = 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return result;
        v2 = 768;
      }
      else
      {
        v2 = 512;
      }
    }
    else
    {
      v2 = 256;
    }
  }
  do
  {
    v5 = *(_DWORD *)(a1 + 956);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 956), v2 | v5 & 0xFFFFFCFF, v5);
  }
  while ( v5 != (_DWORD)result );
  return result;
}
