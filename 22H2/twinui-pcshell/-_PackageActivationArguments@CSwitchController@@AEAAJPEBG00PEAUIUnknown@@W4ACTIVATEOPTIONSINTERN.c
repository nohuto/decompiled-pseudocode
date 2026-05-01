/*
 * XREFs of ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x18043B54C
 * Callers:
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x18043B764 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 * Callees:
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x18043BABC (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18043E018 (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 */

__int64 __fastcall CSwitchController::_PackageActivationArguments(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        const WCHAR *a4,
        __int64 a5,
        int a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // ebx
  bool v12; // al

  v8 = 0;
  v12 = 0;
  *a8 = 0LL;
  if ( !a3 )
    v12 = CompareStringOrdinal(a2, -1, a4, -1, 1) == 2;
  if ( a7 || !v12 || !CSwitchController::s_IsLegacyApp((CallerIdentity *)a2) )
    return (unsigned int)CDelayedTileActivation_CreateInstance(a2, a3, a4, a5, a6);
  return v8;
}
