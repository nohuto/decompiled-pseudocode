__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v3; // esi
  char *v5; // r14
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 358);
  v2 = 0;
  v3 = v9;
  if ( v1 )
  {
    *((_DWORD *)this + 358) = v1 - 1;
  }
  else
  {
    v5 = (char *)this + 1440;
    v6 = *((_DWORD *)this + 360);
    if ( v6 )
    {
      v3 = *(_DWORD *)(*((_QWORD *)this + 182) + 4LL * (unsigned int)(v6 - 1));
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x407u, 0LL);
    }
    if ( v3 )
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(v5, &v9);
      v7 = *((_DWORD *)this + 8);
      if ( v7 )
        *((_DWORD *)this + 8) = v7 - 1;
    }
    else
    {
      COcclusionContext::PopClip(this);
    }
  }
  return v2;
}
