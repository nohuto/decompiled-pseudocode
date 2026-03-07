__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *((_DWORD *)this + 54);
  v10 = 0;
  v4 = 0;
  v5 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         1LL,
         *((_BYTE *)this + 193) != 0,
         *((_DWORD *)this + 56),
         1 << v3,
         &v11,
         &v10);
  if ( v5 >= 0 )
  {
    v8 = (_DWORD *)((char *)this + 220);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0xxqqqqq_EventWriteTransfer(
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        v6,
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((_QWORD *)this + 3),
        *v8,
        1,
        *((_BYTE *)this + 193) != 0,
        *((_DWORD *)this + 56),
        v10);
    *v8 = v11;
    *((_BYTE *)this + 192) = 1;
  }
  else
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5 | 0x10000000, 0x3D0u, 0LL);
  }
  return v4;
}
