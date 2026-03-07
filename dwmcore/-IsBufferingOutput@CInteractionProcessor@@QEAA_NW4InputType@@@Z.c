char __fastcall CInteractionProcessor::IsBufferingOutput(CInteractionProcessor *a1, int a2)
{
  int v2; // ebx
  char v4; // bl
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = *((_DWORD *)a1 + 197);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v6);
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
  else
    v4 = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  return v4;
}
