/*
 * XREFs of PspCreatePicoThread @ 0x1409B27F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x1407EEA8C (PspCreateUserContext.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebx
  int inserted; // esi
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v14; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h]
  _QWORD v19[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20[154]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v21[400]; // [rsp+770h] [rbp+670h] BYREF

  memset(v19, 0, 0x1F5uLL);
  v6 = 0LL;
  LODWORD(v13) = 0;
  v16 = 0LL;
  memset(v21, 0, sizeof(v21));
  v14 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    inserted = -1073741811;
    goto LABEL_20;
  }
  inserted = ObpReferenceObjectByHandleWithTag(
               *(_QWORD *)a1,
               2,
               (__int64)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL,
               0LL);
  if ( inserted < 0 )
  {
LABEL_14:
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v8 < 2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v6 = (struct _EX_RUNDOWN_REF *)Object;
  if ( !*((_QWORD *)Object + 280) )
  {
    inserted = -1073741816;
    goto LABEL_14;
  }
  --CurrentThread->KernelApcDisable;
  v8 = 1;
  if ( !ExAcquireRundownProtection_0(v6 + 139) )
  {
    inserted = -1073741558;
    goto LABEL_14;
  }
  v8 = 3;
  ObfReferenceObjectWithTag(v6, 0x72437350u);
  memset(v20, 0, sizeof(v20));
  PspCreateUserContext((__int64)v20, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  v10 = *(_QWORD *)(a1 + 8);
  HIWORD(v20[7]) = *(_WORD *)(a1 + 56);
  LOWORD(v20[8]) = *(_WORD *)(a1 + 58);
  v17[1] = *(_QWORD *)(a1 + 40);
  v18 = *(_QWORD *)(a1 + 48);
  v20[15] = *(_QWORD *)(a1 + 64);
  v20[18] = *(_QWORD *)(a1 + 72);
  v20[22] = *(_QWORD *)(a1 + 96);
  v20[21] = *(_QWORD *)(a1 + 104);
  v20[20] = *(_QWORD *)(a1 + 112);
  v20[23] = *(_QWORD *)(a1 + 120);
  v20[24] = *(_QWORD *)(a1 + 128);
  v20[25] = *(_QWORD *)(a1 + 136);
  v20[26] = *(_QWORD *)(a1 + 144);
  v20[27] = *(_QWORD *)(a1 + 152);
  v20[28] = *(_QWORD *)(a1 + 160);
  v20[29] = *(_QWORD *)(a1 + 168);
  v20[30] = *(_QWORD *)(a1 + 176);
  v20[19] = v10;
  LODWORD(v13) = 1;
  v17[0] = 0LL;
  inserted = PspAllocateThread(
               (PRKPROCESS)v6,
               0LL,
               0,
               0LL,
               (__int64)v20,
               v17,
               0LL,
               0LL,
               (int *)&v13,
               &v14,
               0LL,
               (size_t)v21);
  if ( inserted >= 0 )
  {
    v11 = 0LL;
    if ( a2 )
    {
      memset(v19, 0, 0x1F8uLL);
      v11 = v19;
      v19[54] = a2;
    }
    *((_QWORD *)v14 + 198) = *(_QWORD *)(a1 + 184);
    inserted = PspInsertThread(
                 (ULONG_PTR)v14,
                 (__int64)v6,
                 0LL,
                 &v13,
                 0x1FFFFF,
                 0LL,
                 (__int64)v11,
                 0LL,
                 (PACCESS_STATE)v21,
                 (PVOID *)&v16,
                 0LL);
    if ( inserted >= 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v14 + 344, 0x14u);
      inserted = 0;
      v6 = (struct _EX_RUNDOWN_REF *)Object;
      *a3 = v16;
    }
    goto LABEL_14;
  }
  v14 = 0LL;
LABEL_17:
  ExReleaseRundownProtection_0(v6 + 139);
LABEL_18:
  if ( (v8 & 1) != 0 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_20:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
  return (unsigned int)inserted;
}
