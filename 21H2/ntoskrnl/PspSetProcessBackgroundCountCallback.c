/*
 * XREFs of PspSetProcessBackgroundCountCallback @ 0x14061EF60
 * Callers:
 *     <none>
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x1402FB964 (PspNotifyProcessBackgroundTransition.c)
 */

__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, _BYTE *a2)
{
  int v2; // r8d
  int v3; // edx

  if ( (*(_DWORD *)(a1 + 1120) & 1) == 0 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1296) + 860LL);
    if ( *a2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v3 = 1;
      goto LABEL_5;
    }
    if ( !v2 )
    {
      v3 = 0;
LABEL_5:
      PspNotifyProcessBackgroundTransition(a1, v3);
    }
  }
  return 0LL;
}
