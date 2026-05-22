/*
 * XREFs of _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x1800C6900
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800C61DC (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C55E8 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 */

__int64 __fastcall anonymous_namespace_::OpenPosesFallbackRootKey(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        HKEY *a5)
{
  int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // edi
  LSTATUS v9; // eax
  unsigned int v10; // ebx
  HKEY v11; // rdi
  DWORD LastError; // ebx
  LSTATUS v13; // eax
  HKEY v14; // rcx
  HKEY v15; // rax
  PHKEY phkResult; // [rsp+20h] [rbp-A1h]
  HKEY hKey; // [rsp+30h] [rbp-91h] BYREF
  HKEY v19; // [rsp+38h] [rbp-89h] BYREF
  WCHAR SubKey[64]; // [rsp+40h] [rbp-81h] BYREF

  v19 = 0LL;
  v6 = a3;
  v7 = a2;
  *a5 = 0LL;
  v8 = a1;
  v9 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Holographic\\ControllerPoses",
         0,
         0x20019u,
         &v19);
  v10 = v9;
  if ( v9 )
  {
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    hKey = 0LL;
    memset_0(SubKey, 0, sizeof(SubKey));
    LODWORD(phkResult) = v6;
    swprintf_s<64>(SubKey, L"%04x_%04x_%04x\\%ws", v8, v7, phkResult, a4);
    if ( !RegOpenKeyExW(v19, SubKey, 0, 0x20019u, &hKey) )
      goto LABEL_11;
    swprintf_s<64>(SubKey, L"%04x_%04x\\%ws", v8, v7, a4);
    v11 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v11);
      SetLastError(LastError);
    }
    hKey = 0LL;
    v13 = RegOpenKeyExW(v19, SubKey, 0, 0x20019u, &hKey);
    v10 = v13;
    if ( v13 )
    {
      if ( v13 > 0 )
        v10 = (unsigned __int16)v13 | 0x80070000;
      v14 = hKey;
    }
    else
    {
LABEL_11:
      v15 = hKey;
      v14 = 0LL;
      hKey = 0LL;
      v10 = 0;
      *a5 = v15;
    }
    if ( v14 )
      RegCloseKey(v14);
  }
  if ( v19 )
    RegCloseKey(v19);
  return v10;
}
