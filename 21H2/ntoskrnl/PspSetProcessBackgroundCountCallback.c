/*
 * XREFs of PspSetProcessBackgroundCountCallback @ 0x1406E6FA0
 * Callers:
 *     <none>
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x14035B760 (PspNotifyProcessBackgroundTransition.c)
 */

__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, _BYTE *a2)
{
  int v2; // r8d
  int v3; // edx

  if ( (*(_DWORD *)(a1 + 1120) & 1) == 0 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1296) + 1052LL);
    if ( !*a2 )
    {
      if ( v2 )
        return 0LL;
      v3 = 0;
      goto LABEL_5;
    }
    if ( v2 == 1 )
    {
      v3 = 1;
LABEL_5:
      PspNotifyProcessBackgroundTransition(a1, v3);
    }
  }
  return 0LL;
}
