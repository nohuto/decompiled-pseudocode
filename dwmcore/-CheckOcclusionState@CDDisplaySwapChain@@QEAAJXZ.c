__int64 __fastcall CDDisplaySwapChain::CheckOcclusionState(CDDisplaySwapChain *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 46) + 48LL))(*((_QWORD *)this + 46), &v5);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v3, 0x278u, 0LL);
  }
  else if ( v5 )
  {
    v3 = 142213121;
    *((_BYTE *)this + 448) = 0;
  }
  return (unsigned int)v3;
}
