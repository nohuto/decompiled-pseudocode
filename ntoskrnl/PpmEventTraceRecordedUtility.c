/*
 * XREFs of PpmEventTraceRecordedUtility @ 0x140233A78
 * Callers:
 *     PpmPerfRecordUtility @ 0x140233B60 (PpmPerfRecordUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140233B18 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char PpmEventTraceRecordedUtility(int a1, ...)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v2; // rdi
  REGHANDLE v3; // rbx
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  va_list v8; // [rsp+68h] [rbp-A0h]
  __int64 v9; // [rsp+70h] [rbp-98h]
  va_list v10; // [rsp+78h] [rbp-90h]
  __int64 v11; // [rsp+80h] [rbp-88h]
  va_list v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  _BYTE v14[16]; // [rsp+98h] [rbp-70h] BYREF
  va_list v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  va_list v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  va_list v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  int *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  va_list v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  va_list v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  va_list v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  __int64 v31; // [rsp+170h] [rbp+68h] BYREF
  va_list va; // [rsp+170h] [rbp+68h]
  __int64 v33; // [rsp+178h] [rbp+70h] BYREF
  va_list va1; // [rsp+178h] [rbp+70h]
  __int64 v35; // [rsp+180h] [rbp+78h] BYREF
  va_list va2; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+188h] [rbp+80h] BYREF
  va_list va3; // [rsp+188h] [rbp+80h]
  __int64 v39; // [rsp+190h] [rbp+88h] BYREF
  va_list va4; // [rsp+190h] [rbp+88h]
  __int64 v41; // [rsp+198h] [rbp+90h] BYREF
  va_list va5; // [rsp+198h] [rbp+90h]
  __int64 v43; // [rsp+1A0h] [rbp+98h] BYREF
  va_list va6; // [rsp+1A0h] [rbp+98h]
  __int64 v45; // [rsp+1A8h] [rbp+A0h] BYREF
  va_list va7; // [rsp+1A8h] [rbp+A0h]
  __int64 v47; // [rsp+1B0h] [rbp+A8h] BYREF
  va_list va8; // [rsp+1B0h] [rbp+A8h]
  __int64 v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  va_list va9; // [rsp+1C8h] [rbp+C0h] BYREF

  va_start(va9, a1);
  va_start(va8, a1);
  va_start(va7, a1);
  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v35 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v37 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v39 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v41 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v43 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v45 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v47 = va_arg(va9, _QWORD);
  v49 = va_arg(va9, _QWORD);
  v50 = va_arg(va9, _QWORD);
  LOBYTE(v5) = 100;
  LODWORD(v6) = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)PPM_ETW_RECORDED_UTILITY,
                                                              (unsigned int)PPM_ETW_RECORDED_UTILITY_HV,
                                                              (unsigned int)&v6,
                                                              (__int64)v14);
  v2 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v9 = 8LL;
      va_copy(v8, va);
      v11 = 8LL;
      va_copy(v10, va1);
      v13 = 4LL;
      va_copy(v12, va3);
      v16 = 4LL;
      va_copy(v15, va4);
      va_copy(v17, va5);
      va_copy(v19, va6);
      v21 = &v5;
      v18 = 2LL;
      v23 = v50 + 1;
      va_copy(v25, va2);
      va_copy(v27, va7);
      va_copy(v29, va8);
      v20 = 2LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 8LL;
      v28 = 1LL;
      v30 = 1LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v3, v2, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
