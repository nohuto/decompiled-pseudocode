__int64 __fastcall VfPowerVerifyIrpStackDownward(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  const void *v9; // rdi
  int v10; // r15d
  int v11; // esi
  __int64 v12; // rcx
  __int64 result; // rax
  PDRIVER_INITIALIZE PristineDriverInit; // rax

  v9 = (const void *)*a1;
  v10 = *(_DWORD *)(a5 + 96);
  v11 = *(_DWORD *)(*a1 + 48LL);
  if ( *(_DWORD *)(a1[30] + 56LL) == 3 )
    ViErrorReport1(0x211u, a7, v9);
  v12 = *(_QWORD *)(a2 + 8);
  result = (__int64)IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v12 + 288) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v12);
    ViErrorReport1(0x21Fu, PristineDriverInit, v9);
    result = a6;
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  if ( a3 && v11 < 0 )
  {
    if ( v11 == -1073741637 )
    {
      if ( v10 != -1073741637 )
        return ViErrorReport1(0x21Au, a7, v9);
    }
    else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
    {
      result = ViErrorReport1(0x219u, a7, v9);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
