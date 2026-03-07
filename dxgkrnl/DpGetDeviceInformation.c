__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  _DWORD *v5; // r14
  int RegistryValues; // eax
  _QWORD v8[14]; // [rsp+30h] [rbp-78h] BYREF
  int v9; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1
    && a2
    && (v4 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v4 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v4 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
      WdLogSingleEntry1(3LL, -1073741811LL);
    memset(a2, 0, 0x50uLL);
    *a2 = *(_QWORD *)(v4 + 48);
    a2[1] = *(_QWORD *)(v4 + 152);
    a2[4] = *(_QWORD *)(v4 + 1288);
    a2[5] = DpGlobals;
    a2[6] = *(&DpGlobals + 1);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v4 + 528);
    a2[7] = *(_QWORD *)(v4 + 768);
    a2[8] = *(_QWORD *)(v4 + 760);
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v4 + 1157) == 1 )
    {
      memset(v8, 0, sizeof(v8));
      v9 = 0;
      v8[2] = L"DockingState";
      LODWORD(v8[1]) = 288;
      v5 = a2 + 9;
      LODWORD(v8[4]) = 0x4000000;
      v8[3] = v5;
      v8[5] = &v9;
      LODWORD(v8[6]) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v8, 0LL, 0LL);
      v2 = RegistryValues;
      if ( RegistryValues < 0 )
      {
        WdLogSingleEntry1(2LL, RegistryValues);
        v2 = 0;
        *v5 = v9;
      }
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v2;
}
