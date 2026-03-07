__int64 __fastcall CConditionalExpression::ProcessSetDefaultAnimation(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rdi
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x3Cu)) != 0 )
  {
    v10 = Resource;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v10);
    v10 = *((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = Resource;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x8Au, 0LL);
  }
  return v4;
}
