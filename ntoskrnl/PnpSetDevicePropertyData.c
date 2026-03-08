/*
 * XREFs of PnpSetDevicePropertyData @ 0x140863B28
 * Callers:
 *     IoSetDevicePropertyData @ 0x140863A80 (IoSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B1B80 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x140855984 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE *v16; // [rsp+58h] [rbp-F0h]
  _BYTE v17[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v17, 0, 0xAAuLL);
  v15 = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    WORD1(v15) = 170;
    v16 = v17;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v15) )
      return (unsigned int)-1073741823;
    v11 = (__int64)v16;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, *(const WCHAR **)(v10 + 48), 1, 0LL, v11, a2, a5, a7, a6, 0);
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_8;
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( v14 )
      goto LABEL_8;
    v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  if ( v12 == -1073741275 )
    v12 = -1073741772;
LABEL_8:
  if ( *(int *)(v10 + 300) >= 773 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}
