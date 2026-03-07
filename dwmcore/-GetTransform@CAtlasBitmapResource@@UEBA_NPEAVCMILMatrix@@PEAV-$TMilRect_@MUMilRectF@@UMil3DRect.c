char __fastcall CAtlasBitmapResource::GetTransform(__int64 a1, CMILMatrix *a2, __int64 a3)
{
  __int64 v4; // r8
  CAtlasTexture *v5; // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  CMILMatrix::SetToIdentity(a2);
  if ( a3 )
  {
    v5 = *(CAtlasTexture **)(v4 + 16);
    if ( v5 )
    {
      CAtlasTexture::GetSize(v5, (__int64)&v9);
      v6 = v9;
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      v7 = (float)v10;
      *(float *)(a3 + 8) = (float)v6;
      *(float *)(a3 + 12) = v7;
    }
    else
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
  }
  return 0;
}
