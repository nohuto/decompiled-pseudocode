bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::EmitData(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 60;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_OWORD *)(v3 + 20) = 0LL;
  *(_OWORD *)(v3 + 36) = 0LL;
  *(_QWORD *)(v3 + 52) = 0LL;
  *((_DWORD *)v3 + 1) = 466;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 28);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 29);
  v3[20] = *((_BYTE *)this + 144) & 1;
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 30);
  *((_DWORD *)v3 + 7) = *((_DWORD *)this + 31);
  v3[32] = (*((_BYTE *)this + 144) & 2) != 0;
  *((_DWORD *)v3 + 9) = *((_DWORD *)this + 32);
  *((_DWORD *)v3 + 10) = *((_DWORD *)this + 33);
  v3[44] = (*((_BYTE *)this + 144) & 8) != 0;
  result = 1;
  *((_DWORD *)v3 + 12) = *((_DWORD *)this + 34);
  *((_DWORD *)v3 + 13) = *((_DWORD *)this + 35);
  v3[56] = (*((_BYTE *)this + 144) & 4) != 0;
  v3[57] = (*((_BYTE *)this + 144) & 0x10) != 0;
  return result;
}
