__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v18[16]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  char v21; // [rsp+70h] [rbp-10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(a1 + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v21 = 1;
    v19 = 8005;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerEnter, v12, 8005);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, v13, a4, a5, a6, a7, a8, a9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v15) = byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return v14;
}
