/*
 * XREFs of HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C0032908
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C0024AA0 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(unsigned int *a1)
{
  unsigned int *v1; // rdi
  _DWORD *v2; // rsi
  unsigned int *v3; // rbx
  unsigned int v4; // r14d
  int v5; // ebp
  __int64 v6; // rcx
  unsigned __int16 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // r11d

  v1 = (unsigned int *)*((_QWORD *)a1 + 264);
  v2 = a1 + 433;
  v3 = a1;
  v4 = 4065;
  v5 = 0;
  if ( a1[64] == a1[433] )
  {
    if ( RtlCompareMemory(a1 + 433, *((const void **)a1 + 264), 0xAuLL) == 10 )
    {
      if ( *v2 <= 0x1000u )
      {
        a1 = (unsigned int *)((char *)v1 + 10);
        v8 = (unsigned __int64)v1 + *v1;
        while ( (unsigned __int64)a1 < v8 )
        {
          if ( (unsigned __int64)a1 + 14 > v8 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 73;
            goto LABEL_29;
          }
          v9 = *a1;
          if ( (int)v8 - (int)a1 < (unsigned int)v9 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 74;
            goto LABEL_29;
          }
          if ( (unsigned int)v9 < 0xE )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 75;
            goto LABEL_29;
          }
          if ( a1[1] - 1 > 6 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 76;
            goto LABEL_29;
          }
          v10 = *((unsigned __int16 *)a1 + 4);
          if ( (int)v10 + 14 > (unsigned int)v9 || !*((_WORD *)a1 + 4) || (v10 & 1) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 77;
            goto LABEL_29;
          }
          if ( !*((_WORD *)a1 + 5) || *((_WORD *)a1 + ((unsigned __int64)*((unsigned __int16 *)a1 + 4) >> 1) + 4) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 78;
            goto LABEL_29;
          }
          v11 = *(unsigned int *)((char *)a1 + v10 + 10);
          if ( (unsigned int)v10 > ~v11 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 79;
            goto LABEL_29;
          }
          if ( (unsigned int)(v11 + v10) > 0xFFFFFFF1 || v11 + (int)v10 + 14 > (unsigned int)v9 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v7 = 80;
            goto LABEL_29;
          }
          if ( ++v5 == *((unsigned __int16 *)v1 + 4) )
            break;
          a1 = (unsigned int *)((char *)a1 + v9);
        }
        if ( v5 == *((unsigned __int16 *)v1 + 4) )
          return 4077;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v7 = 81;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v7 = 72;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v7 = 71;
    }
LABEL_29:
    v6 = *((_QWORD *)v3 + 1);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v6 = *((_QWORD *)a1 + 1);
    v7 = 70;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), 2u, 5u, v7, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
LABEL_31:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)a1,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR,
      (const GUID *)(v3 + 379),
      *((_QWORD *)v3 + 3));
  return v4;
}
