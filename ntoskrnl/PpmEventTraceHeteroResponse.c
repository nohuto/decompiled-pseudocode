/*
 * XREFs of PpmEventTraceHeteroResponse @ 0x14059945C
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140594418 (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PpmEventTraceHeteroResponse(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  unsigned __int64 v3; // rdi
  unsigned int v7; // r8d
  char v8; // al
  _QWORD *v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r9
  _BYTE *v13; // rdx
  char v14; // cl
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16; // [rsp+41h] [rbp-BFh] BYREF
  char v17; // [rsp+42h] [rbp-BEh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  char *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  _QWORD *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  va_list v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  va_list v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  va_list v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v41; // [rsp+158h] [rbp+58h] BYREF
  va_list va; // [rsp+158h] [rbp+58h]
  __int64 v43; // [rsp+160h] [rbp+60h] BYREF
  va_list va1; // [rsp+160h] [rbp+60h]
  va_list va2; // [rsp+168h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  v3 = v41;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE) )
  {
    v7 = *(unsigned __int8 *)(a1 + 10);
    v8 = *(_BYTE *)(a1 + 124);
    v16 = *(_BYTE *)(a1 + 10);
    v17 = v8;
    if ( v3 > 1 && (_BYTE)v7 )
    {
      v9 = a3;
      v10 = v7;
      do
      {
        *v9++ /= v3;
        --v10;
      }
      while ( v10 );
    }
    v11 = *(unsigned __int8 *)(a1 + 11);
    v15 = 0;
    if ( v11 > 1 )
    {
      v12 = v11 - 1;
      v13 = (_BYTE *)(*(_QWORD *)(a1 + 184) + 107LL);
      v14 = 0;
      do
      {
        v14 += *v13;
        v13 += 104;
        v15 = v14;
        --v12;
      }
      while ( v12 );
    }
    if ( PpmHeteroHgsParkingEnabled )
      v15 = *(_BYTE *)(*(_QWORD *)(a1 + 184) + 107LL);
    UserData.Ptr = a1 + 4;
    *(_QWORD *)&UserData.Size = 2LL;
    v19 = a1 + 16;
    v20 = 8LL;
    v21 = &v16;
    v24 = 4 * v7;
    v27 = 8 * v7;
    v22 = 1LL;
    va_copy(v29, va);
    v31 = a1 + 122;
    v33 = &v17;
    va_copy(v35, va1);
    v37 = &v15;
    va_copy(v39, va2);
    v23 = a2;
    v25 = 0;
    v26 = a3;
    v28 = 0;
    v30 = 8LL;
    v32 = 1LL;
    v34 = 1LL;
    v36 = 1LL;
    v38 = 1LL;
    v40 = 4LL;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
  }
}
