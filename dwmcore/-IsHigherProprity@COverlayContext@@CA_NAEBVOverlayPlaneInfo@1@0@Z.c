bool __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  bool v7; // r9
  char v8; // al
  char v9; // r8
  char v10; // al
  char v11; // al
  int v12; // r9d
  char v13; // r8
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  int *v16; // rax
  unsigned int ColorChannelDepth; // ebx
  __int64 v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, _BYTE *); // rcx
  int *v20; // rax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  _BYTE v26[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 136LL))(*((_QWORD *)a1 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 136LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  v7 = CDeviceManager::s_bXbox;
  if ( CDeviceManager::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((_DWORD *)a1 + 27));
    v8 = IsDXGIColorSpaceRec2020(*((_DWORD *)a2 + 27));
    if ( v9 )
    {
      if ( !v8 )
        return 1;
    }
    else if ( v8 )
    {
      return 0;
    }
  }
  v10 = *((_BYTE *)a2 + 176);
  if ( *((_BYTE *)a1 + 176) )
  {
    if ( !v10 )
      return 1;
  }
  else if ( v10 )
  {
    return 0;
  }
  if ( v7 )
  {
    IsDXGIColorSpaceStudio(*((_DWORD *)a1 + 27));
    v11 = IsDXGIColorSpaceStudio(*((_DWORD *)a2 + 27));
    if ( v13 )
    {
      if ( !v11 )
        return 1;
    }
    else if ( v11 )
    {
      return 0;
    }
    if ( *((_DWORD *)a1 + 27) )
    {
      if ( !v12 )
        return 1;
    }
    else if ( v12 )
    {
      return 0;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2));
    v15 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v14 + 8) + 8LL) + v14 + 8);
    v16 = (int *)(**v15)(v15, v26);
    ColorChannelDepth = GetColorChannelDepth(*v16);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
    v19 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v18 + 8) + 8LL) + v18 + 8);
    v20 = (int *)(**v19)(v19, v26);
    v21 = GetColorChannelDepth(*v20);
    if ( ColorChannelDepth > v21 )
      return 1;
    if ( ColorChannelDepth < v21 )
      return 0;
  }
  v22 = (*((_DWORD *)a1 + 19) - *((_DWORD *)a1 + 17)) * (*((_DWORD *)a1 + 20) - *((_DWORD *)a1 + 18));
  v23 = (*((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17)) * (*((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18));
  if ( v22 > v23 )
    return 1;
  if ( v22 >= v23 )
  {
    v24 = (*((_DWORD *)a1 + 11) - *((_DWORD *)a1 + 9)) * (*((_DWORD *)a1 + 12) - *((_DWORD *)a1 + 10));
    v25 = (*((_DWORD *)a2 + 11) - *((_DWORD *)a2 + 9)) * (*((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10));
    if ( v24 > v25 )
      return 1;
    if ( v24 >= v25 && *((_BYTE *)a1 + 180) )
      return *((_BYTE *)a2 + 180) == 0;
  }
  return 0;
}
