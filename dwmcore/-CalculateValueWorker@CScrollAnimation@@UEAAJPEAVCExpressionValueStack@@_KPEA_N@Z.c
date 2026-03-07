__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  char *v4; // r14
  __int64 v5; // rsi
  int v6; // eax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct CInteractionTracker *InteractionTracker; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  float v20; // [rsp+60h] [rbp+8h] BYREF
  float v21; // [rsp+68h] [rbp+10h] BYREF

  *a4 = 0;
  v4 = (char *)this + 400;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 106) - 1;
  *((_QWORD *)this + 47) = a2;
  *((_QWORD *)this + 48) = a3;
  v20 = 0.0;
  if ( v6 <= 0 )
  {
LABEL_4:
    *((_DWORD *)v4 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v4, 4u);
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    v15 = CScrollAnimation::CalculateValueForState(this, a2, a3, *((_DWORD *)InteractionTracker + 44), &v20);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x102u, 0LL);
    }
    else
    {
      v17 = CExpressionValueStack::PushConstant(a2, v20);
      v13 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x10Eu, 0LL);
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = CScrollAnimation::CalculateValueForState(this, a2, a3, *(_DWORD *)(*(_QWORD *)v4 + 4 * v5), &v21);
      v13 = v11;
      if ( v11 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (int)v5 >= *((_DWORD *)this + 106) - 1 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xF9u, 0LL);
  }
  *a4 = *((_BYTE *)this + 368) & 1;
  return v13;
}
