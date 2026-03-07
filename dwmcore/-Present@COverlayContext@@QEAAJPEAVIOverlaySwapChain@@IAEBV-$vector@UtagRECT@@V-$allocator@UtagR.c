__int64 __fastcall COverlayContext::Present(
        CDirectFlipInfo **this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6)
{
  __int64 v10; // rcx
  int v11; // eax
  CDirectFlipInfo *v12; // r15
  int v13; // ebp
  COverlayContext *v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edi
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  CDirectFlipInfo *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  CDirectFlipInfo *v28; // rax
  int v29; // ebx
  char v30; // al
  int v31; // r8d
  __int64 v32; // [rsp+50h] [rbp-68h] BYREF
  int v33; // [rsp+58h] [rbp-60h]
  int v34; // [rsp+5Ch] [rbp-5Ch]
  int v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+64h] [rbp-54h]
  __int64 v37[2]; // [rsp+68h] [rbp-50h] BYREF

  v10 = (__int64)*this + *(int *)(*((_QWORD *)*this + 1) + 12LL) + 8;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12 = this[1396];
  v13 = v11;
  if ( v12 )
  {
    v25 = *this;
    v33 = *((_DWORD *)this + 2729);
    v34 = *((_DWORD *)this + 2730);
    v35 = *((_DWORD *)this + 2731);
    v36 = *((_DWORD *)this + 2732);
    *(_OWORD *)v37 = *(_OWORD *)((*(__int64 (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)v25 + 160LL))(v25) + 20);
    v26 = CDirectFlipInfo::Present(v12, a2, (__int64)v37);
    v19 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xA39u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    {
      v28 = this[1396];
      v29 = *((_DWORD *)v28 + 26);
      v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v28 + 2) + 304LL))(*((_QWORD *)v28 + 2));
      McTemplateU0nqxxxq_EventWriteTransfer(
        (unsigned int)this[1396],
        *((_QWORD *)this[1396] + 2),
        v31,
        v13,
        v19,
        *(_QWORD *)(*((_QWORD *)this[1396] + 2) + 40LL),
        *((_QWORD *)this[1396] + 3),
        v30,
        v29);
    }
    if ( (int)(v19 + 0x80000000) < 0 || v19 == -2003304309 )
    {
      *((_BYTE *)this + 11304) = 1;
    }
    else
    {
      COverlayContext::ClearDirectFlip((COverlayContext *)this);
      *((_BYTE *)this + 11310) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 11304) = 0;
    if ( a6 || COverlayContext::LegacyPresentRequired((COverlayContext *)this) )
    {
      v21 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, _QWORD, __int64, int))(*(_QWORD *)a2 + 192LL))(
              a2,
              1LL,
              a3,
              a4,
              a5);
      v19 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v21, 0xA1Eu, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqq_EventWriteTransfer(v23, v22, v24, v13, v19, a3);
      if ( v19 >= 0 )
      {
        *((_DWORD *)this + 2820) = 0;
        *((_BYTE *)this + 11296) = 1;
        *((_BYTE *)this + 11305) = 0;
      }
    }
    else
    {
      LODWORD(v32) = 0;
      v15 = COverlayContext::PresentMPO(v14, (__int64)&v32);
      v19 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v15, 0xA0Eu, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqqt_EventWriteTransfer(v17, v16, v18, v13, v19, v32, *((_BYTE *)this + 11024));
    }
  }
  return (unsigned int)v19;
}
