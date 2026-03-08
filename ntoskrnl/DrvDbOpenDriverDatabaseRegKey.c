/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984
 * Callers:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407FF728 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A68A5C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     DrvDbCreateDatabaseNode @ 0x14081DF10 (DrvDbCreateDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140865E78 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1408661B4 (DrvDbFindDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A6ACC0 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        _QWORD *a1,
        const wchar_t *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  __int64 v11; // r9
  int DatabaseNode; // eax
  int v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+50h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, v18, v11);
    v13 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v13;
      v13 = DrvDbCreateDatabaseNode(a1, a2, 0LL, 0LL, 0LL, 16, 0LL, 0LL, v18);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v10 = 1;
    }
    else if ( DatabaseNode < 0 )
    {
      return (unsigned int)v13;
    }
  }
  else
  {
    v18[0] = a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  v15 = v18[0];
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 152), 1u);
  if ( (*(_DWORD *)(v15 + 64) & 1) != 0 || (v13 = DrvDbLoadDatabaseNode(a1, v15), v13 >= 0) )
  {
    if ( *a1 )
      v16 = *(_QWORD *)(*a1 + 224LL);
    else
      v16 = 0LL;
    v13 = SysCtxRegOpenKey(v16, *(_QWORD *)(v15 + 96), 0LL, 0, a3, a5);
    if ( (*(_DWORD *)(v15 + 64) & 1) == 0 )
      DrvDbUnloadDatabaseNode(a1, v15);
    if ( v13 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v15 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v18[0]);
  return (unsigned int)v13;
}
