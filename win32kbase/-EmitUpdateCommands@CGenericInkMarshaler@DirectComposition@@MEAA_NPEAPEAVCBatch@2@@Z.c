char __fastcall DirectComposition::CGenericInkMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  unsigned int v5; // ebp
  unsigned int *v6; // rcx
  int v7; // eax
  unsigned int *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
    v5 = *((_DWORD *)this + 20) + 12;
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v5, (void **)&v9) )
      return v2;
    v6 = v9;
    *v9 = v5;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[1] = 149;
    v6[2] = *((_DWORD *)this + 8);
    memmove(v6 + 3, *((const void **)this + 7), *((_QWORD *)this + 10) * *((_QWORD *)this + 11));
    *((_DWORD *)this + 4) |= 0x20u;
  }
  if ( DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(this, a2) )
  {
    v7 = *((_DWORD *)this + 4);
    v9 = (unsigned int *)this;
    if ( (v7 & 0x80u) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_08fab9d56937b2df5c8c3c8f32b86a45___(
              (__int64)this,
              a2,
              (__int64)&v9) )
        return v2;
      *((_DWORD *)this + 4) |= 0x80u;
      v7 = *((_DWORD *)this + 4);
    }
    v9 = (unsigned int *)this;
    if ( (v7 & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___(
              (__int64)this,
              a2,
              (__int64 *)&v9) )
        return v2;
      *((_DWORD *)this + 4) |= 0x100u;
      v7 = *((_DWORD *)this + 4);
    }
    v9 = (unsigned int *)this;
    if ( (v7 & 0x200) != 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc6065791___(
           (__int64)this,
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      return 1;
    }
  }
  return v2;
}
