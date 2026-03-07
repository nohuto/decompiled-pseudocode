__int64 __fastcall VIDMM_GLOBAL::FlushHeapTransitions(VIDMM_GLOBAL *this)
{
  VIDMM_PROCESS *v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  VIDMM_PROCESS *v4; // rcx
  struct _KAPC_STATE v6; // [rsp+20h] [rbp-48h] BYREF
  VIDMM_PROCESS *v7; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v2 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v1 = *(VIDMM_PROCESS **)(v2 + 8);
  }
  v7 = v1;
  VIDMM_PROCESS::SafeAttach(v1, &v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v1 + 3) + 136LL))(*((_QWORD **)v1 + 3));
  VIDMM_PROCESS::SafeDetach(v4, &v6);
  return v3;
}
