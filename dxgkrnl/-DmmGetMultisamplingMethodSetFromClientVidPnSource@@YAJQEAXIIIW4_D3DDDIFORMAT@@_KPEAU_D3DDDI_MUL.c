__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r15
  unsigned __int64 *v10; // r14
  __int64 v12; // rbx
  VIDPN_MGR *v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdi
  DMMVIDPNTARGET *v17; // rax
  DMMVIDPNTARGET *v18; // rbp
  struct DMMVIDPNTARGETMODESET *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r13
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // r13d
  unsigned __int64 v27; // r8
  __int64 v28; // [rsp+50h] [rbp-58h]
  struct DMMVIDPNTARGETMODESET *v29; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+60h] [rbp-48h] BYREF
  DXGK_ENUM_PIVOT v31; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+18h]
  unsigned int v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v12 = *((_QWORD *)this + 365);
  if ( !v12 )
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
    return 3223191554LL;
  }
  v13 = *(VIDPN_MGR **)(v12 + 104);
  v28 = (__int64)v13;
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v30, (__int64)v13);
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v13,
                                               (__int64 *)&a8);
    v15 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v16 = (unsigned __int64)a8;
      v17 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(a8[38], v8);
      v18 = v17;
      if ( v17 )
      {
        v19 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v17);
        v29 = v19;
        v20 = *((_QWORD *)v19 + 18);
        if ( v20 )
        {
          v21 = a5;
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v19,
                        v32,
                        v33,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v20 + 72));
          if ( BestMatch )
          {
            v23 = DMMVIDPNSOURCEMODESET::PinMode(v19, *((_DWORD *)BestMatch + 6));
            v15 = v23;
            if ( v23 >= 0 )
            {
              v31.VidPnTargetId = -1;
              v31.VidPnSourceId = v8;
              LOBYTE(v24) = 1;
              v25 = VIDPN_MGR::FormalizeVidPnChange(v28, (D3DKMDT_HVIDPN)(v16 & -(__int64)(v16 != -88LL)), 3, v24, &v31);
              v26 = v25;
              if ( v25 >= 0 )
              {
                v27 = *((_QWORD *)v18 + 21) >> 3;
                if ( v10 )
                  *v10 = 8 * v27;
                if ( a6 >= v27 )
                {
                  if ( a7 )
                    memmove(a7, *((const void **)v18 + 20), 8 * v27);
                  v15 = 0;
                }
                else
                {
                  WdLogSingleEntry2(7LL, a6, v27);
                  if ( !v10 )
                    WdLogSingleEntry0(1LL);
                  v15 = -1073741789;
                }
              }
              else
              {
                if ( v25 == -1071774970 )
                  WdLogSingleEntry3(3LL, v16, v8, this);
                else
                  WdLogSingleEntry5(2LL, v32, v33, a5, v8, v25);
                v15 = v26;
              }
            }
            else
            {
              WdLogSingleEntry5(2LL, v8, v32, v33, v21, v23);
            }
          }
          else
          {
            WdLogSingleEntry5(7LL, v32, v33, v21, v8, this);
            v15 = -1071774970;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v18);
          v15 = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v29, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        v15 = -1071774972;
      }
    }
    else
    {
      WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v30[0] + 40LL));
    return v15;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
}
