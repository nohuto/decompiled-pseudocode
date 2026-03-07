char __fastcall DirectComposition::CDataSourceReaderMarshaler::EmitUpdateCommands(
        DirectComposition::CDataSourceReaderMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 28;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 125;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v4 + 12) = *((_QWORD *)this + 7);
      *(_QWORD *)(v4 + 20) = *((_QWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x20u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
