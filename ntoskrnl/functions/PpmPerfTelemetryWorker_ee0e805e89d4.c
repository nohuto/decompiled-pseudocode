__int64 PpmPerfTelemetryWorker()
{
  _QWORD *v0; // r10
  _DWORD *v1; // r11
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // kr00_8
  unsigned __int128 v6; // rax
  int v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v10; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-39h] BYREF
  int *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  int *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  _BYTE *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  __int64 *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  _BYTE v20[40]; // [rsp+A8h] [rbp+27h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  v0 = &unk_140D1F5B0;
  v1 = v20;
  v2 = qword_140D1F548 - qword_140D1F550;
  qword_140D1F550 = qword_140D1F548;
  v3 = 9LL;
  v4 = v2 / 0x989680;
  v5 = qword_140D1F558 - qword_140D1F560;
  qword_140D1F560 = qword_140D1F558;
  do
  {
    v6 = (unsigned __int64)(*(v0 - 9) - *v0) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
    *v0 = *(v0 - 9);
    ++v0;
    *v1++ = *((_QWORD *)&v6 + 1) >> 23;
    --v3;
  }
  while ( v3 );
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v8 = v4;
    v12 = &v8;
    v13 = 4LL;
    v14 = &v9;
    v9 = v5 / 0x989680;
    v16 = v20;
    v15 = 4LL;
    v18 = &v10;
    v17 = 36LL;
    v10 = 0x1000000LL;
    v19 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14002D885, 0LL, 0LL, 6u, &v11);
  }
  return PopOkayToQueueNextWorkItem((__int64)&unk_140C3E728);
}
