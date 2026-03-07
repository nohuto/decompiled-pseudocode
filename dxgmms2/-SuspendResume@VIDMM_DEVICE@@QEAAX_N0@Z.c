void __fastcall VIDMM_DEVICE::SuspendResume(VIDMM_GLOBAL **this, char a2, char a3)
{
  VIDMM_GLOBAL *v6; // rcx
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( a2 )
  {
    memset(v7, 0, 0x58uLL);
    v6 = *this;
    LODWORD(v7[0]) = 123;
    v7[5] = this;
    LOBYTE(v7[6]) = a2;
    BYTE1(v7[6]) = a3;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
  }
  else
  {
    VIDMM_DEVICE::EnsureSchedulable((VIDMM_DEVICE *)this, 0);
  }
}
