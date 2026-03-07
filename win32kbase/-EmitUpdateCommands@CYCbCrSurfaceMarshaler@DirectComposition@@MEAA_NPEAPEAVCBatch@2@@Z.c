char __fastcall DirectComposition::CYCbCrSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // ebx
  char *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v9) )
    return 0;
  v4 = (char *)v9;
  *(_DWORD *)v9 = 24;
  *(_OWORD *)(v4 + 4) = 0LL;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 1) = 442;
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 32);
  else
    v6 = 0;
  *((_DWORD *)v4 + 3) = v6;
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v2 = *(_DWORD *)(v7 + 32);
  *((_DWORD *)v4 + 4) = v2;
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 18);
  return 1;
}
