/*
 * XREFs of EtwTraceTimeZoneBiasChange @ 0x1409E2F5C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall EtwTraceTimeZoneBiasChange(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  int v3; // r9d
  int v4; // r10d
  int v6; // [rsp+38h] [rbp-29h] BYREF
  int v7; // [rsp+3Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  int *v9; // [rsp+50h] [rbp-11h]
  int v10; // [rsp+58h] [rbp-9h]
  int v11; // [rsp+5Ch] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp+7h] BYREF
  int *v13; // [rsp+88h] [rbp+27h]
  int v14; // [rsp+90h] [rbp+2Fh]
  int v15; // [rsp+94h] [rbp+33h]
  int *v16; // [rsp+98h] [rbp+37h]
  int v17; // [rsp+A0h] [rbp+3Fh]
  int v18; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v21 = a2;
  v20 = a1;
  if ( (unsigned int)dword_140C06690 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v6;
      v7 = v3;
      v16 = &v7;
      v6 = v4;
      v14 = 4;
      v17 = 4;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C06690,
                     (unsigned __int8 *)byte_140035010,
                     0LL,
                     0LL,
                     4u,
                     &v12);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v11 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v9 = &v21;
    v10 = 4;
    LOBYTE(v2) = EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneBiasChange, 0LL, 2u, &UserData);
  }
  return (char)v2;
}
