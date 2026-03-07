__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rbx
  VIDPN_MGR *v10; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNTARGET *v15; // rcx
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  struct _D3DDDI_RATIONAL *v17; // rcx
  UINT Numerator; // edx
  unsigned int v19; // eax
  __int64 v20; // rsi
  unsigned int v21; // r13d
  unsigned int v22; // ecx
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  struct DMMVIDPNTARGETMODESET *v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int8 v29; // [rsp+C0h] [rbp+40h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)a1 + 365);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, (__int64)v10);
    v24 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
    auto_rc<DMMVIDPN const>::reset(&v24, (__int64)ClientCommittedVidPnRef);
    v12 = v24;
    if ( v24 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 128LL);
      v26 = 4000 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v24 + 96), v5, *(_DWORD *)(v13 + 4000 * v5 + 1088));
      if ( Path && (v15 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12)) != 0LL )
      {
        v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v15);
        v27 = v16;
        if ( !*((_QWORD *)v16 + 18) )
          WdLogSingleEntry0(1LL);
        v17 = (struct _D3DDDI_RATIONAL *)*((_QWORD *)v16 + 18);
        v29 = 0;
        Numerator = v17[15].Numerator;
        v25 = v17[19];
        v19 = DmmMapVSyncFromRationalToInteger(
                &v25,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(Numerator << 29) >> 29),
                &v29);
        v20 = *((_QWORD *)a1 + 365);
        v21 = v19;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v20 + 16)) )
        {
          WdLogSingleEntry1(1LL, 6367LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"IsCoreResourceSharedOwner()",
            6367LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v20 + 96) )
        {
          WdLogSingleEntry1(1LL, 6368LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId < m_NumVidPnSources",
            6368LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v29 != 1 || (v22 = *(_DWORD *)(*(_QWORD *)(v20 + 128) + v26 + 1092), v22 != v21 + 1) )
          v22 = v21;
        *a3 = v22;
        *a4 = (int)(*(_DWORD *)(*((_QWORD *)v16 + 18) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v27, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v12);
        v4 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
