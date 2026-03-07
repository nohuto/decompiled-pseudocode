__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 StopValue; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+40h] [rbp-21h]
  _BYTE v16[16]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v18; // [rsp+98h] [rbp+37h] BYREF
  int v19; // [rsp+A0h] [rbp+3Fh]
  char v20; // [rsp+A4h] [rbp+43h]

  v3 = 0;
  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x216u, 0LL);
    }
    else if ( *((_BYTE *)a3 + 8) )
    {
      memset_0(v17, 0, sizeof(v17));
      v18 = 0LL;
      v19 = 18;
      v20 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v16);
      v9 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v14 = v9;
      v15 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, (unsigned int *)&v14, (__int64)v17);
      v11 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v17, v10);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x21Cu, 0LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
    }
  }
  return v3;
}
