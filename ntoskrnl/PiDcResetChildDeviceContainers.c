/*
 * XREFs of PiDcResetChildDeviceContainers @ 0x140958510
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _CmSetDeviceRegProp @ 0x140684F2C (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _CmEnumDevicesInContainerWithCallback @ 0x140A61054 (_CmEnumDevicesInContainerWithCallback.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A619AC (_CmRemoveDeviceFromContainer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainers(__int64 a1, const wchar_t *a2)
{
  int v3; // edi
  PVOID *v4; // rbx
  int DeviceRegProp; // eax
  int v6; // eax
  PVOID *v7; // rax
  int v9; // [rsp+40h] [rbp-49h] BYREF
  int v10; // [rsp+44h] [rbp-45h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-41h] BYREF
  PVOID P[3]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v13[80]; // [rsp+70h] [rbp-19h] BYREF

  v11[0] = a1;
  v11[1] = a2;
  P[1] = P;
  v3 = 0;
  v10 = 0;
  v9 = 0;
  P[0] = P;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    CmEnumDevicesInContainerWithCallback(
      PiPnpRtlCtx,
      (_DWORD)a2,
      0,
      (unsigned int)PiDcResetChildDeviceContainerCallback,
      (__int64)v11);
    v4 = (PVOID *)P[0];
    if ( P[0] == P )
      goto LABEL_14;
    do
    {
      v9 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)(v4 + 2),
                        0LL,
                        37,
                        (__int64)&v10,
                        (__int64)v13,
                        (__int64)&v9,
                        0);
      v3 = DeviceRegProp;
      if ( DeviceRegProp == -1073741275 || v10 != 1 || v9 != 78 )
        goto LABEL_11;
      if ( DeviceRegProp < 0 )
        break;
      v3 = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, a2, v13, v4 + 2);
      if ( v3 < 0 )
        break;
      v6 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)(v4 + 2), 0LL, 0x25u, 1u, 0LL, 0, 0);
      v3 = v6;
      if ( v6 == -1073741275 )
      {
LABEL_11:
        v3 = 0;
      }
      else if ( v6 < 0 )
      {
        break;
      }
      v4 = (PVOID *)*v4;
    }
    while ( v4 != P );
  }
  while ( 1 )
  {
    v4 = (PVOID *)P[0];
LABEL_14:
    if ( v4 == P )
      break;
    if ( v4[1] != P || (v7 = (PVOID *)*v4, *((PVOID **)*v4 + 1) != v4) )
      __fastfail(3u);
    P[0] = *v4;
    v7[1] = P;
    ExFreePoolWithTag(v4, 0x47706E50u);
  }
  return (unsigned int)v3;
}
