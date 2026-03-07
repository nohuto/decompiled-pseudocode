char __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitSetDefaultAnimation(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // si
  int v4; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rax
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    v4 = 0;
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v8) )
    {
      v5 = v8;
      *v8 = 16;
      *(_QWORD *)(v5 + 1) = 0LL;
      v5[3] = 0;
      v5[1] = 121;
      v5[2] = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 18);
      if ( v6 )
        v4 = *(_DWORD *)(v6 + 32);
      v5[3] = v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
