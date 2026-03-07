void __fastcall VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx

  v4 = a2;
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)this, &EventPagingEndPreparation, a3, *((_QWORD *)this + a2 + 143));
  if ( *((_DWORD *)this + v4 + 414) != *((_DWORD *)this + v4 + 478)
    || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 0, 0LL, 0LL, 0, 0);
  }
  v5 = *((_QWORD *)this + v4 + 143);
  if ( v5 )
    *(_DWORD *)(v5 + 172) = *(_DWORD *)(v5 + 168);
}
