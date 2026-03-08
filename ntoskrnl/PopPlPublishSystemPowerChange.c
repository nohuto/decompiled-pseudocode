/*
 * XREFs of PopPlPublishSystemPowerChange @ 0x14059F158
 * Callers:
 *     PopPlNotifyDeviceDState @ 0x1402B9D3C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1402EFC60 (PopPlNotifyDeviceFState.c)
 *     PopPlPublishInitialPowerDraw @ 0x14059EF80 (PopPlPublishInitialPowerDraw.c)
 *     PopPlUnregisterDevice @ 0x14059F9D0 (PopPlUnregisterDevice.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPlPublishSystemPowerChange(unsigned __int16 *a1, int a2)
{
  int v4; // eax
  __int64 result; // rax
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+44h] [rbp-35h] BYREF
  int v8; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  _DWORD v15[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v15[1] = 0;
      v6 = 1;
      v10 = &v6;
      v11 = 2LL;
      v12 = v15;
      v14 = *((_QWORD *)a1 + 1);
      v15[0] = *a1;
      v16 = &v7;
      v4 = *((_DWORD *)a1 + 7);
      v13 = 2LL;
      v8 = a2 + v4;
      v18 = &v8;
      v7 = a2;
      v17 = 4LL;
      v19 = 4LL;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&byte_1400322A0, 0LL, 1u, 0, 0, 7u, &v9);
    }
    *((_DWORD *)a1 + 7) += a2;
    return (*((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 5))(*((_QWORD *)a1 + 4), *((unsigned int *)a1 + 7));
  }
  return result;
}
