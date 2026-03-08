/*
 * XREFs of ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C00F5884
 * Callers:
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C02389D0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::IsTouchpadActive(CPTPEngine *this)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int i; // r8d

  v1 = *((_DWORD *)this + 984);
  if ( (v1 & 1) != 0 )
    return 1;
  if ( (v1 & 2) != 0 )
    return 1;
  if ( (v1 & 4) != 0 )
    return 1;
  v2 = 0;
  if ( *((_DWORD *)this + 978) )
  {
    return 1;
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      if ( (*((_DWORD *)this + 100 * i + 302) & 0x20000000) != 0 )
        return 1;
    }
  }
  return v2;
}
