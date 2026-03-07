__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi

  v3 = DXGSYNCOBJECT::SignalFence(*(_QWORD *)a1, a2, *(_DWORD *)(a1 + 8), 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      a1,
      v4,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
