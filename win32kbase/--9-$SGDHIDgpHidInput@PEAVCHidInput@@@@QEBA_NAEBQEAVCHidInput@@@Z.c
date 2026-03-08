/*
 * XREFs of ??9?$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1C0031EDC
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0031E80 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     CHidInput_Destroy @ 0x1C0095310 (CHidInput_Destroy.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D3750 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGDHIDgpHidInput<CHidInput *>::operator!=(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16840) != *a2;
}
