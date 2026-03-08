/*
 * XREFs of PnpGetServiceStartType @ 0x14078C7C0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(__int64 a1, void *a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  HANDLE v12; // rcx
  int v13; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0;
  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_140D181F0;
    if ( qword_140D181F0 )
    {
      if ( qword_140D181F0 == -1 )
        goto LABEL_2;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      else
        v9 = 0LL;
      v10 = SysCtxRegOpenKey(
              v9,
              2147483650LL,
              (__int64)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
              0,
              0x20019u,
              (__int64)&qword_140D181F0);
      if ( v10 == -1073741772 )
      {
        qword_140D181F0 = -1LL;
        goto LABEL_2;
      }
      if ( v10 < 0 )
        goto LABEL_2;
      v8 = qword_140D181F0;
    }
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      v11 = 0LL;
    if ( (int)SysCtxRegOpenKey(v11, v8, a1, 0, 0x20019u, (__int64)Handle) >= 0 )
    {
      LODWORD(v16) = 4;
      v6 = RegRtlQueryValue(Handle[0], L"Start", &v15, a3, (unsigned int *)&v16);
      if ( v6 >= 0 && v15 == 4 )
        goto LABEL_5;
    }
    v12 = qword_140D181F8;
    if ( qword_140D181F8 )
    {
      if ( qword_140D181F8 == (HANDLE)-1LL )
        goto LABEL_2;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v12 = *(HANDLE *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v13 = SysCtxRegOpenKey((__int64)v12, qword_140D181F0, (__int64)L"*Driver", 0, 0x20019u, (__int64)&qword_140D181F8);
      if ( v13 == -1073741772 )
      {
        qword_140D181F8 = (HANDLE)-1LL;
        goto LABEL_2;
      }
      if ( v13 < 0 )
        goto LABEL_2;
      v12 = qword_140D181F8;
    }
    LODWORD(v16) = 4;
    v6 = RegRtlQueryValue(v12, L"Start", &v15, a3, (unsigned int *)&v16);
    if ( v6 >= 0 && v15 == 4 )
      goto LABEL_5;
  }
LABEL_2:
  LODWORD(v16) = 4;
  v6 = RegRtlQueryValue(a2, L"Start", &v15, a3, (unsigned int *)&v16);
  if ( v6 >= 0 && v15 != 4 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
