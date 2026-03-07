__int64 __fastcall VidSchiCancelQueuedFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  char v16[8]; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+68h] [rbp-31h]
  unsigned __int64 v18; // [rsp+70h] [rbp-29h]
  __int64 *v19; // [rsp+78h] [rbp-21h] BYREF
  struct _VIDSCH_GLOBAL *v20; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  __int64 **v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  unsigned __int64 v25; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+Fh]
  unsigned int v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B4h] [rbp+1Bh]

  v26 = 0LL;
  v28 = 0;
  v24 = 0LL;
  v19 = (__int64 *)&v25;
  v7 = a2;
  v23 = &v19;
  v18 = a4;
  v25 = a4;
  v8 = *((unsigned int *)a1 + 8);
  v17 = a3;
  v27 = a3;
  v20 = a1;
  v9 = *((_QWORD *)a1 + 3);
  v21 = a2;
  v22 = 1;
  v16[0] = 0;
  DpSynchronizeExecution(v9, VidSchiCancelQueuedFlipsAtISR, &v20, v8, v16);
  v10 = v24;
  v11 = *((_QWORD *)a1 + v7 + 400);
  v12 = 288LL * v17;
  if ( (int)v24 >= 0 )
  {
    v13 = v26;
    *a5 = v26;
    if ( v13 < v18 || (v14 = *(_QWORD *)(v11 + v12 + 392), v13 > v14) )
    {
      *(_QWORD *)(v11 + v12 + 408) = 0LL;
      *(_QWORD *)(v11 + v12 + 416) = 0LL;
    }
    else
    {
      *(_QWORD *)(v11 + v12 + 408) = v13;
      *(_QWORD *)(v11 + v12 + 416) = v14;
    }
  }
  if ( (byte_1C00769C4 & 1) != 0 )
    McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer(a6, v11 + v12 + 416, v11 + 408 + v12, *((_QWORD *)a1 + 2), v7, v10);
  return v10;
}
