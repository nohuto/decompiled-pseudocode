char __fastcall DirectComposition::CInteractionMarshaler::EmitInputSink(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  CompositionInputObject *v3; // rcx
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
  {
    v6 = 0LL;
    v3 = (CompositionInputObject *)*((_QWORD *)this + 33);
    if ( !v3 || (int)CompositionInputObject::OpenDwmHandle(v3, &v6) < 0 )
      v6 = 0LL;
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 192;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v4 + 12) = v6;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
