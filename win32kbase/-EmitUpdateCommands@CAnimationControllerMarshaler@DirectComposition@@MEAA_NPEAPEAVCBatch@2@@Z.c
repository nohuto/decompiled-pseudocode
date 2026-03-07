char __fastcall DirectComposition::CAnimationControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  _DWORD *v5; // r14
  char *v7; // rcx
  void *v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (_DWORD *)((char *)this + 16);
    if ( (unsigned __int8)DirectComposition::CResourceMarshalerArrayBase::Marshal(
                            (char *)this + 72,
                            a2,
                            *((unsigned int *)this + 8),
                            (char *)this + 16,
                            128,
                            478,
                            479) )
    {
      if ( (*v5 & 0x100) != 0 )
      {
        v8 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
          return v4;
        v7 = (char *)v8;
        *(_DWORD *)v8 = 16;
        *(_QWORD *)(v7 + 4) = 0LL;
        *((_DWORD *)v7 + 3) = 0;
        *((_DWORD *)v7 + 1) = 480;
        *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v7 + 3) = *((_DWORD *)this + 24);
        *v5 &= ~0x100u;
      }
      if ( DirectComposition::CAnimationControllerMarshaler::EmitSetPlaybackRateCommand(this, a2) )
        return 1;
    }
  }
  return v4;
}
