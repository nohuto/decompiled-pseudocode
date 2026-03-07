__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v9; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r9
  __int64 Length; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  __int64 v22; // r12
  __int64 v23; // rsi
  int CCDMonitorID; // eax
  unsigned int v25; // eax
  bool v26; // r12
  unsigned int *v27; // rsi
  bool v28; // r13
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rdi
  int IsMonitorVirtualModeDisabled; // eax
  char v33; // al
  char v34; // al
  unsigned __int8 *v35; // rcx
  unsigned int *v37; // r12
  __int64 v38; // [rsp+50h] [rbp-39h] BYREF
  void **v39; // [rsp+58h] [rbp-31h] BYREF
  __int128 v40; // [rsp+60h] [rbp-29h]
  void **v41; // [rsp+70h] [rbp-19h]
  void *Source2; // [rsp+78h] [rbp-11h]
  __int64 v43; // [rsp+80h] [rbp-9h]
  __int64 v44; // [rsp+88h] [rbp-1h]
  char v45; // [rsp+D8h] [rbp+4Fh] BYREF
  int v46; // [rsp+E0h] [rbp+57h]
  unsigned int *v47; // [rsp+E8h] [rbp+5Fh]

  v47 = a4;
  v46 = a3;
  v9 = a6;
  if ( !a2 || !a4 || (v13 = a5) == 0LL || !a6 || !a7 || (v14 = a8) == 0LL || (v15 = a9) == 0LL )
  {
    WdLogSingleEntry4(2LL, a2, a4, a5, a6);
    return 3221225485LL;
  }
  *a7 = 0;
  *v14 = 0;
  *a4 = -1;
  *v13 = D3DKMDT_VOT_UNINITIALIZED;
  *v9 = D3DKMDT_VOT_UNINITIALIZED;
  Length = a2->Length;
  v39 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  *v15 = 0;
  v41 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v40 = 0LL;
  Source2 = 0LL;
  v43 = 0LL;
  v44 = 256LL;
  DMM::AutoBuffer<unsigned short>::Initialize(&v39, Length + 2);
  if ( !Source2 )
  {
    WdLogSingleEntry2(2LL, ((unsigned __int64)a2->Length >> 1) + 2, this);
    LODWORD(v23) = -1073741801;
    goto LABEL_39;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_52:
    LODWORD(v23) = -1071775742;
    goto LABEL_39;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v17 = *((_QWORD *)this + 365);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_52;
  }
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v23) = -1071774923;
    goto LABEL_39;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v38, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
  v19 = *(_QWORD **)(v18 + 120);
  v46 = 0;
  v20 = (_QWORD *)v19[3];
  if ( v20 == v19 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1)) == 0LL )
  {
LABEL_19:
    LODWORD(v23) = -1073741275;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)NextTarget + 14);
    if ( *((_DWORD *)NextTarget + 23) )
      goto LABEL_18;
    if ( !v22 )
      goto LABEL_18;
    CCDMonitorID = MonitorGetCCDMonitorID(
                     *((DXGMONITOR ***)NextTarget + 14),
                     (unsigned int)v43 >> 1,
                     (unsigned __int16 *)Source2);
    LODWORD(v23) = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_18;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
    {
      if ( !v46 )
      {
        v25 = *((_DWORD *)NextTarget + 6);
        v26 = 1;
        v27 = v47;
        v28 = 1;
        v29 = a5;
        LOBYTE(v46) = 1;
        *v47 = v25;
        *v29 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
        *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
        v30 = *v27;
        if ( *v27 != -1 )
        {
          v31 = *((_QWORD *)this + 365);
          if ( v31 )
          {
            v45 = 0;
            IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled((__int64)this, v30, &v45);
            v23 = IsMonitorVirtualModeDisabled;
            if ( IsMonitorVirtualModeDisabled == -1073741632 )
            {
              v33 = 0;
              LODWORD(v23) = 0;
LABEL_30:
              LOBYTE(v46) = v33
                         || (v34 = *(_BYTE *)(v31 + 289), v26 = v34 == 0, v28 = *(_BYTE *)(v31 + 290) == 0, !v34)
                         || (*(_DWORD *)(v31 + 24) & 0x20) == 0;
            }
            else
            {
              if ( IsMonitorVirtualModeDisabled >= 0 )
              {
                v33 = v45;
                goto LABEL_30;
              }
              WdLogSingleEntry1(1LL, IsMonitorVirtualModeDisabled);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"Unexpected return code 0x%I64x from MonitorIsMonitorVirtualModeDisabled()",
                v23,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v23 >= 0 )
            {
              v35 = a9;
              *a7 = !v26;
              *a8 = !v28;
              *v35 = v46 ^ 1;
              goto LABEL_36;
            }
LABEL_47:
            v37 = v47;
            WdLogSingleEntry3(2LL, this, *v47, (int)v23);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Target 0x%I64x adapter 0x%I64x, returning 0x%I64x.",
              (__int64)this,
              *v37,
              (int)v23,
              0LL,
              0LL);
            goto LABEL_36;
          }
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
        }
        LODWORD(v23) = -1073741811;
        goto LABEL_47;
      }
      --v46;
    }
LABEL_18:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget);
    if ( !NextTarget )
      goto LABEL_19;
  }
  WdLogSingleEntry2(3LL, v22, CCDMonitorID);
LABEL_36:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
LABEL_39:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v39);
  return (unsigned int)v23;
}
