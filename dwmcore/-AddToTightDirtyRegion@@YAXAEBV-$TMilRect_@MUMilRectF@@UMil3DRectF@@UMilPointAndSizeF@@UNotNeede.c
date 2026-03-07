void __fastcall AddToTightDirtyRegion(struct MilRectF *a1, char a2, CMILMatrix *a3, FastRegion::CRegion *a4)
{
  int *v6; // rax
  int v7; // r9d
  int v8; // r10d
  int v9; // edx
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-39h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v13[3]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD v14[2]; // [rsp+44h] [rbp-15h] BYREF
  _DWORD v15[3]; // [rsp+4Ch] [rbp-Dh] BYREF
  _DWORD v16[10]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v17[16]; // [rsp+80h] [rbp+27h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]

  v11 = 0LL;
  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a1);
  else
    v11 = *(_OWORD *)a1;
  if ( a2 && !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v11) )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v11);
  v6 = (int *)PixelAlign(v17, &v11);
  v12 = v13;
  v7 = v6[2];
  v8 = *v6;
  v9 = v6[3];
  if ( *v6 >= v7 || v6[1] >= v9 )
  {
    v13[0] = 0;
  }
  else
  {
    v14[0] = v6[1];
    v13[0] = 2;
    v13[1] = v8;
    v13[2] = v7;
    v14[1] = (unsigned int)v16 + 1 - 5 - (unsigned int)v14;
    v15[2] = v8;
    v16[0] = v7;
    v15[1] = (unsigned int)v16 + 1 - 5 - (unsigned int)v15 + 8;
    v15[0] = v9;
  }
  v10 = FastRegion::CRegion::Union(a4, (const struct CRegion *)&v12);
  if ( v10 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v12);
}
