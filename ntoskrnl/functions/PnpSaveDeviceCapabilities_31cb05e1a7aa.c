__int64 __fastcall PnpSaveDeviceCapabilities(__int64 a1, _DWORD *a2, char a3, __int64 a4)
{
  int v6; // esi
  int v7; // r14d
  int v8; // r8d
  bool v9; // cf
  unsigned int *v10; // rax
  bool v11; // cf
  unsigned int *v12; // rax
  __int64 v14; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+50h] BYREF

  v16 = 0;
  Handle = 0LL;
  v6 = a3 != 0 ? 0x20000 : 0;
  v7 = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 983103LL, a4);
  if ( v7 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 720);
      if ( !v14 || (*(_BYTE *)(v14 + 16) & 4) == 0 )
        a2[1] &= ~0x200u;
    }
    v8 = (int)Handle;
    *(_DWORD *)(a1 + 560) = a2[1];
    v16 = (a2[1] & 0x3FC | (a2[1] >> 13) & 8 | ((a2[1] & 0xC000 | (a2[1] >> 4) & 0x10000u) >> 4)) >> 2;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), v8, 16, 4, (__int64)&v16, 4, v6);
    v9 = a2[3] != -1;
    v16 = a2[3];
    v10 = &v16;
    if ( v16 == -1 )
      v10 = 0LL;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 17, 4, (__int64)v10, v9 ? 4 : 0, v6);
    v11 = a2[2] != -1;
    v16 = a2[2];
    v12 = &v16;
    if ( v16 == -1 )
      v12 = 0LL;
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 29, 4, (__int64)v12, v11 ? 4 : 0, v6);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
