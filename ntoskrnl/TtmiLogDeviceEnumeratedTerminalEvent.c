/*
 * XREFs of TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A4874
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1409A0904 (TtmpPublishDeviceEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceEnumeratedTerminalEvent(int a1, int a2, int a3, int a4, const size_t *a5)
{
  _UNKNOWN **v5; // rax
  int ProcessSessionId; // eax
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v14; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+44h] [rbp-65h] BYREF
  int v16; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-51h] BYREF
  int *v18; // [rsp+78h] [rbp-31h]
  int v19; // [rsp+80h] [rbp-29h]
  int v20; // [rsp+84h] [rbp-25h]
  int *v21; // [rsp+88h] [rbp-21h]
  int v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+94h] [rbp-15h]
  int *v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A4h] [rbp-5h]
  int *v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B4h] [rbp+Bh]
  int *v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C4h] [rbp+1Bh]
  _BYTE v33[16]; // [rsp+C8h] [rbp+1Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v5 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v12 = ProcessSessionId;
      v18 = &v12;
      v21 = &v13;
      v24 = &v14;
      v27 = &v15;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v30 = &v16;
      v13 = a1;
      v14 = a2;
      v15 = a3;
      v16 = a4;
      tlgCreate1Sz_wchar_t((__int64)v33, a5);
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)word_140032F2A,
                     0LL,
                     0LL,
                     8u,
                     &v17);
    }
  }
  return (char)v5;
}
