/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C538
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01894F0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C558 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FE78 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A13EC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A15E0 (WPP_RECORDER_SF_LL.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(
        struct _KTHREAD **this,
        unsigned int a2,
        struct CInputPointerNode *a3)
{
  _QWORD *v5; // rdx
  int v6; // ecx
  BOOL v7; // ebx
  int v9; // ebp
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-48h]

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1572);
  v5 = &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      7,
      59,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    v5 = &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids;
  }
  v6 = 1;
  if ( (a2 & 0x70006) == 0x10006 )
  {
    v7 = *((_DWORD *)a3 + 13) <= 1u;
  }
  else
  {
    if ( (a2 & 0x70006) == 0x20000 )
    {
      v10 = *((_DWORD *)a3 + 13) == 1;
      v9 = 3;
LABEL_23:
      v7 = v10;
      goto LABEL_30;
    }
    if ( (a2 & 0x70006) == 0x20002 )
    {
      v9 = 1;
      v7 = *((_DWORD *)a3 + 13) <= 1u;
      goto LABEL_30;
    }
    if ( (a2 & 0x70006) != 0x20006 )
    {
      if ( (a2 & 0x70006) == 0x40000 )
      {
        v9 = 3;
      }
      else
      {
        if ( (a2 & 0x70006) != 0x40002 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_L(1, (_DWORD)v5, 7, 60, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids, a2);
          }
          goto LABEL_14;
        }
        v9 = 1;
      }
      v10 = *((_DWORD *)a3 + 13) == 2;
      goto LABEL_23;
    }
    v7 = *((_DWORD *)a3 + 13) == 2;
  }
  v9 = 2;
LABEL_30:
  if ( !v7 )
    goto LABEL_15;
  if ( (a2 & 4) != 0 )
  {
    if ( (a2 & 0x1F0) == 0 )
    {
LABEL_14:
      v7 = 0;
      goto LABEL_15;
    }
    v7 = 1;
  }
  if ( (*((_DWORD *)a3 + 70) & 8) != 0 )
  {
    v7 = (a2 & 0x8000) != 0;
    if ( (a2 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1694);
  }
  if ( v7 )
  {
    *((_DWORD *)a3 + 13) = v9;
    if ( v9 == 3 )
    {
      v11 = (_QWORD *)((char *)a3 + 16);
      v12 = *((_QWORD *)a3 + 2);
      if ( (struct CInputPointerNode *)v12 != (struct CInputPointerNode *)((char *)a3 + 16) )
      {
        if ( *(_QWORD **)(v12 + 8) != v11 || (v5 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v5 != v11) )
          __fastfail(3u);
        *v5 = v12;
        *(_QWORD *)(v12 + 8) = v5;
        *((_QWORD *)a3 + 3) = (char *)a3 + 16;
        *v11 = v11;
      }
    }
    *((_DWORD *)a3 + 70) = *((_DWORD *)a3 + 70) & 0xFFFFFFF3 | ((a2 & 0x2000 | (a2 >> 1) & 0x4000) >> 11);
    goto LABEL_17;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v5) = 2;
  WPP_RECORDER_SF_LL(v6, (_DWORD)v5, (_DWORD)a3, 61, v13, a2, *((_DWORD *)a3 + 13));
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      7,
      62,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return v7;
}
