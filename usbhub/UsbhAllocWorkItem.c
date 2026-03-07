struct _LIST_ENTRY *__fastcall UsbhAllocWorkItem(
        _LIST_ENTRY *a1,
        _LIST_ENTRY *a2,
        _LIST_ENTRY *a3,
        unsigned int a4,
        int a5,
        unsigned __int8 a6)
{
  _LIST_ENTRY *Flink; // rsi
  __int64 v11; // rcx
  struct _LIST_ENTRY *Pool2; // rbx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rax
  __int64 v15; // rax
  _LIST_ENTRY *v16; // rdx
  __int64 v17; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  Flink = a1[4].Flink;
  if ( !Flink )
    goto LABEL_23;
  if ( LODWORD(Flink->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, Flink);
  if ( a5 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v11 = (__int64)&Flink[55].Blink[2
                                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Flink[55]) & HIDWORD(Flink[55].Flink))];
    *(_DWORD *)v11 = 1296783201;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = a4;
    *(_QWORD *)(v11 + 24) = a3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a4);
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    return 0LL;
  v13 = a1[4].Flink;
  if ( !v13 )
LABEL_23:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( LODWORD(v13->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1[4].Flink);
  v14 = v13[298].Flink;
  if ( !v14 || (v15 = ((__int64 (__fastcall *)(_LIST_ENTRY *, _QWORD))v14)(a1, a6)) == 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[2].Blink = (_LIST_ENTRY *)v15;
  LODWORD(Pool2->Flink) = 1230463592;
  HIDWORD(Pool2->Flink) = a5;
  HIDWORD(Pool2->Blink) = a4;
  Pool2[2].Flink = a3;
  Pool2[1].Flink = a1;
  Pool2[1].Blink = a2;
  ExInterlockedInsertTailList(Flink + 174, Pool2 + 3, (PKSPIN_LOCK)&Flink[175]);
  if ( HIDWORD(Pool2->Flink) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v16 = a1[4].Flink;
    if ( v16 )
    {
      v17 = (__int64)&v16[55].Blink[2
                                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)&v16[55]) & HIDWORD(v16[55].Flink))];
      *(_DWORD *)v17 = 726485847;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 24) = Pool2;
    }
  }
  return Pool2;
}
