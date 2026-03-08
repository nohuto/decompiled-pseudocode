/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x1C009FC8C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C009FCE0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C009FD14 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x1C009FD50 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C009FD8C (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x1C009FDC8 (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((char *)this + 24);
  COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>::~COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>((char *)this + 16);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 8);
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::~COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>(this);
}
