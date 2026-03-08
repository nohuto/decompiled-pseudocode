/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x140853C50
 * Callers:
 *     IoConnectInterruptEx @ 0x1406F4AE0 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x1406F5728 (IopGetInterruptConnectionData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopConnectLineBasedInterrupt(
        struct _DEVICE_OBJECT *a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  _QWORD *v6; // rdi
  unsigned int v7; // r15d
  _DWORD *DeviceNode; // r9
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned int *v11; // rsi
  unsigned int v12; // r14d
  unsigned __int8 v13; // dl
  char *v14; // r8
  __int64 v15; // r9
  char v16; // al
  char v17; // r12
  __int64 Pool2; // rax
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  _QWORD *v29; // rsi
  __int64 v30; // r14
  __int64 v31; // [rsp+50h] [rbp-89h]
  PVOID P[2]; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v33[20]; // [rsp+78h] [rbp-61h] BYREF

  P[0] = 0LL;
  v6 = 0LL;
  *a2 = 0LL;
  v7 = 0;
  if ( !a1 )
    return -1073741811;
  DeviceNode = a1->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 || !a3 )
    return -1073741811;
  result = IopGetInterruptConnectionData(a1, P);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = (unsigned int *)P[0];
    if ( P[0] )
    {
      v12 = 0;
      v13 = 0;
      if ( *(_DWORD *)P[0] )
      {
        v14 = (char *)P[0] + 8;
        v15 = *(unsigned int *)P[0];
        do
        {
          if ( !*(_DWORD *)v14 )
          {
            ++v12;
            v16 = v13;
            if ( v13 < (unsigned __int8)v14[8] )
              v16 = v14[8];
            v13 = v16;
          }
          v14 += 88;
          --v15;
        }
        while ( v15 );
        if ( v12 )
        {
          v17 = a6;
          if ( !a6 )
          {
            v17 = v13;
LABEL_17:
            Pool2 = ExAllocatePool2(64LL, 8 * v12 + 296, 1852403529LL);
            v6 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              *(_BYTE *)(Pool2 + 288) = v17;
              *(_DWORD *)(Pool2 + 292) = v12;
              memset((char *)v33 + 4, 0, 0x5CuLL);
              v19 = 0;
              for ( LODWORD(v33[0]) = 1; v19 < *v11; ++v19 )
              {
                v20 = 22LL * v19;
                if ( !v11[v20 + 2] )
                {
                  v21 = *(_OWORD *)&v11[v20 + 6];
                  *(_OWORD *)&v33[1] = *(_OWORD *)&v11[v20 + 2];
                  v22 = *(_OWORD *)&v11[v20 + 10];
                  *(_OWORD *)&v33[3] = v21;
                  v23 = *(_OWORD *)&v11[v20 + 14];
                  *(_OWORD *)&v33[5] = v22;
                  v24 = *(_OWORD *)&v11[v20 + 18];
                  *(_OWORD *)&v33[7] = v23;
                  v33[11] = *(_QWORD *)&v11[v20 + 22];
                  *(_OWORD *)&v33[9] = v24;
                  v10 = IopConnectInterrupt(&v6[v7 + 37], (ULONG_PTR)a1, a3, 0LL, a4, 0, a5, v17, 1, v31, (__int64)v33);
                  if ( v10 < 0 )
                    goto LABEL_25;
                  if ( ++v7 >= v12 )
                    break;
                }
              }
              v25 = 2LL;
              v26 = v6;
              v27 = (_OWORD *)(v6[37] + 112LL);
              do
              {
                *v26 = *v27;
                v26[1] = v27[1];
                v26[2] = v27[2];
                v26[3] = v27[3];
                v26[4] = v27[4];
                v26[5] = v27[5];
                v26[6] = v27[6];
                v26 += 8;
                v28 = v27[7];
                v27 += 8;
                *(v26 - 1) = v28;
                --v25;
              }
              while ( v25 );
              *v26 = *v27;
              v26[1] = v27[1];
              *a2 = v6;
            }
            else
            {
              v10 = -1073741670;
            }
            goto LABEL_25;
          }
          if ( a6 >= v13 )
            goto LABEL_17;
        }
      }
      v10 = -1073741811;
LABEL_25:
      ExFreePoolWithTag(v11, 0);
      if ( v10 < 0 && v6 )
      {
        if ( v7 )
        {
          v29 = v6 + 37;
          v30 = v7;
          do
          {
            IoDisconnectInterrupt((PKINTERRUPT)(*v29++ + 112LL));
            --v30;
          }
          while ( v30 );
        }
        ExFreePoolWithTag(v6, 0);
      }
      return v10;
    }
  }
  return result;
}
