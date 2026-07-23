/*
 * XREFs of SepRmGlobalSaclSetWrkr @ 0x1407C51D0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SepRmFetchGlobalSacl @ 0x1407C526C (SepRmFetchGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140924D50 (SepRmGlobalSaclFind.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepRmGlobalSaclSetWrkr(__int64 a1, __int64 a2)
{
  SIZE_T v2; // r14
  const void *v3; // r15
  char v5; // si
  int GlobalSacl; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *PoolWithTag; // rbx
  PVOID v13; // rax
  void *v14; // rcx
  __int16 v15; // ax
  PVOID v16; // rax
  __int16 v17; // [rsp+20h] [rbp-10h] BYREF
  __int16 v18; // [rsp+22h] [rbp-Eh]
  int v19; // [rsp+24h] [rbp-Ch]
  __int64 v20; // [rsp+28h] [rbp-8h]
  int v21; // [rsp+70h] [rbp+40h] BYREF
  PVOID P; // [rsp+78h] [rbp+48h] BYREF
  PVOID v23; // [rsp+80h] [rbp+50h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp+58h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 44);
  v3 = (const void *)(a1 + 46);
  v23 = 0LL;
  v24 = 0LL;
  v21 = 0;
  P = 0LL;
  v19 = 0;
  v18 = v2;
  v17 = v2;
  v5 = 0;
  v20 = a1 + 46;
  GlobalSacl = SepRmFetchGlobalSacl(&v17, &v21, &P);
  if ( GlobalSacl >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = 1;
    ExAcquireResourceExclusiveLite(&SepRmGlobalSaclLock, 1u);
    GlobalSacl = SepRmGlobalSaclFind(&v23, &v24, &v17, 0LL);
    if ( GlobalSacl < 0 )
    {
      if ( !v21 )
        goto LABEL_2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C635347u);
      if ( PoolWithTag )
      {
        v13 = ExAllocatePoolWithTag(PagedPool, v2, 0x6C635347u);
        PoolWithTag[2] = v13;
        v14 = v13;
        if ( v13 )
        {
          v15 = v18;
          *((_WORD *)PoolWithTag + 5) = v18;
          *((_WORD *)PoolWithTag + 4) = v15;
          memmove(v14, v3, v2);
          v16 = P;
          P = 0LL;
          PoolWithTag[3] = v16;
          *PoolWithTag = SepRmGlobalSaclHead;
          SepRmGlobalSaclHead = (__int64)PoolWithTag;
          goto LABEL_2;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      GlobalSacl = -1073741801;
      goto LABEL_2;
    }
    v8 = v23;
    if ( v21 )
    {
      v9 = (void *)*((_QWORD *)v23 + 3);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v8[3] = P;
      goto LABEL_11;
    }
    if ( v24 )
      *v24 = *(_QWORD *)v23;
    else
      SepRmGlobalSaclHead = *(_QWORD *)v23;
    v10 = (void *)v8[2];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v8[2] = 0LL;
    }
    v11 = (void *)v8[3];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v8[3] = 0LL;
    }
    ExFreePoolWithTag(v8, 0);
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
LABEL_11:
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a2 + 40) = GlobalSacl;
}
