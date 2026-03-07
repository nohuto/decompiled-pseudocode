void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  _DWORD *v6; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  struct _MDL *v13; // rcx
  __int64 v14; // r8

  v3 = *(_QWORD *)(a2 + 48);
  if ( *(_WORD *)(v3 + 2) == 8
    || *(_WORD *)(v3 + 2) == 9
    || *(_WORD *)(v3 + 2) == 10
    || *(_WORD *)(v3 + 2) == 50
    || *(_WORD *)(v3 + 2) == 55
    || *(_WORD *)(v3 + 2) == 56
    || (unsigned int)*(unsigned __int16 *)(v3 + 2) - 57 > 1 )
  {
    v6 = (_DWORD *)(v3 + 36);
  }
  else
  {
    v6 = (_DWORD *)(v3 + 52);
  }
  *v6 = *(_DWORD *)(a2 + 108);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(_DWORD *)(a2 + 68), a3);
  *(_DWORD *)(v11 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073737728 )
  {
    switch ( UsbdStatusFromTrbCompletionCode )
    {
      case -1073737728:
        v12 = -1073741670;
        goto LABEL_7;
      case -2147483136:
      case -2147482880:
      case -2147482112:
      case -1073739264:
        v12 = -1073741811;
        goto LABEL_7;
      case -1073738240:
        v12 = -1073741637;
        goto LABEL_7;
    }
    goto LABEL_33;
  }
  if ( UsbdStatusFromTrbCompletionCode == -1073676288 )
  {
    v12 = -1073741536;
    goto LABEL_7;
  }
  if ( UsbdStatusFromTrbCompletionCode != -1073713152 )
  {
    if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
    {
      v12 = 0;
      goto LABEL_7;
    }
LABEL_33:
    v12 = -1073741823;
    goto LABEL_7;
  }
  v12 = -1073741810;
LABEL_7:
  *(_DWORD *)(a2 + 72) = v12;
  ++*(_DWORD *)(v10 + 240);
  *(_QWORD *)(v10 + 248) += *(unsigned int *)(a2 + 108);
  if ( *(int *)(a2 + 72) < 0 )
    ++*(_DWORD *)(v10 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqdD(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
      v8,
      v9);
  if ( *(_QWORD *)(a2 + 96) )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  v13 = *(struct _MDL **)(a2 + 80);
  if ( v13 )
  {
    if ( (v14 = *(_QWORD *)(a2 + 48), *(_WORD *)(v14 + 2) != 8)
      && *(_WORD *)(v14 + 2) != 9
      && *(_WORD *)(v14 + 2) != 10
      && *(_WORD *)(v14 + 2) != 50
      && *(_WORD *)(v14 + 2) != 55
      && *(_WORD *)(v14 + 2) != 56
      && (unsigned int)*(unsigned __int16 *)(v14 + 2) - 57 < 2
      || v13 != *(struct _MDL **)(v14 + 48) )
    {
      if ( v13 != *(struct _MDL **)(*(_QWORD *)(a2 + 56) + 120LL) )
      {
        IoFreeMdl(v13);
        *(_QWORD *)(a2 + 80) = 0LL;
      }
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
