void __fastcall DpiKsrCancel(_WORD *a1)
{
  __int64 v1; // rdx
  _OWORD v2[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v3; // [rsp+70h] [rbp-18h]

  a1[652] = 0;
  *((_BYTE *)DXGGLOBAL::GetGlobal() + 305188) = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  LODWORD(v2[0]) = 1;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, v2);
  LOBYTE(v1) = 1;
  KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v1);
  DxgkLogInternalTriageEvent(
    0LL,
    65539,
    -1,
    (__int64)L"KSR Cancel routine has completed with status %1",
    (int)v3,
    0LL,
    0LL,
    0LL,
    0LL);
}
