/*
 * XREFs of PnpGetDevicePropertyData @ 0x1406F7418
 * Callers:
 *     IoGetDevicePropertyData @ 0x1406F7380 (IoGetDevicePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x1406F4E64 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v15; // rax
  unsigned int *v16; // rdx
  __int64 v17; // [rsp+60h] [rbp-108h] BYREF
  _BYTE *v18; // [rsp+68h] [rbp-100h]
  _BYTE v19[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v19, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741808;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v11 || !*(_QWORD *)(v11 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    v18 = v19;
    WORD1(v17) = 170;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v17) )
      return (unsigned int)-1073741823;
    v12 = (__int64)v18;
  }
  else
  {
    v12 = 0LL;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(v11 + 48),
                     1LL,
                     0LL,
                     v12,
                     a2,
                     a8,
                     (__int64)a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_7;
  v15 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
    v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
  if ( v15 )
  {
LABEL_7:
    if ( ObjectProperty != -1073741275 )
      return ObjectProperty;
    return (unsigned int)-1073741772;
  }
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( !ObjectProperty )
      PnpCompareInterruptInformation(a1, a6, *a7);
    return ObjectProperty;
  }
  v16 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
  if ( !v16 )
    return (unsigned int)-1073741772;
  if ( a7 )
    *a7 = *v16;
  if ( a5 >= *v16 )
  {
    memmove(a6, v16 + 1, *v16);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
}
