__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  NTSTATUS v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rsi
  unsigned int Length; // eax
  wchar_t *Pool2; // rbx
  unsigned __int16 v9; // r9
  __int16 Size; // r14
  unsigned __int8 *v11; // rax
  __int64 v12; // rdx
  _WORD *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  void *v17; // rcx
  struct _KEVENT *v18; // r13
  unsigned __int8 *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rbp
  size_t v23; // rbx

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 42LL, 1681082453LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v3 = -1073741670;
        goto LABEL_36;
      }
      v9 = 53;
LABEL_5:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      goto LABEL_6;
    }
    v3 = RtlStringCbPrintfW(
           Pool2,
           0x2AuLL,
           L"Port_#%04d.Hub_#%04d",
           *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
           *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0x36u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v3);
      ExFreePoolWithTag(Pool2, 0x64334855u);
      goto LABEL_36;
    }
    a2->IoStatus.Information = (unsigned __int64)Pool2;
LABEL_35:
    v3 = 0;
    goto LABEL_36;
  }
  if ( !Length && *(_BYTE *)(v6 + 2003) && (*(_DWORD *)(v6 + 1644) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v11 = *(unsigned __int8 **)(v6 + 2024);
      if ( v11 )
      {
        v12 = *v11;
        if ( (unsigned __int8)v12 > 2u )
        {
          v13 = v11 + 2;
          v14 = v12 - 2;
          v15 = 0;
          v16 = v14 >> 1;
          if ( (_DWORD)v16 )
          {
            do
            {
              if ( !*v13 )
                break;
              if ( *v13 == Size )
                goto LABEL_23;
              ++v15;
              ++v13;
            }
            while ( v15 < (unsigned int)v16 );
          }
        }
      }
    }
    Size = 1033;
LABEL_23:
    if ( Size == *(_WORD *)(v6 + 2040) )
    {
      v18 = (struct _KEVENT *)(v6 + 472);
    }
    else
    {
      v17 = *(void **)(v6 + 2032);
      *(_WORD *)(v6 + 2040) = Size;
      if ( v17 )
        ExFreePoolWithTag(v17, 0x64334855u);
      v18 = (struct _KEVENT *)(v6 + 472);
      *(_QWORD *)(v6 + 2032) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 472));
      HUBSM_AddEvent(v6 + 504, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 472));
    }
    v19 = *(unsigned __int8 **)(v6 + 2032);
    if ( v19
      || Size != 1033
      && (*(_WORD *)(v6 + 2040) = 1033,
          KeClearEvent(v18),
          HUBSM_AddEvent(v6 + 504, 4087),
          HUBMISC_WaitForSignal(v18),
          (v19 = *(unsigned __int8 **)(v6 + 2032)) != 0LL) )
    {
      v20 = (unsigned __int16)((((unsigned __int64)*v19 - 2) >> 1) + 1);
      v21 = (char *)ExAllocatePool2(64LL, 2 * v20, 1681082453LL);
      v22 = v21;
      if ( !v21 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v9 = 55;
        goto LABEL_5;
      }
      v23 = 2 * v20 - 2;
      memmove(v21, (const void *)(*(_QWORD *)(v6 + 2032) + 2LL), v23);
      *(_WORD *)&v22[v23] = 0;
      a2->IoStatus.Information = (unsigned __int64)v22;
      goto LABEL_35;
    }
  }
LABEL_36:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
