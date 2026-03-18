/*
 * XREFs of VfPowerVerifyIrpStackDownward @ 0x140AA69F0
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     VfGetPristineDriverInit @ 0x140A8C8EC (VfGetPristineDriverInit.c)
 */

__int64 __fastcall VfPowerVerifyIrpStackDownward(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  const void *v8; // rdi
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rcx
  __int64 result; // rax
  PDRIVER_INITIALIZE PristineDriverInit; // rax

  v8 = (const void *)*a1;
  v10 = *(_DWORD *)(*a1 + 48LL);
  v11 = *(_DWORD *)(a5 + 96);
  if ( *(_DWORD *)(a1[30] + 56LL) == 3 )
    ViErrorReport1(0x211u, a7, v8);
  v12 = *(_QWORD *)(a2 + 8);
  result = (__int64)IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v12 + 288) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v12);
    ViErrorReport1(0x21Fu, PristineDriverInit, v8);
    result = a6;
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  if ( a3 && v10 < 0 )
  {
    if ( v10 == -1073741637 )
    {
      if ( v11 != -1073741637 )
        return ViErrorReport1(0x21Au, a7, v8);
    }
    else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
    {
      result = ViErrorReport1(0x219u, a7, v8);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
