__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  unsigned int v11; // edx
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbx
  int v20; // ecx
  D3DDDIFORMAT Format; // eax
  DXGCONTEXT *v22; // rbx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rcx
  struct _DXGKARG_DESCRIBEALLOCATION v26; // [rsp+50h] [rbp-99h] BYREF
  __int128 v27; // [rsp+80h] [rbp-69h]
  struct tagRECT v28; // [rsp+D0h] [rbp-19h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  v28 = 0LL;
  if ( v6 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
      return 3223191814LL;
    }
    v13 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
                       (v11 >> 6) & 0xF);
    v26.Rotation = -1;
    v14 = *((_QWORD *)a3 + 6);
    memset(&v26.Width, 0, 32);
    v26.Flags.Value = 1;
    v27 = v13;
    v15 = *(void **)(v14 + 16);
    v16 = *((_QWORD *)this + 2);
    v26.hAllocation = v15;
    v18 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 2928LL),
            &v26,
            v17);
    if ( v18 < 0 )
    {
      v19 = v18;
      WdLogSingleEntry5(
        2LL,
        v18,
        this,
        *((unsigned int *)a3 + 4),
        a3,
        (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
        v19,
        (__int64)this,
        *((unsigned int *)a3 + 4),
        (__int64)a3,
        (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v26.Width != (_QWORD)v27 )
      goto LABEL_19;
    v20 = 22;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v26.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v26.Format;
    if ( DWORD2(v27) != 21 )
      v20 = DWORD2(v27);
    if ( Format != v20 )
    {
LABEL_19:
      WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
      return 3223191557LL;
    }
    v28.right = v26.Width;
    v28.bottom = v26.Height;
  }
  v22 = this;
  v23 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2920LL),
          this,
          a4,
          a2,
          a5,
          a6,
          &v28);
  if ( v23 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v24 = *((_QWORD *)v22 + 2);
    v25 = *(_QWORD *)(v24 + 1880);
    if ( v25 == *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) )
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v25 + 2920), a4);
    DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)v22 + 2), a4, a3, 0, 1u);
  }
  return (unsigned int)v23;
}
