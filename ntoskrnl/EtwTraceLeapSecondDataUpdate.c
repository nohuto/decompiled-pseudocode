/*
 * XREFs of EtwTraceLeapSecondDataUpdate @ 0x140851178
 * Callers:
 *     ExpReadLeapSecondData @ 0x140850DB4 (ExpReadLeapSecondData.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall EtwTraceLeapSecondDataUpdate(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v10; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  int v12; // [rsp+40h] [rbp-71h] BYREF
  int v13; // [rsp+44h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  int *v15; // [rsp+58h] [rbp-59h]
  int v16; // [rsp+60h] [rbp-51h]
  int v17; // [rsp+64h] [rbp-4Dh]
  int *v18; // [rsp+68h] [rbp-49h]
  int v19; // [rsp+70h] [rbp-41h]
  int v20; // [rsp+74h] [rbp-3Dh]
  int *v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+80h] [rbp-31h]
  int v23; // [rsp+84h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+88h] [rbp-29h] BYREF
  int *v25; // [rsp+A8h] [rbp-9h]
  int v26; // [rsp+B0h] [rbp-1h]
  int v27; // [rsp+B4h] [rbp+3h]
  int *v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C4h] [rbp+13h]
  int *v31; // [rsp+C8h] [rbp+17h]
  int v32; // [rsp+D0h] [rbp+1Fh]
  int v33; // [rsp+D4h] [rbp+23h]
  int *v34; // [rsp+D8h] [rbp+27h]
  int v35; // [rsp+E0h] [rbp+2Fh]
  int v36; // [rsp+E4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF
  int v38; // [rsp+118h] [rbp+67h] BYREF
  int v39; // [rsp+120h] [rbp+6Fh] BYREF
  int v40; // [rsp+128h] [rbp+77h] BYREF
  int v41; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v41 = a4;
  v40 = a3;
  v39 = a2;
  v38 = a1;
  if ( (unsigned int)dword_140C06690 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v25 = &v10;
      v28 = &v11;
      v31 = &v12;
      v34 = &v13;
      v13 = v6;
      v10 = a1;
      v26 = 4;
      v11 = v8;
      v29 = 4;
      v12 = v7;
      v32 = 4;
      v35 = 4;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C06690,
                     (unsigned __int8 *)&word_14003507E,
                     0LL,
                     0LL,
                     6u,
                     &v24);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    UserData.Ptr = (ULONGLONG)&v38;
    v15 = &v39;
    v18 = &v40;
    v21 = &v41;
    UserData.Size = 4;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    LOBYTE(v4) = EtwWrite(EtwKernelProvRegHandle, &KernelLeapSecondDataUpdate, 0LL, 4u, &UserData);
  }
  return (char)v4;
}
