/*
 * XREFs of ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18000F004
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000E2EC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180037788 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18007B8F0 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     CemRcTableFind @ 0x18000EBC0 (CemRcTableFind.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180010130 (CempPackageFamilyNameFromPsmKey.c)
 *     StringCopyWorkerW @ 0x1800113D0 (StringCopyWorkerW.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800251A0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

struct _HAM_APPLICATION *__fastcall HampAppFind(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_APPLICATION_INFO *a2)
{
  int v4; // ebx
  size_t *v5; // r8
  struct _HAM_PACKAGE *v6; // rax
  __int64 v7; // rbx
  struct _HAM_PACKAGE *v8; // rdi
  size_t v10; // [rsp+20h] [rbp-188h]
  wchar_t pszDest[66]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE DestinationSid[68]; // [rsp+B4h] [rbp-F4h] BYREF
  int v13; // [rsp+F8h] [rbp-B0h]
  wchar_t pszSrc[72]; // [rsp+100h] [rbp-A8h] BYREF

  memset_0(pszSrc, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey(a2, pszSrc);
  v4 = *((_DWORD *)a2 + 133);
  memset_0(pszDest, 0, 0xCCuLL);
  StringCopyWorkerW(pszDest, 0x41uLL, v5, pszSrc, v10);
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v13 = v4;
  v6 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)pszDest);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    v7 = CemRcTableFind(
           (unsigned __int64)v6 + 40,
           (__int64)a2,
           (__int64 (__fastcall *)(__int64, __int64))HampAppCompareByIdentity);
    CemRcObjectDereference(v8);
  }
  return (struct _HAM_APPLICATION *)v7;
}
