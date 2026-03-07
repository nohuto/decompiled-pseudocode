__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  unsigned int v3; // r9d
  struct CResource *v5; // rdx
  int v7; // eax
  char v8; // cl
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // ecx

  v3 = *((_DWORD *)a3 + 3);
  v5 = 0LL;
  if ( v3 )
  {
    LOBYTE(v7) = HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3);
    if ( v7 )
      v5 = *(struct CResource **)(*((_DWORD *)a2 + 6) * v3 + *((_QWORD *)a2 + 5) + 8LL);
    else
      v5 = 0LL;
  }
  *((_DWORD *)this + 52) = v3;
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 2);
  v8 = *((_BYTE *)this + 232) & 0xFB | (*((_BYTE *)a3 + 40) != 0 ? 4 : 0);
  *((_BYTE *)this + 232) = v8;
  if ( (v8 & 4) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(this) )
  {
    v9 = CBaseExpression::SetTarget(
           (__int64)this,
           *((_DWORD *)a2 + 12),
           v5,
           *((_DWORD *)a3 + 4),
           *((_DWORD *)a3 + 9),
           *((unsigned __int16 *)a3 + 17),
           *((_BYTE *)a3 + 32),
           *((_QWORD *)a3 + 3));
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x62u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x58u, 0LL);
  }
  return v11;
}
