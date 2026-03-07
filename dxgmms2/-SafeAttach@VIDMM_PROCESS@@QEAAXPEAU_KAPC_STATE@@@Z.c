void __fastcall VIDMM_PROCESS::SafeAttach(PRKPROCESS *this, struct _KAPC_STATE *a2)
{
  KeStackAttachProcess(*this, a2);
}
