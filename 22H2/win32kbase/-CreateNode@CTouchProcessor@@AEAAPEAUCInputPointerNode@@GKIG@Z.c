/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C488
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FDA8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C0191B38 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0191C54 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0191CFC (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C468 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        struct _KTHREAD **this,
        __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  __int16 v7; // r14
  char *v9; // rbx
  __int16 v10; // dx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  __int16 v16; // dx
  _QWORD *v17; // rax
  struct _KTHREAD *v18; // rcx
  char *v19; // rdi
  __int64 v20; // rax

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      233,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7998);
  if ( a3 < 2 || a3 > 3 && a3 != 5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      7,
      234,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids,
      a3);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 235;
    goto LABEL_38;
  }
  v9 = (char *)Win32AllocPoolZInit(0x120uLL, 1885958997LL);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      236,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 237;
LABEL_38:
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    return 0LL;
  }
  if ( isRootPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId((CTouchProcessor *)this);
  }
  else if ( isChildPartition() )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId((CTouchProcessor *)this, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId((CTouchProcessor *)this);
  }
  *((_WORD *)v9 + 16) = NextRootPointerId;
  *((_DWORD *)v9 + 14) = a3;
  *((_QWORD *)v9 + 31) = v9 + 240;
  v14 = v9 + 16;
  *((_QWORD *)v9 + 30) = v9 + 240;
  *((_QWORD *)v9 + 1) = v9;
  *((_QWORD *)v9 + 29) = v9 + 224;
  *((_QWORD *)v9 + 28) = v9 + 224;
  *((_QWORD *)v9 + 34) = v9 + 264;
  *((_QWORD *)v9 + 33) = v9 + 264;
  v15 = *((_DWORD *)v9 + 70) & 0xFFFFF4BF;
  *(_QWORD *)v9 = v9;
  *((_QWORD *)v9 + 3) = v9 + 16;
  *((_QWORD *)v9 + 2) = v9 + 16;
  *((_DWORD *)v9 + 70) = v15 | 0x480;
  *((_WORD *)v9 + 17) = v7;
  *((_WORD *)v9 + 128) = 0;
  *((_DWORD *)v9 + 13) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState((CTouchProcessor *)this, a4, (struct CInputPointerNode *)v9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        238,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    Win32FreePool((__int64)v9);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 239;
    goto LABEL_38;
  }
  if ( *((_DWORD *)v9 + 13) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8066);
  v17 = this + 9;
  v18 = this[9];
  if ( *((struct _KTHREAD ***)v18 + 1) != this + 9
    || (*(_QWORD *)v9 = v18,
        v19 = (char *)(this + 11),
        *((_QWORD *)v9 + 1) = v17,
        *((_QWORD *)v18 + 1) = v9,
        *v17 = v9,
        v20 = *(_QWORD *)v19,
        *(char **)(*(_QWORD *)v19 + 8LL) != v19) )
  {
    __fastfail(3u);
  }
  *v14 = v20;
  *((_QWORD *)v9 + 3) = v19;
  *(_QWORD *)(v20 + 8) = v14;
  *(_QWORD *)v19 = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      7,
      240,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return (struct CInputPointerNode *)v9;
}
