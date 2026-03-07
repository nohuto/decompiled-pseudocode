char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateFlags(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_OWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 1) = 196;
      v4[12] = (*((_BYTE *)this + 332) & 2) != 0;
      v4[13] = (*((_BYTE *)this + 332) & 4) != 0;
      v4[14] = (*((_BYTE *)this + 332) & 8) != 0;
      v4[15] = *((_BYTE *)this + 332) & 1;
      v4[16] = (*((_BYTE *)this + 332) & 0x10) != 0;
      v4[17] = (*((_BYTE *)this + 332) & 0x20) != 0;
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 82);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
