/*
 * XREFs of ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x180081BE8
 * Callers:
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007B450 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x1800803F8 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 */

__int64 __fastcall HampActResetExternalResourcePriority(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  int *v2; // rsi
  int v3; // eax
  int v4; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  v2 = (int *)(a1 + 68);
  v3 = *((_DWORD *)a1 + 136);
  if ( (v3 & 1) != 0 )
  {
    v4 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v4 = -1073741275;
  }
  else if ( (v3 & 8) != 0 )
  {
    v4 = -1058275327;
  }
  else
  {
    v5 = a1[10];
    *v2 = v3 | 1;
    HampHostReleaseLockExclusiveEx(v5);
    v4 = HampRmContextResetExternalResourcePriority(a1[11]);
    HampHostAcquireLockExclusiveEx(a1[10], 0);
    *v2 &= ~1u;
    if ( v4 >= 0 )
      v4 = 0;
  }
  HampHostReleaseLockExclusiveEx(a1[10]);
  RtlWakeAddressAll(a1 + 68);
  return (unsigned int)v4;
}
