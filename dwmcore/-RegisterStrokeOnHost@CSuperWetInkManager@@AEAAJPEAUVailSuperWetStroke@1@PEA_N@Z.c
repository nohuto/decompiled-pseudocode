__int64 __fastcall CSuperWetInkManager::RegisterStrokeOnHost(
        struct ID3D12Device *this,
        struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v10 = 0;
  v6 = CSuperWetInkManager::CheckHostComputeScribbleSupport(this, a2, &v10);
  if ( v6 < 0 )
  {
    v7 = 926LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v10 )
  {
    if ( !*((_BYTE *)a2 + 112) )
    {
      v6 = CSuperWetSource::SendMessageToHostForCreation(*(CSuperWetSource **)a2, *((_QWORD *)a2 + 3));
      if ( v6 < 0 )
      {
        v7 = 934LL;
        goto LABEL_3;
      }
      *((_BYTE *)a2 + 112) = 1;
    }
    *a3 = 1;
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
  }
  return 0LL;
}
