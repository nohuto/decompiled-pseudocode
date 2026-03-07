__int64 __fastcall RIMSetExtendedPointerDeviceProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v2; // eax
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // r10d
  unsigned int v6; // ebx

  v2 = ValidateProperty(a1, a2);
  v5 = 0;
  v6 = v2;
  if ( v2 >= 0 )
  {
    if ( *v3 )
    {
      switch ( *v3 )
      {
        case 1:
          *(_DWORD *)(v4 + 288) = v3[1];
          *(_DWORD *)(v4 + 292) = v3[2];
          *(_DWORD *)(v4 + 296) = v3[3];
          *(_DWORD *)(v4 + 300) = v3[4];
          break;
        case 2:
          *(_DWORD *)(v4 + 304) = v3[1];
          *(_DWORD *)(v4 + 308) = v3[2];
          break;
        case 3:
          LOBYTE(v5) = v3[1] != 0;
          *(_DWORD *)(v4 + 268) = v5;
          break;
        case 4:
          *(_OWORD *)(v4 + 312) = *(_OWORD *)(v3 + 1);
          break;
        case 5:
          *(_OWORD *)(v4 + 328) = *(_OWORD *)(v3 + 1);
          break;
        case 6:
          *(_OWORD *)(v4 + 344) = *(_OWORD *)(v3 + 1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 272) = v3[1];
      *(_DWORD *)(v4 + 276) = v3[2];
      *(_DWORD *)(v4 + 280) = v3[3];
      *(_DWORD *)(v4 + 284) = v3[4];
    }
    if ( *(_DWORD *)(v4 + 24) == 7 )
      CPTPProcessor::EnvironmentChanged(v4);
  }
  return v6;
}
