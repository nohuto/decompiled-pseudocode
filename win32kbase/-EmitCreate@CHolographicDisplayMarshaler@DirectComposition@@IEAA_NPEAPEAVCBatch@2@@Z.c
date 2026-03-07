char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitCreate(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 16) == 3 )
  {
    v5 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v5) )
    {
      v3 = (char *)v5;
      *(_DWORD *)v5 = 36;
      *(_OWORD *)(v3 + 4) = 0LL;
      *(_OWORD *)(v3 + 20) = 0LL;
      *((_DWORD *)v3 + 1) = 165;
      *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 88);
      *(_QWORD *)(v3 + 28) = *((_QWORD *)this + 10);
      *((_DWORD *)this + 16) |= 0x80000000;
    }
  }
  return 1;
}
