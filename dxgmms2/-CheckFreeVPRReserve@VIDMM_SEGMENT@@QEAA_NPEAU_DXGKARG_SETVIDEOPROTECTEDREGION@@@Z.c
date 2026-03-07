char __fastcall VIDMM_SEGMENT::CheckFreeVPRReserve(VIDMM_SEGMENT *this, struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  char v2; // di
  VIDMM_GLOBAL *v6; // r14
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 57) )
    return 0;
  if ( *((_QWORD *)this + 52) + *((_QWORD *)this + 58) == *((_QWORD *)this + 53) )
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL) )
    {
      VIDMM_SEGMENT::FreeVPRReserve(this);
    }
    else
    {
      memset(v7, 0, 0x58uLL);
      LODWORD(v7[6]) = 0;
      v2 = 1;
      LODWORD(v7[0]) = 128;
      v7[5] = this;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
    }
    a2->NewSize = 0LL;
    a2->NewStartOffset = *((_QWORD *)this + 53);
  }
  return v2;
}
