__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  CExpressionValue *v12; // rax
  float *v13; // rbx
  wchar_t *AnimationLoggingManagerNoRef; // rax
  unsigned int v16[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+8h] BYREF

  *a4 = 0.0;
  v8 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, wchar_t *, __int64 *))*this
        + 32))(
         this,
         a2,
         a3,
         &v18);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1DAu, 0LL);
  }
  else
  {
    v11 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
    if ( (unsigned int)v11 < *((_DWORD *)a2 + 12) )
    {
      v13 = (float *)(*((_QWORD *)a2 + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      v13 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    --*((_DWORD *)a2 + 4);
    *a4 = *v13;
    if ( *((int *)this[41] + 1) < 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v16);
      AnimationLoggingManagerNoRef = (wchar_t *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        90,
        v16[0],
        v16[1],
        this[25],
        (__int64)v13);
    }
  }
  return v10;
}
