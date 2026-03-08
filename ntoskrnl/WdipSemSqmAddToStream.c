/*
 * XREFs of WdipSemSqmAddToStream @ 0x1409DBA48
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14078C108 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1409DBC9C (WdipSemSqmLogTimeoutDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140833CFC (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemSqmAddToStream(_DWORD *a1, unsigned int a2, ULONGLONG a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-B0h] BYREF
  int *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  int *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  int *v19; // [rsp+80h] [rbp-80h]
  int i; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  int v22; // [rsp+260h] [rbp+160h] BYREF

  v22 = (int)a1;
  v9 = a2;
  v10 = 1;
  v11[0] = 48;
  v8 = 11;
  if ( !a3 || a2 - 1 > 8 )
    return -1073741811;
  v12.Reserved = 0;
  v15 = 0;
  v18 = 0;
  v3 = 0;
  v21 = 0;
  v12.Ptr = (ULONGLONG)WinSqmGlobalSession;
  v13 = &v22;
  v16 = &v8;
  v19 = (int *)&v9;
  v12.Size = 16;
  v14 = 4;
  v17 = 4;
  for ( i = 4; v3 < a2; *(&v12.Size + 2 * v5) = 4 )
  {
    v4 = 2LL * (3 * v3 + 4);
    *(&v12.Reserved + 2 * v4) = 0;
    *(&v12.Ptr + v4) = (ULONGLONG)&v10;
    *(&v12.Size + 2 * v4) = 4;
    v5 = 6LL * (v3 + 2);
    v6 = 2LL * (3 * v3++ + 5);
    *(&v12.Reserved + 2 * v6) = 0;
    *(&v12.Ptr + v6) = a3;
    a3 += 4LL;
    *(&v12.Size + 2 * v6) = 4;
    a1 = v11;
    *(&v12.Reserved + 2 * v5) = 0;
    *(&v12.Ptr + v5) = (ULONGLONG)v11;
  }
  return WdipSemWriteEvent((__int64)a1, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM, 0LL, 3 * a2 + 4, &v12);
}
