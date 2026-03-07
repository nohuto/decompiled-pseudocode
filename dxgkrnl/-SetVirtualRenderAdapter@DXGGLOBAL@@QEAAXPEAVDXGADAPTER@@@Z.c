void __fastcall DXGGLOBAL::SetVirtualRenderAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  volatile int v2; // eax
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER *v5; // rsi
  struct _LUID *v6; // rdx
  struct DXGADAPTER *v7; // rcx
  unsigned __int64 v8; // [rsp+28h] [rbp-39h] BYREF
  struct _DXGK_WIN32K_PARAM_DATA v9; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v10[10]; // [rsp+58h] [rbp-9h] BYREF

  v2 = g_VgpuReplaceWarp;
  *((_QWORD *)this + 120) = a2;
  if ( v2 )
  {
    v4 = (struct DXGADAPTER **)((char *)this + 968);
    if ( a2 )
    {
      v7 = *v4;
      if ( *v4 && (*((_DWORD *)v7 + 109) & 0x10) != 0 )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v7 + 366), a2, v4);
      else
        *v4 = a2;
    }
    else
    {
      v5 = *v4;
      *v4 = (struct DXGADAPTER *)*((_QWORD *)this + 119);
      if ( *((_BYTE *)v5 + 209) )
      {
        memset(v10, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v10[1]);
        v8 = 0LL;
        *(_OWORD *)&v9.NumPathArrayElements = 0LL;
        v10[8] = MEMORY[0xFFFFF78000000014];
        v9.SDCFlags = 2447;
        LODWORD(v10[3]) = 62;
        LOBYTE(v10[6]) = -1;
        *(_OWORD *)&v9.PathsArray = 0LL;
        DXGADAPTER::IsAdapterSessionized(v5, v6, 0LL, &v8);
        DxgkRequestAsyncDisplaySwitchCallout(&v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v10, v8);
      }
    }
    if ( *v4 )
      *((_QWORD *)this + 122) = *(_QWORD *)((char *)*v4 + 404);
  }
}
