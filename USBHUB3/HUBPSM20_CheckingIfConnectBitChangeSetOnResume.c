/*
 * XREFs of HUBPSM20_CheckingIfConnectBitChangeSetOnResume @ 0x1C0012B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_CheckingIfConnectBitChangeSetOnResume(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // ax
  __int16 v3; // cx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 186);
  if ( (v2 & 1) != 0 )
  {
    v3 = -2;
    *(_DWORD *)(v1 + 12) = 16;
LABEL_5:
    *(_WORD *)(v1 + 186) = v3 & v2;
    return 3089LL;
  }
  if ( (v2 & 4) != 0 )
  {
    v3 = -5;
    *(_DWORD *)(v1 + 12) = 18;
    goto LABEL_5;
  }
  return 3005LL;
}
