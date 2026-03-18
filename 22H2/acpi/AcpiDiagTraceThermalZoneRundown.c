/*
 * XREFs of AcpiDiagTraceThermalZoneRundown @ 0x1C0008DBC
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C0007C80 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AcpiDiagEnumCoolingDevices @ 0x1C0007254 (AcpiDiagEnumCoolingDevices.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0007500 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0008720 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceThermalZoneRundown(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _QWORD *v8; // rax
  ULONG v9; // r14d
  __int64 Pool2; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r9
  _DWORD *v14; // r15
  unsigned int v15; // edi
  _BYTE *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v28; // [rsp+3Ch] [rbp-25h] BYREF
  __int16 v29; // [rsp+40h] [rbp-21h] BYREF
  int v30; // [rsp+44h] [rbp-1Dh] BYREF
  int v31; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v33[40]; // [rsp+60h] [rbp-1h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v29 = 0;
  DestinationString = 0LL;
  v28 = 0;
  v3 = (_QWORD **)(v1 + 176);
  v30 = 0;
  v31 = 0;
  for ( i = *(_QWORD **)(v1 + 176); i != v3; i = (_QWORD *)*i )
  {
    v5 = i[5];
    if ( v5 )
    {
      v6 = i[4];
      if ( *((_BYTE *)i + 52) )
        AcpiDiagTracePassiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 53));
      else
        AcpiDiagTraceActiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 55));
    }
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
  UserData = 0LL;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
      {
        v8 = *v3;
        v9 = 30;
        while ( v8 != v3 )
        {
          v8 = (_QWORD *)*v8;
          ++v9;
        }
        Pool2 = ExAllocatePool2(64LL, 16LL * v9, 1416651585LL);
        UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
        if ( Pool2 )
        {
          v28 = DestinationString.Length >> 1;
          *(_QWORD *)Pool2 = &v28;
          *(_QWORD *)(Pool2 + 8) = 2LL;
          v11 = 2 * v28;
          *(_QWORD *)(Pool2 + 16) = DestinationString.Buffer;
          *(_QWORD *)(Pool2 + 32) = v1 + 16;
          *(_QWORD *)(Pool2 + 48) = v1 + 20;
          *(_QWORD *)(Pool2 + 64) = v1 + 4;
          *(_QWORD *)(Pool2 + 80) = v1 + 8;
          *(_QWORD *)(Pool2 + 96) = v1 + 336;
          *(_QWORD *)(Pool2 + 112) = v1 + 36;
          *(_QWORD *)(Pool2 + 128) = v1 + 76;
          *(_QWORD *)(Pool2 + 144) = v1 + 28;
          *(_QWORD *)(Pool2 + 160) = v1 + 104;
          *(_DWORD *)(Pool2 + 24) = v11;
          *(_DWORD *)(Pool2 + 28) = 0;
          *(_QWORD *)(Pool2 + 40) = 4LL;
          *(_QWORD *)(Pool2 + 56) = 4LL;
          *(_QWORD *)(Pool2 + 72) = 4LL;
          *(_QWORD *)(Pool2 + 88) = 4LL;
          *(_QWORD *)(Pool2 + 104) = 4LL;
          *(_QWORD *)(Pool2 + 120) = 40LL;
          *(_QWORD *)(Pool2 + 136) = 4LL;
          *(_QWORD *)(Pool2 + 152) = 4LL;
          *(_QWORD *)(Pool2 + 168) = 4LL;
          *(_QWORD *)(Pool2 + 176) = &v30;
          *(_QWORD *)(Pool2 + 184) = 4LL;
          v27 = 12;
          v30 = AcpiDiagEnumCoolingDevices(v1, 1, 1, Pool2, &v27);
          v12 = v27++;
          UserData[v12].Ptr = (unsigned __int64)&v31;
          *(_QWORD *)&UserData[v12].Size = 4LL;
          v31 = AcpiDiagEnumCoolingDevices(v1, 1, 0, v13, &v27);
          v14 = v33;
          v15 = 0;
          v16 = v33;
          do
          {
            v17 = v27++;
            UserData[v17].Ptr = (unsigned __int64)v16;
            *(_QWORD *)&UserData[v17].Size = 4LL;
            *v14 = AcpiDiagEnumCoolingDevices(v1, 0, v15, (__int64)UserData, &v27);
            v16 += 4;
            ++v14;
            ++v15;
          }
          while ( v15 < 0xA );
          v18 = v27;
          v19 = v27 + 1;
          UserData[v18].Ptr = v1 + 80;
          *(_QWORD *)&UserData[v18].Size = 4LL;
          v20 = v19++;
          UserData[v20].Ptr = v1 + 24;
          *(_QWORD *)&UserData[v20].Size = 4LL;
          v21 = v19++;
          UserData[v21].Ptr = v1 + 332;
          *(_QWORD *)&UserData[v21].Size = 4LL;
          v22 = v19;
          UserData[v22].Ptr = v1 + 84;
          *(_QWORD *)&UserData[v22].Size = 4LL;
          v29 = *(_WORD *)(v1 + 304) >> 1;
          v23 = v19 + 1;
          v24 = v19 + 2;
          UserData[v23].Ptr = (unsigned __int64)&v29;
          *(_QWORD *)&UserData[v23].Size = 2LL;
          v25 = *(_QWORD *)(v1 + 312);
          UserData[v24].Size = *(unsigned __int16 *)(v1 + 304);
          UserData[v24].Ptr = v25;
          v26 = v19 + 3;
          UserData[v24].Reserved = 0;
          *(_QWORD *)&UserData[v26].Size = 4LL;
          UserData[v26].Ptr = v1 + 88;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, v9, UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( UserData )
    ExFreePoolWithTag(UserData, 0x54706341u);
}
