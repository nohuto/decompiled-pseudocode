/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x1408778D0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140877924 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a4, a5, a3, a6);
  else
    return PiDevCfgCopyDeviceKey(a4, 1, 0LL, a6);
}
