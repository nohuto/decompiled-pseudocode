/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0024CA8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C0027930 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00037BC (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021C74 (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  void *v3; // rdx
  void *v4; // r8
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // r10d
  int *v9; // rcx
  _DWORD *v10; // rdx
  unsigned int v11; // r9d
  _DWORD *v12; // r11
  int v13; // eax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int RegistryDwordValueNoDefault; // eax
  unsigned int v23; // ecx
  unsigned int v25; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-61h] BYREF
  int v28; // [rsp+44h] [rbp-5Dh] BYREF
  int v29; // [rsp+48h] [rbp-59h] BYREF
  int v30; // [rsp+4Ch] [rbp-55h] BYREF
  int v31; // [rsp+50h] [rbp-51h] BYREF
  int v32; // [rsp+54h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  int *v34; // [rsp+68h] [rbp-39h]
  __int64 v35; // [rsp+70h] [rbp-31h]
  int *v36; // [rsp+78h] [rbp-29h]
  __int64 v37; // [rsp+80h] [rbp-21h]
  unsigned int *v38; // [rsp+88h] [rbp-19h]
  __int64 v39; // [rsp+90h] [rbp-11h]
  int *v40; // [rsp+98h] [rbp-9h]
  __int64 v41; // [rsp+A0h] [rbp-1h]
  unsigned int *v42; // [rsp+A8h] [rbp+7h]
  __int64 v43; // [rsp+B0h] [rbp+Fh]
  unsigned int *v44; // [rsp+B8h] [rbp+17h]
  __int64 v45; // [rsp+C0h] [rbp+1Fh]
  int *v46; // [rsp+C8h] [rbp+27h]
  __int64 v47; // [rsp+D0h] [rbp+2Fh]

  v32 = 0;
  if ( a2 )
  {
    v4 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
    v3 = &PPM_ETW_SUMMARY2_RUNDOWN;
  }
  else
  {
    v3 = (void *)qword_1C001C7F8;
    v4 = &PPM_ETW_SUMMARY2_HV;
  }
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v3,
                                                              (__int64)v4,
                                                              (__int64)&v32,
                                                              (__int64)&UserData);
  v6 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v7 = *(_QWORD *)(a1 + 272);
      v8 = 100;
      v9 = *(int **)(a1 + 512);
      v10 = *(_DWORD **)(a1 + 432);
      v11 = 0;
      v12 = *(_DWORD **)(a1 + 488);
      v29 = 0;
      v30 = 0;
      v28 = 0;
      v31 = 100;
      v26 = 100;
      v27 = 100;
      v25 = 0;
      if ( (v7 & 0x300000300LL) != 0 )
      {
        v29 = *(_DWORD *)(a1 + 1116);
        v30 = ((v7 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v7 & 0xE0000000000LL) != 0 )
      {
        v29 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 16LL);
        v30 = 4;
      }
      else if ( (v7 & 0x7F077) != 0 )
      {
        v13 = *v9;
        v29 = v13;
        v30 = 1;
        if ( !v13 || *((_BYTE *)v9 + 16) != 1 )
          v29 = v13 + 1;
      }
      if ( (v7 & 0x1000000000LL) != 0 )
      {
        v14 = *(_DWORD **)(a1 + 1176);
        if ( !v14 )
          goto LABEL_41;
        v28 = 4;
        v31 = v14[5];
        v26 = v14[6];
        v27 = v14[7];
        v11 = v14[4];
      }
      else
      {
        if ( (v7 & 0x8000000) == 0 )
        {
          if ( (v7 & 0x80000000) != 0 )
          {
            v28 = 2;
            v11 = *(_DWORD *)(qword_1C001C8E0 + 28);
            v25 = v11;
            v26 = 100 * *(_DWORD *)(qword_1C001C8E0 + 36) / v11;
            v27 = 100 * *(_DWORD *)(qword_1C001C8E0 + 32) / v11;
          }
          else
          {
            if ( (v7 & 0x73300000) == 0 )
              goto LABEL_41;
            v28 = 1;
            if ( (v7 & 0x40000000) != 0 )
              v10 = *(_DWORD **)(a1 + 440);
            if ( (v7 & 0x70000000) != 0 )
            {
              v11 = v10[2];
              v25 = v11;
              v8 = 100 * v10[12 * (*v10 - 1) + 2] / v11;
              v26 = v8;
            }
            if ( (v7 & 0x3300000) != 0 )
              v27 = v8 * v12[5 * (*v12 - 1) + 1] / 0x64;
            else
              v27 = v8;
          }
LABEL_20:
          if ( v11 )
          {
LABEL_21:
            v34 = &v29;
            v35 = 4LL;
            v36 = &v30;
            v37 = 4LL;
            v38 = &v25;
            v39 = 4LL;
            v40 = &v31;
            v42 = &v26;
            v44 = &v27;
            v46 = &v28;
            v41 = 4LL;
            v43 = 4LL;
            v45 = 4LL;
            v47 = 4LL;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v6, 0LL, 8u, &UserData);
            LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                      WdfDriverGlobals,
                                                      *(_QWORD *)(a1 + 208));
            return (char)EventDescriptorAndProcessorId;
          }
LABEL_41:
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                          (__int64)L"~MHz",
                                          (__int64)&v25);
          v23 = v25;
          if ( RegistryDwordValueNoDefault < 0 )
            v23 = 0;
          v25 = v23;
          goto LABEL_21;
        }
        v15 = *(_DWORD **)(a1 + 240);
        if ( !v15 )
        {
          if ( !*(_QWORD *)(a1 + 384) )
            goto LABEL_41;
          v28 = 3;
          v16 = GetRegistryDwordValueNoDefault(
                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  (__int64)L"~MHz",
                  (__int64)&v25);
          v17 = *(_QWORD *)(a1 + 384);
          v11 = v25;
          if ( v16 < 0 )
            v11 = 0;
          v18 = 100LL * *(_QWORD *)(a1 + 376);
          v25 = v11;
          v31 = v18 / v17;
          v19 = 100LL * *(_QWORD *)(a1 + 392) / v17;
          v20 = 100LL * *(_QWORD *)(a1 + 400);
          v26 = v19;
          v21 = v20 / v17;
          if ( !(_DWORD)v21 )
            LODWORD(v21) = 1;
          v27 = v21;
          if ( !(_DWORD)v19 )
            v26 = 1;
          goto LABEL_20;
        }
        v28 = 3;
        v31 = v15[17];
        v26 = v15[19];
        v27 = v15[20];
        v11 = v15[16];
      }
      v25 = v11;
      goto LABEL_20;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
