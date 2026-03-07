NTSTATUS __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4, int a5)
{
  NTSTATUS result; // eax
  _DWORD *v8; // rax
  int v9; // [rsp+60h] [rbp-11h] BYREF
  int v10; // [rsp+68h] [rbp-9h] BYREF
  __int16 v11; // [rsp+6Ch] [rbp-5h]
  __int16 v12; // [rsp+6Eh] [rbp-3h]
  __int16 v13; // [rsp+70h] [rbp-1h]
  __int16 v14; // [rsp+72h] [rbp+1h]
  _OWORD v15[2]; // [rsp+78h] [rbp+7h] BYREF
  int v16; // [rsp+98h] [rbp+27h]

  result = 0;
  v9 = a3;
  v16 = 0;
  memset(v15, 0, sizeof(v15));
  if ( dword_1C006B690 )
  {
    v8 = FdoExt(a1);
    v10 = v8[1298];
    v11 = *((_WORD *)v8 + 2598);
    v12 = v8[1300];
    v13 = *((_WORD *)v8 + 2614);
    v14 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo((__int64)v8, (__int64)v15);
    return UsbhEtwWrite(a2, 0LL, &v10, 12LL, v15, 36LL, &v9, 4LL, a4, a5, 0LL);
  }
  return result;
}
