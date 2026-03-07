void __fastcall COcclusionContext::PopClip(COcclusionContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((unsigned int *)this + 360, &v4);
  v2 = *(_DWORD *)(v1 + 144);
  if ( v2 )
    *(_DWORD *)(v1 + 144) = v2 - 1;
  v3 = *(_DWORD *)(v1 + 176);
  if ( v3 )
    *(_DWORD *)(v1 + 176) = v3 - 1;
}
