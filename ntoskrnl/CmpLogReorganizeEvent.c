/*
 * XREFs of CmpLogReorganizeEvent @ 0x140A0D02C
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmpLogReorganizeEvent(unsigned __int16 *a1, int a2, int a3)
{
  unsigned __int16 v3; // ax
  NTSTATUS result; // eax
  __int16 v5; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  int *v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  int *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+A8h] [rbp+6Fh] BYREF
  int v15; // [rsp+B0h] [rbp+77h] BYREF

  v15 = a3;
  v14 = a2;
  if ( EtwKernelProvRegHandle )
  {
    v3 = *a1;
    v8 = *a1;
    v5 = v3 >> 1;
    UserData.Ptr = (ULONGLONG)&v5;
    v7 = *((_QWORD *)a1 + 1);
    v10 = &v14;
    v12 = &v15;
    *(_QWORD *)&UserData.Size = 2LL;
    v9 = 0;
    v11 = 4LL;
    v13 = 4LL;
    return EtwWrite(EtwKernelProvRegHandle, &REG_EVENT_REORGANIZE, 0LL, 4u, &UserData);
  }
  return result;
}
