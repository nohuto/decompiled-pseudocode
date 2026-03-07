__int64 __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  unsigned int v8; // r14d
  struct DXGGLOBAL *Global; // rax
  bool v10; // cl
  int CachedData; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+58h] [rbp-8h]

  v16 = -1;
  v17 = 0LL;
  v8 = a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2176;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2176);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2176);
  Global = DXGGLOBAL::GetGlobal();
  v15 = 0;
  CachedData = QDC_CACHE::GetCachedData(*((QDC_CACHE **)Global + 187), v8, a3, a4, a5, &v15);
  if ( CachedData < 0 )
    CachedData = QueryDisplayConfigInternal(v10, v15, v8, a2, a3, a4, a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
  return (unsigned int)CachedData;
}
