/*
 * XREFs of PspUpdateJobEffectivePriorityLimits @ 0x140788AC4
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     PspSetJobBackgroundCountCallback @ 0x140788A70 (PspSetJobBackgroundCountCallback.c)
 *     PspSetJobIoPriorityLimitPreCallback @ 0x1409AFAF0 (PspSetJobIoPriorityLimitPreCallback.c)
 *     PspSetJobPagePriorityLimitPreCallback @ 0x1409AFE20 (PspSetJobPagePriorityLimitPreCallback.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 */

void __fastcall PspUpdateJobEffectivePriorityLimits(__int64 a1, char a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax

  v2 = *(_QWORD *)(a1 + 1288);
  v3 = (_DWORD *)a1;
  if ( (a2 & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 1072);
    if ( v2 && v4 >= *(_DWORD *)(v2 + 1068) )
      v4 = *(_DWORD *)(v2 + 1068);
    v5 = 0;
    if ( !v3[264] )
      v5 = v4;
    v3[267] = v5;
  }
  if ( (a2 & 2) != 0 )
  {
    v6 = v3[270];
    if ( v2 && v6 >= *(_DWORD *)(v2 + 1076) )
      v6 = *(_DWORD *)(v2 + 1076);
    if ( v3[264] )
    {
      v7 = MmGetMinWsPagePriority() + 1;
      if ( v6 >= v7 )
        v6 = v7;
    }
    v3[269] = v6;
  }
}
