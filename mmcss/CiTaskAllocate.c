__int64 __fastcall CiTaskAllocate(wchar_t *P, _OWORD *a2, __int64 *a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( (int)CiTaskLocate(P, &v14) >= 0 )
  {
    v13 = -1073741771;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1953658433LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = a2[1];
      *(_OWORD *)Pool2 = *a2;
      v9 = a2[2];
      *(_OWORD *)(Pool2 + 16) = v8;
      *(_OWORD *)(Pool2 + 32) = v9;
      *(_QWORD *)(Pool2 + 24) = P;
      v10 = (struct _LIST_ENTRY *)(Pool2 + 8);
      Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink->Flink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
        __fastfail(3u);
      v10->Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
      v10->Blink = Blink;
      Blink->Flink = v10;
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v10;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    v13 = -1073741801;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_62da978b8000316eb1e6fce22b5cf66e_Traceguids,
      v13);
  ExFreePoolWithTag(P, 0);
  return v13;
}
