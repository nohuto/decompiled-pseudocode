__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  char v7; // bl
  bool v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v7 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry1(1LL, 2316LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAdapter->IsCoreResourceSharedOwner()",
      2316LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 404);
  *(_DWORD *)(a1 + 20) = a3;
  LOBYTE(v10) = 0;
  v9 = 0;
  if ( (int)DmmIsStaticAndLeafTarget((void *const)a2, a3, (bool *)&v10, &v9) < 0
    || !(_BYTE)v10
    || !v9
    || *(int *)(a2 + 2552) < 0x2000 )
  {
    v7 = 0;
  }
  *(_BYTE *)(a1 + 30) = v7;
  return 0LL;
}
