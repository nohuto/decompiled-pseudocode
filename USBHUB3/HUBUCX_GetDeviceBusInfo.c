/*
 * XREFs of HUBUCX_GetDeviceBusInfo @ 0x1C0028E94
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *Pool2; // rdi
  int v7; // ebx
  _DWORD v9[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  v9[0] = 0;
  v10 = 16;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL, 1748191317LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, unsigned int *, _DWORD *))(a1 + 656))(
         a2,
         1LL,
         Pool2,
         &v10,
         v9);
  if ( v7 == -1073741789 )
  {
    v10 = v9[0];
    ExFreePoolWithTag(Pool2, 0x68334855u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 1748191317LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, unsigned int *, _DWORD *))(a1 + 656))(
           a2,
           1LL,
           Pool2,
           &v10,
           v9);
  }
  if ( v7 >= 0 )
  {
    a3[1] = *Pool2;
    a3[2] = Pool2[1];
    a3[3] = Pool2[2];
  }
  ExFreePoolWithTag(Pool2, 0x68334855u);
  return (unsigned int)v7;
}
