__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  int v9; // r12d
  char v10; // bl
  char v11; // r15
  __int64 v12; // rcx
  char v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGADAPTER *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // ebx
  struct _LUID *v22; // rdx
  DXGADAPTER *v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rcx
  int v27; // eax
  const wchar_t *v28; // r9
  __int64 v29; // rcx
  char v30; // [rsp+50h] [rbp-41h]
  unsigned __int64 v31; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v32; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-29h]
  ADAPTER_RENDER *v34; // [rsp+70h] [rbp-21h] BYREF
  __int64 v35; // [rsp+78h] [rbp-19h]
  struct _DXGKARG_SETPOINTERPOSITION v36; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v7 = 4000LL * a2;
  v36 = 0LL;
  v32 = 0LL;
  LODWORD(v31) = a4;
  v9 = a3;
  v10 = *(_BYTE *)(v5 + v7 + 761);
  v30 = v10;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1791LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      1791LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_BYTE)v9 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v6) )
  {
    WdLogSingleEntry1(1LL, 1792LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1792LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v36.VidPnSourceId = v6;
  v32.VidPnSourceId = v6;
  v32.Visible = v9;
  v33 = (unsigned __int8)v6 | (v10 != 0 ? 0x80000000 : 0) | ((_BYTE)v9 != 0 ? 0x40000000 : 0);
  v11 = 0;
  v12 = *((_QWORD *)this + 2);
  v36.Flags.Value ^= (v36.Flags.Value ^ v9) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      WdLogSingleEntry1(1LL, 1813LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1813LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v12 + 412) == 32902 && *(int *)(v12 + 2552) < 4864 )
  {
LABEL_29:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = 1;
  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v12) )
    v11 = 1;
LABEL_9:
  v14 = *((_QWORD *)this + 2);
  LODWORD(v34) = 0;
  v35 = *(_QWORD *)(v14 + 2928);
  if ( v35 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      WdLogSingleEntry1(1LL, 1841LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        1841LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2928), 6LL, (unsigned int)v6);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2928), 0, 1 << v6, 0, 1 << v6);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v34, 1 << v6);
    }
  }
  if ( (_BYTE)v9 )
  {
    v27 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v32);
    v20 = v27;
    if ( v27 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v6) )
      {
        v29 = *((_QWORD *)this + 16);
        v36.X = *(_DWORD *)(v29 + v7 + 768);
        v36.Y = *(_DWORD *)(v29 + v7 + 772);
        LODWORD(v20) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36);
        if ( (int)v20 < 0 )
        {
          WdLogSingleEntry1(1LL, 1896LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1896LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_22;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v27);
    v28 = L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
LABEL_38:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v6, *((_QWORD *)this + 2), v20, 0LL, 0LL);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v6, 1);
    v21 = v31;
    goto LABEL_23;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v16 + 2866) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v16) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v6, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v6);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v36) < 0 )
  {
    WdLogSingleEntry1(1LL, 1921LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 1921LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v32);
  v20 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v17);
    v28 = L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    goto LABEL_38;
  }
LABEL_22:
  LOBYTE(v19) = v9;
  v21 = v31;
  LOBYTE(v18) = v30;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 404LL),
    (unsigned int)v6,
    v18,
    v19,
    v31);
LABEL_23:
  v23 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v31 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v23, v22, 0LL, &v31);
  DxgkLogCodePointPacketForSession(0x44u, v31, v33, v21, v20, v24);
  v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL);
  if ( v25 && v11 )
    ADAPTER_RENDER::FlushScheduler(v25, 7LL, (unsigned int)v6);
  CVidSchSuspendResume::Resume(&v34);
  return (unsigned int)v20;
}
