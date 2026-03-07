NTSTATUS __fastcall UsbhEtwLogHubException(__int64 a1, int a2, int a3, int a4, char a5, __int64 a6, int a7)
{
  __int64 v7; // rbx
  NTSTATUS result; // eax
  _DWORD *v9; // rax
  int v10; // [rsp+90h] [rbp-31h] BYREF
  int v11; // [rsp+98h] [rbp-29h] BYREF
  int v12; // [rsp+A0h] [rbp-21h] BYREF
  int v13; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v14; // [rsp+ACh] [rbp-15h]
  __int16 v15; // [rsp+AEh] [rbp-13h]
  __int16 v16; // [rsp+B0h] [rbp-11h]
  __int16 v17; // [rsp+B2h] [rbp-Fh]
  _OWORD v18[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v19; // [rsp+D8h] [rbp+17h]

  v7 = a6;
  result = 0;
  v12 = a2;
  v11 = a3;
  v10 = a4;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  if ( dword_1C006B690 )
  {
    v9 = FdoExt(a1);
    v13 = v9[1298];
    v14 = *((_WORD *)v9 + 2598);
    v15 = v9[1300];
    v16 = *((_WORD *)v9 + 2614);
    v17 = *((_WORD *)v9 + 2615);
    UsbhEtwGetHubInfo((__int64)v9, (__int64)v18);
    return UsbhEtwWrite(
             &USBHUB_ETW_EVENT_HUB_EXCEPTION,
             0LL,
             &v13,
             12LL,
             v18,
             36LL,
             &v12,
             4LL,
             &v11,
             4LL,
             &v10,
             4LL,
             &a5,
             4LL,
             v7,
             a7,
             0LL);
  }
  return result;
}
