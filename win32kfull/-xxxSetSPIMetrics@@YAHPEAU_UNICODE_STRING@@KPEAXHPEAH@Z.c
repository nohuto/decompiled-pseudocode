// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetSPIMetrics(
        struct _UNICODE_STRING *a1,
        int a2,
        struct tagMINIMIZEDMETRICS *a3,
        int a4,
        int *a5)
{
  int v8; // eax
  int v9; // ecx
  int v11; // ebx
  void *v12; // rax

  *a5 = 0;
  switch ( a2 )
  {
    case ',':
      v8 = xxxSPISetMinMetrics(a1, a3, a4);
LABEL_3:
      v9 = v8;
      goto LABEL_4;
    case '"':
      if ( (unsigned int)ValidateExternalLogFont(a3) )
      {
        v8 = SPISetIconTitleFont(a1, (struct tagLOGFONTW *)a3, a4);
        goto LABEL_3;
      }
      break;
    case '*':
      if ( (unsigned int)ValidateExternalLogFont((char *)a3 + 24)
        && (unsigned int)ValidateExternalLogFont((char *)a3 + 124)
        && (unsigned int)ValidateExternalLogFont((char *)a3 + 224)
        && (unsigned int)ValidateExternalLogFont((char *)a3 + 316)
        && (unsigned int)ValidateExternalLogFont((char *)a3 + 408) )
      {
        v8 = xxxSPISetNCMetrics(a1, a3, a4);
        goto LABEL_3;
      }
      break;
    case '.':
      if ( (unsigned int)ValidateExternalLogFont((char *)a3 + 16) )
      {
        v8 = SPISetIconMetrics(a1, a3, a4);
        goto LABEL_3;
      }
      break;
    case 'I':
      v11 = *((_DWORD *)a3 + 1);
      v12 = (void *)ReferenceDwmApiPort(a1);
      DwmAsyncNotifyAnimationChange(v12, v11, 0LL);
      if ( a4 )
      {
        v9 = SetWindowMetricInt(a1, 0x95u, v11);
        if ( !v9 )
          return 1LL;
      }
      else
      {
        v9 = 0;
      }
      if ( v11 )
        gdwPUDFlags |= 0x10000u;
      else
        gdwPUDFlags &= ~0x10000u;
LABEL_4:
      *a5 = v9;
      return 1LL;
  }
  UserSetLastError(87);
  return 0LL;
}
