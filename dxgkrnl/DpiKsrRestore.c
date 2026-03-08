/*
 * XREFs of DpiKsrRestore @ 0x1C03A19E0
 * Callers:
 *     DpiInitializeGlobalState @ 0x1C03D91E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C03A0800 (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x1C03A0934 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 */

void DpiKsrRestore()
{
  int v0; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v4[256]; // [rsp+58h] [rbp-120h] BYREF
  __int64 *v5; // [rsp+158h] [rbp-20h]

  v3 = 0x2000000000LL;
  v5 = (__int64 *)v4;
  memset(v4, 0, sizeof(v4));
  KsrEnumeratePersistedMemory(&GUID_DXGK_KSR_MEMORY, DpiKsrEnumeratePersistedMemoryCallback, &v3);
  v0 = 0;
  if ( (_DWORD)v3 == 1 )
  {
    v1 = DpiClaimPersistedMemoryBlock(0LL, *v5, &GUID_DXGK_KSR_MEMORY);
    v0 = v1;
    if ( v1 >= 0 )
    {
      DxgkLogInternalTriageEvent(0LL, 0x10000, -1, (__int64)L"KSR Restore was successful", 0LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_7;
    }
    WdLogSingleEntry1(2LL, v1);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  DxgkLogInternalTriageEvent(
    0LL,
    0x10000,
    -1,
    (__int64)L"KSR Restore failed - blocks enumerated %1, status %2",
    (unsigned int)v3,
    v0,
    0LL,
    0LL,
    0LL);
  LOBYTE(v2) = 1;
  KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v2);
LABEL_7:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v3);
}
