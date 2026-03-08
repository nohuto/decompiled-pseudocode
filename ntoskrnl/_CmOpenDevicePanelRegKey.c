/*
 * XREFs of _CmOpenDevicePanelRegKey @ 0x140A63B24
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140823890 (_PnpDispatchDevicePanel.c)
 *     _CmCreateDevicePanelWorker @ 0x140A63028 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A63C90 (_CmOpenDevicePanelRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  _QWORD v16[11]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, sizeof(v16));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v16[3]) = a5;
  BYTE4(v16[3]) = a6;
  v16[2] = 96LL;
  v16[4] = a7;
  if ( v10 )
  {
    v11 = v10(a1, a2, 6LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_13;
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDevicePanelRegKeyWorker(a1, a2, LODWORD(v16[2]));
  v13 = v12;
  if ( v10 )
  {
    LODWORD(v16[0]) = v12;
    v14 = v10(a1, a2, 6LL);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
LABEL_13:
      v13 = v16[0];
    }
  }
LABEL_8:
  if ( v13 >= 0 && a8 )
    *a8 = v16[5];
  return (unsigned int)v13;
}
