__int64 __fastcall UsbhBuildUxdPnpId(size_t a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT v5; // rcx
  _DWORD *v6; // rbx
  int PnpKey; // esi
  unsigned int v8; // edi
  void *Pool2; // rax
  void *v10; // rbx
  void *v11; // r14
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+80h] [rbp+18h] BYREF

  Size = a1;
  v6 = PdoExt(a2);
  Src = 0LL;
  LODWORD(Size) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x21u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  v13 = *(_OWORD *)(v6 + 651);
  PnpKey = UsbhGetPnpKey(v5, v4, &v13, &Src, &Size);
  if ( PnpKey >= 0 )
  {
    v8 = Size;
    if ( (_DWORD)Size )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)Size + 2LL, 1112885333LL);
      v10 = Src;
      v11 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Src, v8);
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = v8 + 2;
      }
      else
      {
        PnpKey = -1073741670;
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
  }
  return (unsigned int)PnpKey;
}
