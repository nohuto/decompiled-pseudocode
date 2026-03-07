__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 != *((_BYTE *)this + 193) )
  {
    v5 = *((_DWORD *)this + 54);
    v10 = 0;
    v6 = NtSetCompositionSurfaceIndependentFlipInfo(
           *(_QWORD *)(*(_QWORD *)this + 32LL),
           (char *)this + 24,
           1LL,
           a2,
           *((_DWORD *)this + 56),
           1 << v5,
           (char *)this + 220,
           &v10);
    if ( v6 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0xxqqqqq_EventWriteTransfer(
          *((_DWORD *)this + 55),
          v7,
          *(_DWORD *)(*(_QWORD *)this + 40LL),
          *((_QWORD *)this + 3),
          *((_DWORD *)this + 55),
          1,
          a2,
          *((_DWORD *)this + 56),
          v10);
      *((_BYTE *)this + 193) = a2;
      if ( a2 )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    }
    else
    {
      v3 = v6 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6 | 0x10000000, 0x3F6u, 0LL);
    }
  }
  return v3;
}
