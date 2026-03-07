char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // r12
  char *v8; // rcx
  void *v9; // rdx
  unsigned __int64 v10; // r15
  char *v11; // rcx
  unsigned int v12; // edx
  _DWORD *v13; // r8
  __int64 v14; // rax
  void *v15; // [rsp+60h] [rbp+18h] BYREF

  if ( !DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2) )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 || (*((_BYTE *)this + 120) & 0x20) == 0 )
    goto LABEL_4;
  v15 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
    return 0;
  v8 = (char *)v15;
  *(_DWORD *)v15 = 12;
  *(_QWORD *)(v8 + 4) = 0LL;
  *((_DWORD *)v8 + 1) = 23;
  *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)this + 4) |= 0x400u;
LABEL_4:
  if ( !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTracingCookie(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(this, a2) )
  {
    return 0;
  }
  v4 = *((_DWORD *)this + 29);
  v5 = 1;
  v6 = *((_QWORD *)this + 13);
  while ( *((_DWORD *)this + 28) < v4 )
  {
    v9 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v15 = v9;
    if ( (unsigned __int64)v9 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(
              (struct DirectComposition::CBatch ***)a2,
              (unsigned __int64 *)&v15) )
        break;
      v9 = v15;
    }
    v10 = v4 - *((_DWORD *)this + 28);
    if ( v10 >= ((unsigned __int64)v9 - 16) >> 2 )
      LODWORD(v10) = ((unsigned __int64)v9 - 16) >> 2;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v10 + 16), &v15);
    v11 = (char *)v15;
    v12 = 0;
    *(_DWORD *)v15 = 4 * v10 + 16;
    v13 = v11 + 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 21;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v11 + 3) = v10; v12 < (unsigned int)v10; ++v13 )
    {
      v14 = v12 + *((_DWORD *)this + 28);
      ++v12;
      *v13 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v14) + 32LL);
    }
    *((_DWORD *)this + 28) += v10;
  }
  if ( *((_DWORD *)this + 28) != v4 )
    return 0;
  return v5;
}
