void __fastcall VIDMM_PROCESS::SafeDetach(VIDMM_PROCESS *this, struct _KAPC_STATE *a2)
{
  KeUnstackDetachProcess(a2);
}
