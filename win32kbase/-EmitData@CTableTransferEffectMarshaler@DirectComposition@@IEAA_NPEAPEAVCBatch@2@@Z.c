bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitData(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_OWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 1) = 474;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  v3[12] = *((_BYTE *)this + 176) & 1;
  v3[13] = (*((_BYTE *)this + 176) & 2) != 0;
  result = 1;
  v3[14] = (*((_BYTE *)this + 176) & 4) != 0;
  v3[15] = (*((_BYTE *)this + 176) & 8) != 0;
  v3[16] = (*((_BYTE *)this + 176) & 0x10) != 0;
  return result;
}
