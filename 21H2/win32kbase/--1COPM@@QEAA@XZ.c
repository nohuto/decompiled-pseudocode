/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x1C00C19EC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C00C1A40 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x1C00C1A74 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x1C00C1AB0 (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((char *)this + 24);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 16);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 8);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this);
}
