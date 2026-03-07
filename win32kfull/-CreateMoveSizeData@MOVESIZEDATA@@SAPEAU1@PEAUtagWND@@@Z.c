struct MOVESIZEDATA *__fastcall MOVESIZEDATA::CreateMoveSizeData(struct tagWND *a1)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)Feature_1200431418__private_IsEnabledDeviceUsage() && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 0LL;
  v3 = Win32AllocPoolWithQuotaZInit(360LL, 1936552789LL);
  v4 = v3;
  if ( v3 )
  {
    v6[1] = a1;
    v6[0] = v3 + 16;
    *(_QWORD *)(gptiCurrent + 672LL) = v3;
    HMAssignmentLock(v6, 0LL);
    *(_DWORD *)(v4 + 200) |= 0x80000u;
    v5 = gActiveMoveSizeDataList;
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    *(_QWORD *)v4 = gActiveMoveSizeDataList;
    *(_QWORD *)(v4 + 8) = &gActiveMoveSizeDataList;
    *(_QWORD *)(v5 + 8) = v4;
    gActiveMoveSizeDataList = v4;
  }
  return (struct MOVESIZEDATA *)v4;
}
