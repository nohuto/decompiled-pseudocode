NTSTATUS __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  NTSTATUS result; // eax
  NTSTATUS *v2; // r15
  NTSTATUS v3; // edx
  NTSTATUS v4; // r8d
  NTSTATUS v5; // r12d
  __int64 *v7; // rbx
  _QWORD **v8; // r9
  _QWORD *v9; // rsi
  __int64 *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  NTSTATUS v13; // [rsp+38h] [rbp-79h] BYREF
  NTSTATUS v14; // [rsp+3Ch] [rbp-75h] BYREF
  NTSTATUS v15; // [rsp+40h] [rbp-71h] BYREF
  NTSTATUS v16; // [rsp+44h] [rbp-6Dh] BYREF
  __int64 v17; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+58h] [rbp-59h] BYREF
  NTSTATUS *v20; // [rsp+78h] [rbp-39h]
  int v21; // [rsp+80h] [rbp-31h]
  int v22; // [rsp+84h] [rbp-2Dh]
  NTSTATUS *v23; // [rsp+88h] [rbp-29h]
  int v24; // [rsp+90h] [rbp-21h]
  int v25; // [rsp+94h] [rbp-1Dh]
  NTSTATUS *v26; // [rsp+98h] [rbp-19h]
  int v27; // [rsp+A0h] [rbp-11h]
  int v28; // [rsp+A4h] [rbp-Dh]
  NTSTATUS *v29; // [rsp+A8h] [rbp-9h]
  int v30; // [rsp+B0h] [rbp-1h]
  int v31; // [rsp+B4h] [rbp+3h]
  __int64 *v32; // [rsp+B8h] [rbp+7h]
  int v33; // [rsp+C0h] [rbp+Fh]
  int v34; // [rsp+C4h] [rbp+13h]
  __int64 *v35; // [rsp+C8h] [rbp+17h]
  int v36; // [rsp+D0h] [rbp+1Fh]
  int v37; // [rsp+D4h] [rbp+23h]

  result = 0;
  v2 = (NTSTATUS *)(a1 + 144);
  v3 = 0;
  v13 = 0;
  v4 = 0;
  v14 = 0;
  v5 = 0;
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v22 = 0;
    v25 = 0;
    v20 = (NTSTATUS *)&v17;
    v16 = *v2;
    v23 = &v16;
    v17 = a1;
    v21 = 8;
    v24 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03770, (unsigned __int8 *)&word_140029B76, 0LL, 0LL, 4u, v19);
    result = 0;
    v3 = 0;
    v4 = 0;
  }
  v7 = *(__int64 **)(a1 + 88);
  if ( v7 != (__int64 *)(a1 + 88) )
  {
    v8 = (_QWORD **)(a1 + 72);
    do
    {
      v9 = *v8;
      v15 = ++v4;
      v10 = v7;
      if ( v9 != v8 || (*v2 & 0x10000) != 0 )
      {
        if ( *((_BYTE *)v7 + 52) )
          goto LABEL_10;
        if ( (*v2 & 0x10000) != 0 )
          v9 = *(_QWORD **)(a1 + 120);
        v11 = (_QWORD *)(a1 + ((*v2 & 0x10000) != 0 ? 120LL : 72LL));
        if ( v9 != v11 )
        {
          while ( 1 )
          {
            v12 = v9 - 7;
            if ( (*v2 & 0x10000) == 0 )
              v12 = v9;
            if ( !FsRtlpOplockKeysEqual(v7[7], v12[3], 0) )
              break;
            v9 = (_QWORD *)*v9;
            if ( v9 == v11 )
            {
              v10 = v7;
              goto LABEL_9;
            }
          }
          v8 = (_QWORD **)(a1 + 72);
          result = v13 + 1;
          v4 = v15;
          v3 = ++v14;
          ++v13;
          goto LABEL_11;
        }
      }
LABEL_9:
      v7 = (__int64 *)v7[1];
      FsRtlpRemoveAndCompleteWaitingIrp(v10);
      v4 = v15;
      v8 = (_QWORD **)(a1 + 72);
      v3 = v14;
      ++v5;
LABEL_10:
      result = v13;
LABEL_11:
      v7 = (__int64 *)*v7;
    }
    while ( v7 != (__int64 *)(a1 + 88) );
  }
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v15 = result;
    v23 = &v15;
    v26 = &v14;
    v29 = &v13;
    v32 = &v18;
    LODWORD(v17) = *v2;
    v35 = &v17;
    v16 = v4;
    v20 = &v16;
    v13 = v3;
    v21 = 4;
    v24 = 4;
    v14 = v5;
    v27 = 4;
    v30 = 4;
    v18 = a1;
    v33 = 8;
    v36 = 4;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C03770,
             (unsigned __int8 *)word_140029A12,
             0LL,
             0LL,
             8u,
             v19);
  }
  return result;
}
