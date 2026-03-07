__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v4; // ecx
  DMMVIDPNTOPOLOGY *v5; // r9
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v13; // r13
  struct DMMVIDPNTARGETMODE *v14; // r14
  __int64 v15; // rdx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v16; // ebx
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r14d
  int v21; // ecx
  unsigned int v22; // ebx
  struct DMMVIDPNTARGETMODE *v23; // rax
  unsigned int v24; // eax
  __int64 v26; // r9
  __int64 v27; // r15
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // ecx
  bool v31; // al
  int v32; // esi
  struct DMMVIDPNTARGETMODESET *v33; // rax
  __int64 v34; // r15
  const struct DMMVIDPNSOURCEMODESET *v35; // rbx
  int v36; // eax
  char v37; // r8
  int v38; // ecx
  int v39; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-34h]
  struct DMMVIDPNTARGETMODE *v41; // [rsp+38h] [rbp-30h]
  __int64 v42; // [rsp+40h] [rbp-28h] BYREF
  struct DMMVIDPNTARGETMODESET *v43; // [rsp+48h] [rbp-20h] BYREF
  struct DMMVIDPNTARGETMODESET *v44; // [rsp+50h] [rbp-18h] BYREF
  DMMVIDPNTOPOLOGY *i; // [rsp+58h] [rbp-10h]
  unsigned int v46; // [rsp+B0h] [rbp+48h] BYREF
  int v47; // [rsp+B8h] [rbp+50h]
  __int64 v48; // [rsp+C0h] [rbp+58h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v49; // [rsp+C8h] [rbp+60h] BYREF

  v48 = a3;
  v47 = a2;
  v4 = 0;
  v40 = 0;
  if ( !*a1 )
    return 0LL;
  v5 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
  v6 = -1073741811;
  for ( i = (DMMVIDPNTOPOLOGY *)(a3 + 96); ; v5 = i )
  {
    v7 = v4;
    v8 = 120LL * v4;
    v9 = *(_QWORD *)&a1[v8 + 16];
    v10 = *(unsigned int *)(v9 + 28);
    v11 = *(unsigned int *)(v9 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath(v5, *(_DWORD *)(v9 + 24), *(_DWORD *)(v9 + 28));
    v13 = Path;
    if ( !Path )
      break;
    v43 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v14 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v43 + 18);
    v41 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL), v48);
      v6 = -1071774967;
      goto LABEL_65;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL) + 112LL);
    if ( v15 )
    {
      MONITOR_MGR::AcquireMonitorShared(&v42, v15);
      if ( v42 )
      {
        v16.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v42 + 364);
        ExReleaseResourceLite((PERESOURCE)(v42 + 24));
        KeLeaveCriticalRegion();
        v17 = v48;
        goto LABEL_8;
      }
      WdLogSingleEntry1(2LL, -1073741275LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>(&v42);
      v26 = -1073741275LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v26 = -1073741811LL;
    }
    v17 = v48;
    WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL), v48, v26);
    v16.Value = 0;
LABEL_8:
    v18 = *(_QWORD *)&a1[v8 + 16];
    v46 = 0;
    v19 = *((_DWORD *)v14 + 32);
    v49.0 = v16.0;
    v28 = (*(_BYTE *)v18 & 8) == 0;
    v39 = v19;
    if ( v28 )
      goto LABEL_9;
    v22 = *(_DWORD *)(v18 + 204);
    v20 = *(_DWORD *)(v18 + 208);
    if ( !(unsigned __int8)BmlDoesTargetModeSupportWireFormat(v41, v22) )
    {
      v29 = *(_QWORD *)&a1[v8 + 16];
      if ( (*(_BYTE *)(v29 + 8) & 8) != 0 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v29 + 28));
        v6 = -1071774902;
        goto LABEL_65;
      }
      v14 = v41;
LABEL_9:
      if ( (a1[v8 + 132] & 2) != 0
        && (*(_DWORD *)&a1[v8 + 116] & 1) != 0
        && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304780)
        && ModeSupportsHighDepthColorFormat(v14, &v49)
        && (a1[v8 + 132] & 1) == 0 )
      {
        v31 = 0;
        if ( v47 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v30 != 36 && v30 != 113 )
            v31 = 1;
        }
        v32 = 4 * !v31;
        v20 = !v31 ? 0xC : 0;
        v33 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v13 + 11));
        v34 = *(_QWORD *)(v17 + 48);
        v35 = v33;
        v44 = v33;
        if ( !*(_QWORD *)(v34 + 8) )
          WdLogSingleEntry0(1LL);
        if ( !IsHDRSourceModeAvailableForPinnedSourceMode(
                *(const struct DXGADAPTER **)(*(_QWORD *)(v34 + 8) + 16LL),
                v35) )
        {
          v20 = 0;
          v32 = 0;
        }
        v36 = PickWireFormatWithPreference(v32, &v39, &v49, (int *)&v46);
        v22 = v46;
        if ( v36 < 0 )
        {
          v22 = v46 & 0xFFFFFF03 | 8;
          v20 = 0;
          WdLogSingleEntry0(3LL);
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
      }
      else if ( (a1[v8 + 132] & 6) == 6 && ModeSupportsHighDepthColorFormat(v14, &v49) && (v37 & 1) == 0 )
      {
        v20 = 30;
        if ( (int)PickWireFormatWithPreference(3, &v39, &v49, (int *)&v46) >= 0 )
          goto LABEL_14;
        v22 = v46 & 0xFFFFFF03 | 8;
        v20 = 0;
        WdLogSingleEntry0(3LL);
      }
      else
      {
        v20 = 0;
        v21 = 1;
        if ( v47 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v38 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v38 == 31 || v38 == 35 )
            v21 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v21, &v39, &v49, (int *)&v46) >= 0 )
        {
LABEL_14:
          v22 = v46;
          goto LABEL_15;
        }
        v22 = v46 & 0xFFFFFF03 | 8;
        WdLogSingleEntry0(3LL);
      }
      goto LABEL_15;
    }
    if ( (unsigned int)(v20 - 31) > 2 )
      goto LABEL_19;
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
    {
      v27 = *(_QWORD *)(v17 + 48);
      if ( !*(_QWORD *)(v27 + 8) )
        WdLogSingleEntry0(1LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) + 436LL) & 8) == 0 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL));
LABEL_65:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v43, 0LL);
        return v6;
      }
    }
    if ( v20 == 32 )
    {
      v28 = (*(_DWORD *)&a1[v8 + 116] & 2) == 0;
    }
    else
    {
LABEL_19:
      if ( v20 != 33 )
        goto LABEL_15;
      v28 = (*(_DWORD *)&a1[v8 + 116] & 4) == 0;
    }
    if ( v28 )
    {
      v6 = -1073741637;
      goto LABEL_65;
    }
LABEL_15:
    v23 = v41;
    *((_DWORD *)v41 + 33) = v22;
    *((_DWORD *)v23 + 34) = v20;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v43, 0LL);
    v24 = *a1;
    v4 = v40 + 1;
    v40 = v4;
    if ( v4 >= v24 )
      return 0LL;
  }
  WdLogSingleEntry5(2LL, v7, a1, v11, v10, v48);
  return 3223192345LL;
}
