/*
 * XREFs of WheapGetErrorThresholdInformation @ 0x14060EB3C
 * Callers:
 *     WheapApplyThresholdChecks @ 0x14060E808 (WheapApplyThresholdChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall WheapGetErrorThresholdInformation(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r10d
  int v4; // r11d
  __int64 v5; // rax
  unsigned __int8 *v6; // rcx

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    v5 = 144LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 104) == 2
      || *(_DWORD *)(a1 + 104) == 4
      || *(_DWORD *)(a1 + 104) != 5 && *(_DWORD *)(a1 + 104) != 8 && (unsigned int)(*(_DWORD *)(a1 + 104) - 12) > 1 )
    {
      goto LABEL_17;
    }
    v5 = 160LL;
  }
  v6 = (unsigned __int8 *)(v5 + a1);
  if ( v6 && (*v6 == 1 || *v6 == 2 || *v6 == 3 || *v6 == 4 || *v6 == 8 || (unsigned int)*v6 - 9 <= 1) )
  {
    v4 = *((_DWORD *)v6 + 6);
    v3 = *((_DWORD *)v6 + 5);
  }
LABEL_17:
  *a2 = v4;
  *a3 = v3;
}
