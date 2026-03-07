char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // ebx
  bool v3; // zf
  char v5; // bp
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  _DWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v5 = 1;
  v10 = 0LL;
  if ( !v3 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x94uLL, (void **)&v10) )
    {
      v6 = v10;
      *v10 = 148;
      v7 = v6 + 1;
      memset(v6 + 1, 0, 0x90uLL);
      *v7 = 251;
      v7[1] = *((_DWORD *)this + 8);
      v8 = *((_QWORD *)this + 35);
      if ( v8 )
        v2 = *(_DWORD *)(v8 + 32);
      v7[2] = v2;
      memmove(v7 + 4, (char *)this + 152, *((unsigned int *)this + 37));
      v7[3] = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
