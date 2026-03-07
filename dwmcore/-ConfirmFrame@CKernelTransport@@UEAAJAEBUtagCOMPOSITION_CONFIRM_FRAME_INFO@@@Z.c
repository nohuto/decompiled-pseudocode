__int64 __fastcall CKernelTransport::ConfirmFrame(
        CKernelTransport *this,
        const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  v3 = NtDCompositionConfirmFrame(*((_QWORD *)this + 1), a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0x93u, 0LL);
  }
  return v2;
}
