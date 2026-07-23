/*
 * XREFs of PspCreatePicoThread @ 0x14090C0B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspCreateUserContext @ 0x14063D550 (PspCreateUserContext.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ebx
  int inserted; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  _QWORD v22[66]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23[154]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v24[400]; // [rsp+780h] [rbp+680h] BYREF

  memset(v22, 0, 0x208uLL);
  v6 = 0LL;
  LODWORD(v16) = 0;
  v19 = 0LL;
  memset(v24, 0, sizeof(v24));
  DmaAdapter = 0LL;
  v21 = 0LL;
  *(_OWORD *)v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    inserted = -1073741811;
    goto LABEL_18;
  }
  inserted = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)a1,
               2u,
               (POBJECT_TYPE)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    if ( *((_QWORD *)Object + 280) )
    {
      --CurrentThread->KernelApcDisable;
      v11 = 1;
      if ( ExAcquireRundownProtection(v6 + 139) )
      {
        v11 = 3;
        ObfReferenceObjectWithTag(v6, 0x72437350u);
        memset(v23, 0, sizeof(v23));
        PspCreateUserContext((__int64)v23, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
        v13 = *(_QWORD *)(a1 + 8);
        HIWORD(v23[7]) = *(_WORD *)(a1 + 56);
        LOWORD(v23[8]) = *(_WORD *)(a1 + 58);
        v20[1] = *(_QWORD *)(a1 + 40);
        v21 = *(_QWORD *)(a1 + 48);
        v23[15] = *(_QWORD *)(a1 + 64);
        v23[18] = *(_QWORD *)(a1 + 72);
        v23[22] = *(_QWORD *)(a1 + 96);
        v23[21] = *(_QWORD *)(a1 + 104);
        v23[20] = *(_QWORD *)(a1 + 112);
        v23[23] = *(_QWORD *)(a1 + 120);
        v23[24] = *(_QWORD *)(a1 + 128);
        v23[25] = *(_QWORD *)(a1 + 136);
        v23[26] = *(_QWORD *)(a1 + 144);
        v23[27] = *(_QWORD *)(a1 + 152);
        v23[28] = *(_QWORD *)(a1 + 160);
        v23[29] = *(_QWORD *)(a1 + 168);
        v23[30] = *(_QWORD *)(a1 + 176);
        v23[19] = v13;
        LODWORD(v16) = 1;
        v20[0] = 0LL;
        inserted = PspAllocateThread(
                     (ULONG_PTR)v6,
                     0LL,
                     0,
                     0LL,
                     (__int64)v23,
                     v20,
                     0LL,
                     0LL,
                     (int *)&v16,
                     &DmaAdapter,
                     0LL,
                     (_DMA_OPERATIONS **)v24);
        if ( inserted < 0 )
        {
          DmaAdapter = 0LL;
LABEL_17:
          ExReleaseRundownProtection(v6 + 139);
          goto LABEL_18;
        }
        v14 = 0LL;
        if ( a2 )
        {
          v22[57] = a2;
          v14 = v22;
        }
        *(_QWORD *)&DmaAdapter[94].Version = *(_QWORD *)(a1 + 184);
        inserted = PspInsertThread(
                     (ULONG_PTR)DmaAdapter,
                     (ULONG_PTR)v6,
                     0LL,
                     &v16,
                     0x1FFFFF,
                     0LL,
                     (__int64)v14,
                     0LL,
                     (PACCESS_STATE)v24,
                     (PVOID *)&v19,
                     0LL);
        if ( inserted >= 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&DmaAdapter[81], 0x14u);
          inserted = 0;
          v6 = (struct _EX_RUNDOWN_REF *)Object;
          *a3 = v19;
        }
      }
      else
      {
        inserted = -1073741558;
      }
    }
    else
    {
      inserted = -1073741816;
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v11 >= 2 )
    goto LABEL_17;
LABEL_18:
  if ( (v11 & 1) != 0 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
  return (unsigned int)inserted;
}
