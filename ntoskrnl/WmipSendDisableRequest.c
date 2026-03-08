/*
 * XREFs of WmipSendDisableRequest @ 0x140786EB4
 * Callers:
 *     WmipDisableCollectOrEvent @ 0x140786E44 (WmipDisableCollectOrEvent.c)
 * Callees:
 *     WmipDoDisableRequest @ 0x140786F08 (WmipDoDisableRequest.c)
 */

__int64 __fastcall WmipSendDisableRequest(_DWORD *a1, char a2)
{
  __int64 result; // rax
  int v4; // r8d
  int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rdx
  int v8; // edx

  result = 0LL;
  if ( a2 )
  {
    v8 = a1[22];
    v4 = 2;
    if ( !v8 )
      return result;
    v5 = v8 - 1;
    a1[22] = v5;
  }
  else
  {
    --a1[23];
    v4 = 4;
    v5 = a1[23];
  }
  if ( !v5 )
  {
    v6 = a1[4];
    if ( (v6 & v4) == 0 )
    {
      v7 = v4 | v6;
      a1[4] = v7;
      LOBYTE(v7) = a2;
      return WmipDoDisableRequest(a1, v7);
    }
  }
  return result;
}
