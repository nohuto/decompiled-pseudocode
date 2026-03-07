void __fastcall CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(
        CContentResourceState *this,
        struct CFlipPropertySet *a2,
        struct CFlipContentToken *a3)
{
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  __int64 v7; // rdi
  _OWORD *v8; // rdx
  _OWORD *v9; // rdx
  _OWORD *v10; // [rsp+30h] [rbp+10h] BYREF
  _OWORD *v11; // [rsp+38h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( a2 )
  {
    CFlipPropertySetBase::FindProperty<PresentParametersInfo>((__int64)a2, &v10);
    if ( v10 )
      *(_OWORD *)((char *)a3 + 120) = *v10;
  }
  v10 = 0LL;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(v5, &v10);
    v6 = v10;
    if ( v10 )
    {
      *(_OWORD *)((char *)a3 + 136) = *v10;
      *(_OWORD *)((char *)a3 + 152) = v6[1];
      *(_OWORD *)((char *)a3 + 168) = v6[2];
      *(_OWORD *)((char *)a3 + 184) = v6[3];
      *((_QWORD *)a3 + 25) = *((_QWORD *)v6 + 8);
      *((_DWORD *)a3 + 52) = *((_DWORD *)v6 + 18);
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        v7 = *((_QWORD *)this + 5);
        v10 = 0LL;
        v11 = 0LL;
        CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10Info>(v7, &v10);
        v8 = v10;
        if ( v10 )
        {
          *(_OWORD *)((char *)a3 + 216) = *v10;
          *((_QWORD *)a3 + 29) = *((_QWORD *)v8 + 2);
          *((_DWORD *)a3 + 60) = *((_DWORD *)v8 + 6);
        }
        else
        {
          CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10PlusInfo>(v7, &v11);
          v9 = v11;
          if ( v11 )
          {
            *(_OWORD *)((char *)a3 + 216) = *v11;
            *(_OWORD *)((char *)a3 + 232) = v9[1];
            *(_OWORD *)((char *)a3 + 248) = v9[2];
            *(_OWORD *)((char *)a3 + 264) = v9[3];
            *((_QWORD *)a3 + 35) = *((_QWORD *)v9 + 8);
          }
        }
      }
    }
  }
}
