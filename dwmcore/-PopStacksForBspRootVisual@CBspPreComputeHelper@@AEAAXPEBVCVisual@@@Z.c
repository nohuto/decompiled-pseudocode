void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  int *v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  CWatermarkStack<unsigned int,64,2,10>::Pop((int *)this + 80);
  CWatermarkStack<bool,64,2,10>::Pop((int *)(v2 + 288));
  CWatermarkStack<float,64,2,10>::Pop((_DWORD *)(v3 + 256));
  CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Pop((int *)(v4 + 224));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v5 + 192));
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop((int *)(v6 + 160));
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((int *)(v7 + 128));
  v9 = v8[24];
  if ( v9 )
    v8[24] = v9 - 1;
  v10 = v8[16];
  if ( v10 )
    v8[16] = v10 - 1;
  v11 = v8[8];
  if ( v11 )
    v8[8] = v11 - 1;
  if ( CWatermarkStack<CBspNode *,64,2,10>::Pop(v8, &v12) )
    ReleaseInterface<CBspNode>((__int64 *)&v12);
}
