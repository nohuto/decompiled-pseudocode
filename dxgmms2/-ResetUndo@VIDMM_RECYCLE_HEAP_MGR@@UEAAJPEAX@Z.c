__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ResetUndo(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  VIDMM_PROCESS *v4; // rcx
  unsigned int v5; // ebx
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE v8; // [rsp+30h] [rbp-48h] BYREF
  PRKPROCESS *v9; // [rsp+60h] [rbp-18h]

  v9 = (PRKPROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v9, &v8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = VIDMM_RECYCLE_MULTIRANGE::ResetUndo(a2);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  VIDMM_PROCESS::SafeDetach(v4, &v8);
  return v5;
}
