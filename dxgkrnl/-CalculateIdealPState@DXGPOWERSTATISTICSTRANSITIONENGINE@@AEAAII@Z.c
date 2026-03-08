/*
 * XREFs of ?CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAII@Z @ 0x1C0054470
 * Callers:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C00544FC (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(
        DXGPOWERSTATISTICSTRANSITIONENGINE *this,
        unsigned int a2)
{
  unsigned int *v2; // rdi
  unsigned __int64 v3; // r11
  unsigned int v4; // r9d
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v2 = (unsigned int *)*((_QWORD *)this + 2);
  v3 = -1LL;
  v4 = *v2;
  v5 = a2 * (unsigned __int64)v2[*((unsigned int *)this + 14) + 1] / *(unsigned int *)(*(_QWORD *)this + 4460LL);
  v6 = *v2;
  if ( !*v2 )
    return 0LL;
  while ( 1 )
  {
    v7 = v6 - 1;
    v8 = v2[v7 + 1];
    v9 = v8 - v5;
    if ( v8 <= v5 )
      v9 = v5 - v8;
    if ( v9 >= v3 )
      break;
    v3 = v9;
    --v6;
    if ( !(_DWORD)v7 )
      return 0LL;
  }
  if ( v6 >= v4 )
    return v4 - 1;
  return v6;
}
