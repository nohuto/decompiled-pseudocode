/*
 * XREFs of IopLiveDumpTraceInterfaceEnd @ 0x1405588B0
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x140949308 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceInterfaceEnd(__int64 a1, __int64 a2, int a3, ...)
{
  char result; // al
  int v4; // edx
  int *v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  const GUID *ActivityId; // r10
  const EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  va_list v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+170h] [rbp+70h] BYREF
  __int64 v46; // [rsp+178h] [rbp+78h] BYREF
  va_list va; // [rsp+178h] [rbp+78h]
  va_list va1; // [rsp+180h] [rbp+80h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v46 = va_arg(va1, _QWORD);
  v45 = a3;
  v13 = 0;
  v12 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v14 = 0;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v4 )
    {
      v9 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_END;
      if ( v7 != 1 )
        v9 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_END;
    }
    else
    {
      v9 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_CAPTURE_API_END;
    }
    if ( v6 )
    {
      v12 = *v5;
      v16 = *((_QWORD *)v5 + 1);
      v17 = *((_QWORD *)v5 + 2);
      v18 = *((_QWORD *)v5 + 3);
      v10 = *((_QWORD *)v5 + 4);
      v11 = v5[10];
      v19 = v10;
      v13 = (v11 >> 4) & 1;
      v14 = (v11 >> 5) & 1;
    }
    v15 = (unsigned __int8)IOSpaceEnabled;
    UserData.Ptr = (ULONGLONG)&v45;
    v21 = &v12;
    v23 = &v16;
    v25 = &v17;
    v27 = &v18;
    v29 = &v19;
    v31 = &v13;
    va_copy(v33, va);
    v35 = &v14;
    v37 = v6 + 1176;
    v39 = v6 + 1184;
    v41 = v6 + 1192;
    *(_QWORD *)&UserData.Size = 4LL;
    v43 = &v15;
    v22 = 4LL;
    v24 = 8LL;
    v26 = 8LL;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = 4LL;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v9, 0LL, 0, ActivityId, ActivityId, 0xDu, &UserData);
  }
  return result;
}
