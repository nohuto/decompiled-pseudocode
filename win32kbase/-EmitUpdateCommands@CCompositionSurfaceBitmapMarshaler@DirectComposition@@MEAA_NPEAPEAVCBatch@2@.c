char __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v3; // rcx
  char *v4; // rcx
  void *v6; // [rsp+40h] [rbp+18h] BYREF
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v6 = 0LL;
  v3 = (void *)*((_QWORD *)this + 7);
  if ( !v3 || (int)DxgkOpenDwmHandleForCompositionObjectReference(v3, &v6) < 0 )
    v6 = 0LL;
  v4 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v4 + 4) = 0LL;
  *(_QWORD *)(v4 + 20) = 0LL;
  *((_DWORD *)v4 + 1) = 119;
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
  *(_QWORD *)(v4 + 12) = v6;
  v4[20] = *((_BYTE *)this + 64);
  v4[21] = *((_BYTE *)this + 65);
  return 1;
}
