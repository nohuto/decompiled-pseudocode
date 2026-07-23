/*
 * XREFs of PopPlRegisterPowerPlane @ 0x14057EC64
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopPepIterateDeviceList @ 0x1405755F0 (PopPepIterateDeviceList.c)
 *     PopPlTraceLogPowerPlane @ 0x14057EE14 (PopPlTraceLogPowerPlane.c)
 *     PopPlInitPowerPlane @ 0x1408F9A54 (PopPlInitPowerPlane.c)
 */

__int64 __fastcall PopPlRegisterPowerPlane(__int64 a1, __int64 a2, __int64 a3)
{
  int inited; // edi
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-49h]
  int v11; // [rsp+28h] [rbp-41h]
  __int16 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int128 v14; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-9h] BYREF
  __int16 *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]

  v13 = 0LL;
  v14 = 0LL;
  if ( PopPowerPlane )
  {
    inited = -1073741768;
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    inited = -1073741735;
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    inited = PopPlInitPowerPlane(a1 + 24, a1, a2 + a1, &v13);
    if ( inited >= 0 )
    {
      v6 = v13;
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 16);
      *((_QWORD *)&v14 + 1) = v6;
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlActivateDeviceIterator,
        0LL,
        v5,
        1,
        0,
        (__int64)&v14);
      PopPepIterateDeviceList(
        (void (__fastcall *)(__int64))PopPlCommitPowerPlaneRegistration,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlRegisterDeviceIterator,
        (void (__fastcall *)(void (__fastcall *)(__int64), __int64))PopPlPublishInitialPowerDraw,
        v7,
        0,
        0,
        (__int64)&v14);
      PopPlTraceLogPowerPlane(v6);
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlIdleDeviceIterator,
        0LL,
        v8,
        0,
        1,
        (__int64)&v14);
    }
  }
  else
  {
    inited = -1073741811;
  }
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v12;
    v20 = 4;
    v19 = &v13;
    v12 = 1;
    v17 = 2;
    LODWORD(v13) = inited;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C02228, (unsigned __int8 *)&byte_14002A7C1, a3, 1u, v10, v11, 4u, &v15);
  }
  return (unsigned int)inited;
}
