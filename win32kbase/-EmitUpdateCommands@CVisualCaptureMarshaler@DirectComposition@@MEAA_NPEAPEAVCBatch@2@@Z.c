char __fastcall DirectComposition::CVisualCaptureMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // ebx
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v12 = 0LL;
  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x28uLL, &v12) )
  {
    return 0;
  }
  v5 = (char *)v12;
  *(_DWORD *)v12 = 40;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 1) = 476;
  *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 32);
  else
    v7 = 0;
  *((_DWORD *)v5 + 3) = v7;
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 32);
  else
    v9 = 0;
  *((_DWORD *)v5 + 4) = v9;
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
    v2 = *(_DWORD *)(v10 + 32);
  *((_DWORD *)v5 + 5) = v2;
  *((_DWORD *)v5 + 6) = *((_DWORD *)this + 24);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 25);
  *((_DWORD *)v5 + 8) = *((_DWORD *)this + 26);
  v5[36] = *((_BYTE *)this + 108);
  return 1;
}
