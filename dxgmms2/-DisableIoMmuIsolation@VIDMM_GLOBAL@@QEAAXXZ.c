void __fastcall VIDMM_GLOBAL::DisableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v3[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v2,
      (VIDMM_GLOBAL *)((char *)this + 3832));
    *((_BYTE *)this + 40181) = 0;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v2);
    *((_BYTE *)this + 40179) = 0;
  }
  else
  {
    memset(&v3[1], 0, 0x54uLL);
    v3[0] = 131;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3, 1);
  }
}
