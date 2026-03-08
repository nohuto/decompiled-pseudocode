/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F6A90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001DE4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001EC0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001F48 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F6B9C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

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
