__int64 __fastcall SfmTokenArray::AddNotificationToken(SfmTokenArray *this, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // eax

  SGDGetSessionState(this);
  v4 = SfmTokenArray::EnsureTokenBufferSize(this, 1u);
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = v5 + 1;
    if ( (unsigned int)(v5 + 1) > *((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = v5 + 1;
    v6 = *(_QWORD *)this;
    a2->Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
    a2->TokenSize = 40;
    v7 = 40 * v5;
    *(_OWORD *)(v7 + v6) = *(_OWORD *)&a2->Model;
    *(_OWORD *)(v7 + v6 + 16) = *(_OWORD *)&a2->Token.Flip.FenceValue;
    *(_QWORD *)(v7 + v6 + 32) = a2->Token.Flip.dxgContext;
  }
  return (unsigned int)v4;
}
