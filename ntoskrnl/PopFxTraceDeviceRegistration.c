/*
 * XREFs of PopFxTraceDeviceRegistration @ 0x140837C28
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140586438 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterDevice @ 0x140836FBC (PopFxRegisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopPepGetComponentVetoMasks @ 0x14059C914 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14059CB28 (PopPepGetDeviceVetoMasks.c)
 *     PopDiagTraceFxComponentRegistration @ 0x14098C3E4 (PopDiagTraceFxComponentRegistration.c)
 *     PopDiagTraceFxDeviceRegistration @ 0x14098C4B4 (PopDiagTraceFxDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x14098F3C0 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxTraceDeviceRegistration(__int64 a1, char a2)
{
  unsigned int *v3; // rbx
  __int64 *v5; // r15
  const EVENT_DESCRIPTOR *v6; // rdi
  __int64 v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rax
  unsigned int v9; // edi
  __int64 *v10; // rdx
  unsigned int v11; // ebx
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 Pool2; // rax
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v20; // r13
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 i; // r9
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const EVENT_DESCRIPTOR *EventDescriptor; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  int v31; // [rsp+58h] [rbp-50h]

  v3 = (unsigned int *)(a1 + 828);
  v5 = (__int64 *)(a1 + 48);
  if ( a2 )
  {
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_REGISTRATION_RUNDOWN;
  }
  else
  {
    PopFxAddLogEntry(*v5, 0, 1, *v3);
    v6 = &POP_ETW_EVENT_DEVICE_REGISTRATION;
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v6) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v30 = 0LL;
    v31 = 0;
    PopPepGetDeviceVetoMasks(v7, (__int64)&v30);
    PopDiagTraceFxDeviceRegistration(v6, *(_DWORD *)(a1 + 32), *v5 + 128, *v3, (__int64)&v30);
    v8 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COMPONENT_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v8 = &POP_ETW_EVENT_COMPONENT_REGISTRATION;
    EventDescriptor = v8;
    if ( EtwEventEnabled(PopDiagHandle, v8) )
    {
      v9 = *v3;
      if ( *v3 )
      {
        v10 = *(__int64 **)(a1 + 832);
        v11 = *(_DWORD *)(*v10 + 156);
        if ( v9 > 1 )
        {
          v12 = v10 + 1;
          v13 = v9 - 1;
          do
          {
            v14 = *v12++;
            v15 = *(_DWORD *)(v14 + 156);
            if ( v15 <= v11 )
              v15 = v11;
            v11 = v15;
            --v13;
          }
          while ( v13 );
        }
        Pool2 = ExAllocatePool2(256LL, 28 * v11, 1297630800LL);
        v17 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          v18 = v11;
          v19 = 0;
          v20 = (void *)(Pool2 + 24 * v18);
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v21 + *(_QWORD *)(a1 + 832));
            memset(v20, 0, 4LL * *(unsigned int *)(v22 + 156));
            PopPepGetComponentVetoMasks(*(_QWORD *)(a1 + 56), v19, (__int64)v20);
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v22 + 156); v17[2 * v24 + 5] = v25 )
            {
              v24 = 3 * i;
              *(_QWORD *)&v17[2 * v24] = *(_QWORD *)(*(_QWORD *)(v22 + 160) + 24 * i);
              *(_QWORD *)&v17[2 * v24 + 2] = *(_QWORD *)(*(_QWORD *)(v22 + 160) + 24 * i + 8);
              v17[2 * v24 + 4] = *(_DWORD *)(*(_QWORD *)(v22 + 160) + 24 * i + 16);
              v25 = *((_DWORD *)v20 + i);
              i = (unsigned int)(i + 1);
            }
            PopDiagTraceFxComponentRegistration(
              EventDescriptor,
              *(_DWORD *)(v22 + 152),
              *(_DWORD *)(v22 + 156),
              (__int64)v17);
            v27 = *(_QWORD *)(v22 + 424);
            if ( v27 )
            {
              LOBYTE(v26) = a2;
              PopFxTracePerfRegistration(v27, v26);
            }
            ++v19;
            v21 += 8LL;
          }
          while ( v19 < v9 );
          ExFreePoolWithTag(v17, 0x4D584650u);
        }
      }
    }
  }
}
