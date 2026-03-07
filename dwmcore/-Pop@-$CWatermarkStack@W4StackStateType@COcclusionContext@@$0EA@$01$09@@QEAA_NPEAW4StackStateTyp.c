char __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(unsigned int *a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  v3 = *a1;
  if ( !v3 )
    return 0;
  v4 = v3 - 1;
  *a1 = v4;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v4);
  return 1;
}
