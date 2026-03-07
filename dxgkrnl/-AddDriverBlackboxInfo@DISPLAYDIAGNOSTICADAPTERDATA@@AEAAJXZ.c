__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rbp
  int v3; // edi
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx

  v1 = *(_QWORD *)this;
  v3 = 0;
  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 1328LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1328LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v1) )
  {
    WdLogSingleEntry1(1LL, 1329LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1329LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(v1 + 2096) >= 0xC004u && *(int *)(v1 + 2820) >= 2700 )
  {
    if ( *((_QWORD *)this + 435) )
    {
      WdLogSingleEntry1(1LL, 1346LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DriverBlackboxInfo.pBuffer == NULL",
        1346LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v4 = operator new[](0x100000uLL, 0x4B677844u, 256LL);
    *((_QWORD *)this + 435) = v4;
    if ( !v4 )
    {
      WdLogSingleEntry1(6LL, 0x100000LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating black screen driver blackbox buffer(size 0x%I64x)",
        0x100000LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((_QWORD *)this + 407) = *(_QWORD *)(v1 + 280);
    *((_DWORD *)this + 816) = 3;
    *((_DWORD *)this + 868) = 0x100000;
    v6 = MEMORY[0xFFFFF78000000320];
    v7 = v6 * KeQueryTimeIncrement();
    v9 = DXGADAPTER::DdiCollectDiagnosticInfo(
           (DXGADAPTER *)v1,
           (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256),
           v8);
    v10 = MEMORY[0xFFFFF78000000320];
    v3 = v9;
    *((_QWORD *)this + 437) = (v10 * (unsigned __int64)KeQueryTimeIncrement() - v7) / 0x2710;
    if ( v3 >= 0 )
    {
      if ( *((_DWORD *)this + 869) <= 0x100000u )
        *((_BYTE *)this + 3488) = 1;
      else
        *((_DWORD *)this + 869) = 0;
    }
  }
  return (unsigned int)v3;
}
