__int64 __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, int a2)
{
  char v4; // r15
  unsigned __int8 v5; // bp
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v12; // r13
  __int64 v13; // r10
  int v14; // r11d
  unsigned int *v15; // rdx
  unsigned int Ulong; // eax
  unsigned int *v17; // rdx
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h] BYREF
  int FrameNumber; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = 1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063310);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 88LL);
  if ( KeGetCurrentIrql() < 2u )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v6 + 8));
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &USBXHCI_ETW_EVENT_INTERRUPT_V1, v9, *(unsigned int *)(v6 + 32));
  v10 = *(_QWORD *)(v6 + 8);
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v10 + 664) )
  {
    v12 = MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)(*(_QWORD *)(v10 + 752) + 15000000LL) )
    {
      FrameNumber = Controller_GetFrameNumber(v10, 0LL, &v19, &v20);
      if ( !v19 )
      {
        if ( v20 )
        {
          ++*(_DWORD *)(v10 + 812);
        }
        else
        {
          KeQueryPerformanceCounter(0LL);
          if ( (unsigned __int8)Controller_AreFrameAndTimeDeltaValuesValid(
                                  (unsigned int)(FrameNumber - *(_DWORD *)(v10 + 776)),
                                  v12 - *(_QWORD *)(v10 + 760)) )
          {
            *(_QWORD *)(v10 + 792) = v13 - *(_QWORD *)(v10 + 728);
            *(_QWORD *)(v10 + 800) = (unsigned int)(8 * (v14 - *(_DWORD *)(v10 + 736)) - *(_DWORD *)(v10 + 744));
          }
          else
          {
            ++*(_DWORD *)(v10 + 808);
          }
          *(_QWORD *)(v10 + 768) = v13;
          *(_QWORD *)(v10 + 760) = v12;
          *(_DWORD *)(v10 + 776) = v14;
        }
        *(_QWORD *)(v10 + 752) = v12;
      }
    }
  }
  if ( a2 )
  {
    ++*(_DWORD *)(v6 + 40);
    Interrupter_DeferToDpcOrWorkItem(a1);
  }
  else if ( (*(_DWORD *)(v6 + 96) & 1) != 0 )
  {
    ++*(_DWORD *)(v6 + 40);
    if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_1C0063310)
                              + 8)
                  + 601LL) )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3328))(WdfDriverGlobals, a1);
    else
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1136))(WdfDriverGlobals, a1);
  }
  else
  {
    v15 = *(unsigned int **)(v6 + 24);
    if ( *(_BYTE *)(v7 + 137) )
      Ulong = *v15;
    else
      Ulong = XilRegister_ReadUlong(v7, v15);
    if ( (Ulong & 1) != 0 )
    {
      v17 = *(unsigned int **)(v6 + 24);
      if ( *(_BYTE *)(v7 + 137) )
      {
        *v17 = Ulong;
        _InterlockedOr(v18, 0);
      }
      else
      {
        XilRegister_WriteUlong(v7, v17, Ulong);
      }
      ++*(_DWORD *)(v6 + 40);
      Interrupter_DeferToDpcOrWorkItem(a1);
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v4 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v6 + 8));
  return v5;
}
