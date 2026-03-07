__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  unsigned __int8 *v12; // rsi
  unsigned __int8 v13; // r13
  _DWORD *DeviceNode; // rcx
  NTSTATUS InterruptConnectionData; // eax
  _DWORD *v16; // r12
  int MessageRoutingInfo; // edi
  unsigned int v18; // r9d
  char *v19; // rdx
  char v20; // di
  unsigned __int8 *Pool2; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  char v24; // al
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // r15
  __int128 v31; // xmm0
  int v32; // eax
  __int128 v33; // xmm0
  unsigned __int8 v35; // cl
  char v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  char v38; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v42; // [rsp+80h] [rbp-80h]
  unsigned __int8 **v43; // [rsp+88h] [rbp-78h]
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h]
  _OWORD v46[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v47[12]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = 0;
  v43 = a3;
  v42 = a2;
  *a3 = 0LL;
  v41 = a4;
  v40 = 0LL;
  P = 0LL;
  v38 = 0;
  v11 = 0;
  v44 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v45 = 0LL;
  memset(v46, 0, 20);
  memset(v47, 0, sizeof(v47));
  if ( !a2 || (DeviceNode = a2->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x20000) != 0 || !a4 )
    return (unsigned int)-1073741811;
  InterruptConnectionData = IopGetInterruptConnectionData(a2, &P);
  v16 = P;
  MessageRoutingInfo = InterruptConnectionData;
  if ( InterruptConnectionData < 0 )
    goto LABEL_30;
  v18 = 0;
  if ( !*(_DWORD *)P )
  {
LABEL_34:
    MessageRoutingInfo = -1073741811;
    goto LABEL_30;
  }
  v19 = (char *)P + 8;
  do
  {
    if ( (unsigned int)(*(_DWORD *)v19 - 1) > 2 )
      goto LABEL_14;
    ++v11;
    if ( a1 == 5 )
    {
      v20 = 1;
      v38 = 1;
    }
    else
    {
      if ( a1 != 3 )
        goto LABEL_14;
      if ( a7 )
      {
        if ( a7 < (unsigned __int8)v19[8] )
          goto LABEL_34;
        v13 = a7;
LABEL_14:
        v20 = v38;
        goto LABEL_15;
      }
      v20 = v38;
      if ( a6 )
      {
        v35 = v19[8];
        if ( v35 <= v13 )
          v35 = v13;
        v13 = v35;
      }
      else
      {
        v13 = 0;
      }
    }
LABEL_15:
    ++v18;
    v19 += 88;
  }
  while ( v18 < *(_DWORD *)P );
  if ( !v11 )
    goto LABEL_34;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(48 * v11 + 8), 1852403529LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v13;
    v22 = 0LL;
    for ( LODWORD(P) = 0; (unsigned int)v22 < *v16; LODWORD(P) = v22 )
    {
      v23 = &v16[22 * v22 + 2];
      if ( (unsigned int)(*(_DWORD *)v23 - 1) <= 2 )
      {
        if ( v20 )
        {
          v24 = 0;
        }
        else if ( v13 )
        {
          v24 = v13;
        }
        else
        {
          v24 = *((_BYTE *)v23 + 8);
        }
        v25 = *((_OWORD *)v23 + 1);
        v36 = v24;
        v26 = *((_DWORD *)v12 + 1);
        *(_OWORD *)&v47[1] = *(_OWORD *)v23;
        v27 = *((_OWORD *)v23 + 2);
        *(_OWORD *)&v47[3] = v25;
        LODWORD(v47[0]) = 1;
        v28 = *((_OWORD *)v23 + 3);
        *(_OWORD *)&v47[5] = v27;
        v29 = *((_OWORD *)v23 + 4);
        *(_OWORD *)&v47[7] = v28;
        *(_QWORD *)&v28 = v23[10];
        *(_OWORD *)&v47[9] = v29;
        v47[11] = v28;
        MessageRoutingInfo = IopConnectInterrupt(&v40, (ULONG_PTR)v42, 0LL, v41, a5, v26, a6, v36, 1, v37, (__int64)v47);
        if ( MessageRoutingInfo < 0 )
          goto LABEL_30;
        v30 = 6LL * *((unsigned int *)v12 + 1);
        if ( *(_DWORD *)v23 == 3 )
        {
          v31 = *(_OWORD *)(v23 + 3);
          DWORD2(v44) = *((_DWORD *)v23 + 1);
          v32 = *((_DWORD *)v23 + 18);
          v45 = v31;
          LODWORD(v44) = 0;
          v33 = *(_OWORD *)(v23 + 5);
          LODWORD(v46[0]) = v32;
          *(_OWORD *)((char *)v46 + 4) = v33;
          MessageRoutingInfo = HalGetMessageRoutingInfo((int *)&v44, v47);
          if ( MessageRoutingInfo < 0 )
            goto LABEL_30;
          v23 = &v47[1];
        }
        *(_QWORD *)&v12[8 * v30 + 8] = v23[9];
        *(_DWORD *)&v12[8 * v30 + 32] = *((_DWORD *)v23 + 20);
        *(_QWORD *)&v12[8 * v30 + 16] = v23[3];
        *(_QWORD *)&v12[8 * v30 + 24] = v40 + 112;
        *(_DWORD *)&v12[8 * v30 + 36] = *((_DWORD *)v23 + 1);
        v12[8 * v30 + 40] = *((_BYTE *)v23 + 8);
        *(_DWORD *)&v12[8 * v30 + 44] = *((_DWORD *)v23 + 4);
        *(_DWORD *)&v12[8 * v30 + 48] = *((_DWORD *)v23 + 3);
        ++*((_DWORD *)v12 + 1);
      }
      v20 = v38;
      v22 = (unsigned int)((_DWORD)P + 1);
    }
    MessageRoutingInfo = 0;
    *v43 = v12;
  }
  else
  {
    MessageRoutingInfo = -1073741670;
  }
LABEL_30:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( MessageRoutingInfo < 0 && v12 )
  {
    if ( *((_DWORD *)v12 + 1) )
    {
      do
        IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[48 * v7++ + 24]);
      while ( v7 < *((_DWORD *)v12 + 1) );
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)MessageRoutingInfo;
}
