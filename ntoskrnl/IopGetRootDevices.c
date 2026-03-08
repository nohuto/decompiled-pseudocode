/*
 * XREFs of IopGetRootDevices @ 0x14081CBA8
 * Callers:
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140778448 (_CmGetMatchingFilteredDeviceList.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  void *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int inited; // ebx
  unsigned int v5; // r14d
  const WCHAR *v6; // rdi
  int MatchingFilteredDeviceList; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  PVOID *v14; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v18; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  Pool2 = 0LL;
  DestinationString = 0LL;
  Src = (void *)ExAllocatePool2(256LL, 1024LL, 1684303952LL);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)((char *)&v16 + 4) = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v18 = 2048;
  inited = -1073741789;
  v5 = 0;
  do
  {
    if ( v5 >= 5 )
      goto LABEL_22;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v18, 1684303952LL);
    v6 = (const WCHAR *)Pool2;
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_22;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"Root",
                                   1,
                                   0LL,
                                   0LL,
                                   (__int64)Pool2,
                                   v18,
                                   (__int64)&v18);
    ++v5;
    inited = MatchingFilteredDeviceList;
  }
  while ( MatchingFilteredDeviceList == -1073741789 );
  if ( MatchingFilteredDeviceList >= 0 )
  {
    LODWORD(v16) = 0;
    while ( *v6 )
    {
      inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_29;
      inited = RtlInitUnicodeStringEx(&DestinationString, v6);
      if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
      {
        ZwClose(Handle);
        break;
      }
      ZwClose(Handle);
      if ( inited < 0 )
        goto LABEL_29;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      v6 += v8 + 1;
    }
    inited = v16;
    if ( (int)v16 >= 0 )
    {
      v9 = DWORD2(v16);
      if ( DWORD2(v16) )
      {
        v10 = (_DWORD *)ExAllocatePool2(256LL, 8LL * DWORD2(v16) + 16, 1684303952LL);
        v11 = v10;
        if ( v10 )
        {
          v12 = Src;
          *v10 = v9;
          memmove(v10 + 2, v12, 8 * v9);
          *a1 = v11;
          goto LABEL_22;
        }
        inited = -1073741670;
        goto LABEL_31;
      }
LABEL_30:
      inited = -1073741823;
      goto LABEL_31;
    }
LABEL_29:
    v9 = DWORD2(v16);
    if ( !DWORD2(v16) )
      goto LABEL_30;
    if ( inited >= 0 )
      goto LABEL_22;
LABEL_31:
    if ( (_DWORD)v9 )
    {
      v14 = (PVOID *)Src;
      do
      {
        ObfDereferenceObject(*v14++);
        --v9;
      }
      while ( v9 );
    }
  }
LABEL_22:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(Src, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
