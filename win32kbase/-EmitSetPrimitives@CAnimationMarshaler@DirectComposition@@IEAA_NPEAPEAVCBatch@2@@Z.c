char __fastcall DirectComposition::CAnimationMarshaler::EmitSetPrimitives(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 8) & 0x40) == 0 && *((_QWORD *)this + 11) && *((_QWORD *)this + 13) )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_OWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 1) = 9;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 12);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 11) + 32LL);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 26);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 24);
      *((_DWORD *)this + 8) |= 0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
