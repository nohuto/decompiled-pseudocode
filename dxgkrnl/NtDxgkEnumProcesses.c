__int64 __fastcall NtDxgkEnumProcesses(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int64 LowPart; // rbx
  __int64 HighPart; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  struct _LUID v8; // r10
  ULONG64 v9; // r8
  _QWORD **v10; // rbx
  _QWORD *v11; // r9
  __int64 **v12; // r11
  _DWORD *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  __int64 *v16; // rcx
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  char v18; // [rsp+58h] [rbp-40h]
  DXGADAPTER *v19[2]; // [rsp+60h] [rbp-38h] BYREF
  struct _LUID v20[2]; // [rsp+70h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-18h]

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)&v20[0].LowPart = *(_OWORD *)v2;
  v21 = *(_QWORD *)(v2 + 16);
  v19[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v19, v20);
  if ( !v19[0] )
  {
    LowPart = v20[0].LowPart;
    HighPart = v20[0].HighPart;
    WdLogSingleEntry2(2LL, v20[0].HighPart, v20[0].LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NtDxgkEnumProcesses: Invalid Adapter (0x%I64x-0x%I64x) specified",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
LABEL_5:
    DXGADAPTER_REFERENCE::Assign(v19, 0LL);
    return 3221225485LL;
  }
  v6 = *((_QWORD *)v19[0] + 366);
  if ( !v6 )
  {
    WdLogSingleEntry2(3LL, v20[0].HighPart, v20[0].LowPart);
    goto LABEL_5;
  }
  v7 = v21;
  if ( v21 > 0x3FFFFFFF )
  {
    WdLogSingleEntry1(3LL, v21);
    goto LABEL_5;
  }
  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
    (DXGAUTOPUSHLOCKFASTSHARED *)&v17,
    (struct DXGPUSHLOCKFAST *)(v6 + 72));
  v8 = v20[1];
  if ( *(_QWORD *)&v20[1] && v7 >= *(unsigned int *)(v6 + 312) )
  {
    v9 = (ULONG64)v20[1];
    v10 = (_QWORD **)(v6 + 296);
    v11 = *v10;
    v12 = (__int64 **)MmUserProbeAddress;
    while ( v11 != v10 )
    {
      v13 = (_DWORD *)v9;
      if ( v9 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *(_QWORD *)(*(_QWORD *)(*(v11 - 3) + 64LL) + 80LL);
      v9 += 4LL;
      v11 = (_QWORD *)*v11;
    }
    v14 = (__int64)(v9 - *(_QWORD *)&v8) >> 2;
    v15 = 0;
  }
  else
  {
    v15 = -1073741789;
    v14 = *(unsigned int *)(v6 + 312);
    v12 = (__int64 **)MmUserProbeAddress;
  }
  v16 = (__int64 *)(a1 + 16);
  if ( a1 + 16 >= (unsigned __int64)*v12 )
    v16 = *v12;
  *v16 = v14;
  if ( v18 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 16));
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign(v19, 0LL);
  return v15;
}
