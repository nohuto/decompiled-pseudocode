struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int Device; // eax
  char *v7; // rbx
  unsigned int v8; // [rsp+78h] [rbp+10h] BYREF

  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  if ( !RenderAdapterInfo )
  {
    Device = DXGADAPTER::CreateHandle(*((DXGADAPTER **)a2 + 2), this, &v8);
    if ( Device < 0 )
    {
LABEL_3:
      WdLogSingleEntry1(3LL, Device);
      return 0LL;
    }
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  }
  v7 = (char *)RenderAdapterInfo + 72;
  if ( !*((_QWORD *)RenderAdapterInfo + 9) )
  {
    Device = ADAPTER_RENDER::CreateDevice(
               *((DXGADAPTER ***)RenderAdapterInfo + 10),
               (DXGDEVICE **)RenderAdapterInfo + 9,
               0,
               3,
               0LL,
               0,
               0,
               0,
               0LL,
               0LL,
               1);
    if ( Device < 0 )
      goto LABEL_3;
  }
  return *(struct DXGDEVICE **)v7;
}
