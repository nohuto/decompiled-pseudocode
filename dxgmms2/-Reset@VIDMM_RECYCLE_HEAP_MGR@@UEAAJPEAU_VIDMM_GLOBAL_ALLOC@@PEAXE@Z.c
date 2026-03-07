__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        unsigned __int8 a4)
{
  VIDMM_PROCESS *v8; // rcx
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE v12; // [rsp+30h] [rbp-58h] BYREF
  VIDMM_PROCESS *v13; // [rsp+60h] [rbp-28h]

  v13 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v13, &v12);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v9 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, a4);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  VIDMM_PROCESS::SafeDetach(v8, &v12);
  return v9;
}
