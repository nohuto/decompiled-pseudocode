__int64 __fastcall DmmInitializeAdapter(PERESOURCE *this)
{
  PERESOURCE v2; // rax
  __int64 *Flink; // r14
  __int64 v4; // rbx
  bool v5; // zf
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 i; // rcx
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v14; // ecx
  unsigned int v15; // ebx
  struct _LUID *v16; // rdx
  __int64 v17; // r11
  struct DMMVIDPN *v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  struct DMMVIDPNTARGETMODESET *v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v22[2]; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h]

  if ( !this )
    WdLogSingleEntry0(1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v2 = this[365];
  if ( !v2 )
    return 0LL;
  Flink = (__int64 *)v2[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, (__int64)v2[1].SystemResourcesList.Flink);
    v4 = 0LL;
    v5 = (*((_DWORD *)this + 109) & 0x8000) == 0;
    v19 = 0LL;
    *(_QWORD *)v22 = 0LL;
    v23 = 0;
    if ( !v5 )
    {
      v18 = 0LL;
      v6 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)Flink, DXGK_RFVR_FIRMWARE, v22, 0xCu, &v18);
      if ( v6 >= 0 )
      {
        auto_rc<DMMVIDPN>::reset(&v19, (__int64)v18);
        v4 = v19;
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v6);
      }
      if ( v4 )
      {
        if ( v4 == -96 )
          WdLogSingleEntry0(1LL);
        v8 = *(_QWORD *)(v4 + 136);
        if ( v8 == 1 )
        {
          v9 = *(_QWORD *)(v4 + 120);
          if ( v9 == v4 + 120 )
            v10 = 0LL;
          else
            v10 = v9 - 8;
          v11 = *(_QWORD *)(v10 + 96);
          if ( !v11 )
            WdLogSingleEntry0(1LL);
          v20 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v11);
          v12 = *((_QWORD *)v20 + 18);
          if ( !v12 )
            WdLogSingleEntry0(1LL);
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v12,
                 (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v22[1],
                 v22[0]) )
          {
            for ( i = 0LL; i < 2; ++i )
              *(_BYTE *)(*(_QWORD *)(v11 + 96) + i + 416) = 1;
            v14 = v22[0];
            *(_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v12 + 132) = v22[1];
            *(_DWORD *)(v12 + 136) = v14;
            _InterlockedAdd((volatile signed __int32 *)(v4 + 32), 1u);
            auto_rc<DMMVIDPN>::reset(Flink + 40, v19);
            v15 = *(_DWORD *)(v11 + 24);
            v18 = 0LL;
            DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)this, v16, 0LL, (unsigned __int64 *)&v18);
            DxgkLogCodePointPacketForSession(0x59u, (unsigned __int64)v18, v15, v23, 1, v17);
          }
          else
          {
            WdLogSingleEntry3(1LL, (unsigned int)v22[1], v22[0], this);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v20, 0LL);
        }
        else
        {
          WdLogSingleEntry2(1LL, v8, this);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v19, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
    return 0LL;
  }
  WdLogSingleEntry1(2LL, this);
  return 3223192373LL;
}
