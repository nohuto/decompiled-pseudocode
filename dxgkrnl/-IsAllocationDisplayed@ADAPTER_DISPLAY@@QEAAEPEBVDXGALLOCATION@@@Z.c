char __fastcall ADAPTER_DISPLAY::IsAllocationDisplayed(ADAPTER_DISPLAY *this, const struct DXGALLOCATION *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r9d
  __int64 v6; // rsi
  char v7; // bl
  unsigned int v8; // r10d
  __int64 v9; // rbp
  const struct DXGALLOCATION **DisplayPlaneConfigHead; // rax
  int v11; // r10d
  unsigned int v12; // r11d
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = *((_DWORD *)this + 24);
  v5 = 0;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 16);
    v7 = 1;
    while ( 1 )
    {
      v8 = 0;
      v9 = 4000LL * v5;
      if ( *(_DWORD *)(v6 + v9 + 3760) )
        break;
LABEL_7:
      if ( ++v5 >= v4 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      DisplayPlaneConfigHead = (const struct DXGALLOCATION **)GetDisplayPlaneConfigHead(
                                                                (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v9 + v6 + 168LL * v8 + 1144),
                                                                &v15);
      if ( DisplayPlaneConfigHead )
      {
        if ( *DisplayPlaneConfigHead == a2 )
          break;
      }
      v8 = v11 + 1;
      if ( v8 >= v12 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    v7 = 0;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v7;
}
