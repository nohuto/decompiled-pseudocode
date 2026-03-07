char __fastcall lambda_ac7822d55a092b4fdea37af52b75bf92_::operator()(int **a1)
{
  int *v1; // rsi
  char *v2; // rbx
  int *v3; // rdi
  int *v4; // r14
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int CurrentProcessSessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r15d
  __int64 v12; // r9
  int v14; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp-25h] BYREF
  int v16; // [rsp+60h] [rbp-21h] BYREF
  int v17; // [rsp+64h] [rbp-1Dh] BYREF
  int v18; // [rsp+68h] [rbp-19h] BYREF
  __int64 v19; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v20[2]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v21[24]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  int v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+ACh] [rbp+2Bh]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]

  memset(v21, 0, sizeof(v21));
  v24 = 0;
  v1 = a1[3];
  v2 = (char *)a1[2];
  v3 = *a1;
  v4 = a1[1];
  v5 = (unsigned __int8)*v2;
  v6 = **a1;
  v7 = *v4 + (*v1 << 16);
  v23 = 0;
  v22 = 0LL;
  v20[0] = 6;
  v20[1] = 64;
  memset(v21, 0, sizeof(v21));
  v25 = 76;
  v26 = v7;
  v27 = v6;
  v28 = v5;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v11 = CurrentProcessSessionId;
  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    LOBYTE(CurrentProcessSessionId) = tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000000LL);
    if ( (_BYTE)CurrentProcessSessionId )
    {
      v14 = (unsigned __int8)*v2;
      v15 = *v1;
      v16 = *v4;
      v17 = *v3;
      v18 = v11;
      v19 = 33556480LL;
      LOBYTE(CurrentProcessSessionId) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                          v15,
                                          byte_1C009CB51,
                                          v10,
                                          v12,
                                          (__int64)&v19,
                                          (__int64)&v18,
                                          (__int64)&v17,
                                          (__int64)&v16,
                                          (__int64)&v15,
                                          (__int64)&v14);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    LOBYTE(CurrentProcessSessionId) = McTemplateK0qtqqq_EtwWriteTransfer(
                                        (unsigned __int8)*v2,
                                        v9,
                                        v10,
                                        *v3,
                                        *v2,
                                        *v4,
                                        *v1,
                                        v11);
  return CurrentProcessSessionId;
}
