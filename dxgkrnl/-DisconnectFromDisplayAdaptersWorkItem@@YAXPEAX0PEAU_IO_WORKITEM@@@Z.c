void __fastcall DisconnectFromDisplayAdaptersWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-49h] BYREF
  __int128 v7; // [rsp+34h] [rbp-45h]
  __int64 v8; // [rsp+44h] [rbp-35h]
  int v9; // [rsp+4Ch] [rbp-2Dh]
  struct _DXGK_WIN32K_PARAM_DATA v10; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v11[10]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0x100000000LL;
  if ( (_DWORD)Context != -1 )
    v4 = (unsigned int)Context;
  memset(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  *(_OWORD *)&v10.NumPathArrayElements = 0LL;
  v11[8] = MEMORY[0xFFFFF78000000014];
  v10.SDCFlags = 2447;
  LODWORD(v11[3]) = 62;
  LOBYTE(v11[6]) = -1;
  *(_OWORD *)&v10.PathsArray = 0LL;
  DxgkRequestSyncDisplaySwitchCallout(&v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11, v4);
  v6 = 10;
  v8 = 0LL;
  LOBYTE(v5) = 1;
  v9 = 0;
  v7 = 0LL;
  SMgrGdiCallout(&v6, v4, v5, &IncreaseAdapterUniquenessCallback, 0LL, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
