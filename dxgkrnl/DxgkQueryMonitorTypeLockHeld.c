__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9,
        _BYTE *a10)
{
  __int64 v10; // rbx
  unsigned int v11; // r10d
  __int64 v14; // rsi
  _BYTE *v15; // rdi
  bool *v16; // r14
  bool *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v21; // rdx
  unsigned int v22; // eax
  bool v23; // r15
  bool v24; // r14
  char v25; // r13
  __int64 v26; // rdi
  int IsMonitorVirtualModeDisabled; // eax
  char v28; // al
  char v29; // al
  __int64 result; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // rbx
  struct DMMVIDEOPRESENTTARGET *v38; // [rsp+50h] [rbp-48h]
  __int64 v39[8]; // [rsp+58h] [rbp-40h] BYREF
  struct HDXGMONITOR__ *v40; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+A8h] [rbp+10h]
  _DWORD *v42; // [rsp+B0h] [rbp+18h]

  v42 = a3;
  v41 = a2;
  v10 = *(_QWORD *)(a1 + 2920);
  v11 = a2;
  LODWORD(v14) = 0;
  if ( !v10 )
  {
    v31 = a2;
    WdLogSingleEntry2(2LL, a1, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called on a render only adapter. (pAdapter = 0x%I64x, VidPn target Id = 0x%I64x)",
      a1,
      v31,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called with D3DDDI_ID_UNINITIALIZED (pAdapter = 0x%I64x)",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v15 = a6;
  v16 = a8;
  if ( a4 )
  {
    v17 = a9;
  }
  else
  {
    v17 = a9;
    if ( !a5 && !a6 && !a8 && !a9 )
      goto LABEL_34;
  }
  v18 = *(_QWORD *)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v39, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
  v19 = *(_QWORD *)(v18 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, v41);
  v38 = TargetById;
  v21 = TargetById;
  if ( !TargetById )
  {
    if ( v15 )
      *v15 = 0;
    if ( v16 )
      *v16 = *(_BYTE *)(*(_QWORD *)(a1 + 2920) + 289LL);
    if ( v17 )
      *v17 = *(_BYTE *)(*(_QWORD *)(a1 + 2920) + 290LL);
    goto LABEL_31;
  }
  if ( a4 )
    *a4 = *((_DWORD *)TargetById + 20);
  if ( a5 )
    *a5 = *((_DWORD *)TargetById + 21);
  if ( v15 )
    *v15 = *((_BYTE *)TargetById + 405);
  if ( v16 || v17 )
  {
    v22 = *((_DWORD *)TargetById + 6);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( v22 == -1 )
    {
      LODWORD(v14) = -1073741811;
LABEL_52:
      WdLogSingleEntry2(2LL, *((unsigned int *)v21 + 6), a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to find virtualization state on VidPn Target 0x%I64x adapter 0x%I64x",
        *((unsigned int *)v38 + 6),
        a1,
        0LL,
        0LL,
        0LL);
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v39[0] + 40));
      return (unsigned int)v14;
    }
    v26 = *(_QWORD *)(a1 + 2920);
    if ( !v26 )
    {
      WdLogSingleEntry1(2LL, 9698LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The selected adapter is render-only",
        9698LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v14) = -1073741811;
LABEL_51:
      v21 = v38;
      goto LABEL_52;
    }
    LOBYTE(v40) = 0;
    IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a1, v22, &v40);
    v14 = IsMonitorVirtualModeDisabled;
    if ( IsMonitorVirtualModeDisabled == -1073741632 )
    {
      v28 = 0;
      LODWORD(v14) = 0;
    }
    else
    {
      if ( IsMonitorVirtualModeDisabled < 0 )
      {
        WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_24;
      }
      v28 = (char)v40;
    }
    if ( v28 )
    {
      v23 = 1;
      v24 = 1;
LABEL_23:
      v25 = 1;
      goto LABEL_24;
    }
    v29 = *(_BYTE *)(v26 + 289);
    v23 = v29 == 0;
    v24 = *(_BYTE *)(v26 + 290) == 0;
    if ( !v29 || (*(_DWORD *)(v26 + 24) & 0x20) == 0 )
      goto LABEL_23;
LABEL_24:
    if ( (int)v14 >= 0 )
    {
      if ( a8 )
        *a8 = !v23;
      if ( a9 )
        *a9 = !v24;
      if ( a10 )
        *a10 = v25 ^ 1;
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_31:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v39[0] + 40));
  v11 = v41;
  a3 = v42;
LABEL_34:
  if ( a7 )
  {
    v32 = *(_QWORD *)(a1 + 2920);
    if ( *(_BYTE *)(v32 + 289) && *(_BYTE *)(v32 + 290)
      || (v33 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
    {
      v33 = 1;
    }
    *a7 = v33;
  }
  if ( !a3 )
    return (unsigned int)v14;
  v40 = 0LL;
  result = MonitorGetMonitorHandle(a1, v11, 0LL, DxgkQueryMonitorTypeLockHeld, &v40);
  if ( (int)result >= 0 )
  {
    LODWORD(v14) = MonitorGetMonitorType(v40, v42, v34, v35);
    if ( (int)v14 < 0 )
    {
      v37 = v41;
      WdLogSingleEntry2(2LL, v41, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to find MonitorType on VidPn Target 0x%I64x adapter 0x%I64x",
        v37,
        a1,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, (__int64)v40, DxgkQueryMonitorTypeLockHeld, v36) < 0 )
    {
      WdLogSingleEntry1(1LL, 3002LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3002LL, 0LL, 0LL, 0LL, 0LL);
    }
    return (unsigned int)v14;
  }
  return result;
}
