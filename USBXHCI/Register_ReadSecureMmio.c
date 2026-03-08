/*
 * XREFs of Register_ReadSecureMmio @ 0x1C003EE08
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUchar @ 0x1C0018904 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadBufferUlong @ 0x1C001A920 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong64 @ 0x1C003F338 (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x1C003F39C (XilRegister_ReadUshort.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00136C0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, int a3, unsigned int a4, void *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // edx
  int *Pool2; // rbx
  __int64 v16; // rax
  int v17; // edx
  __int64 v19; // [rsp+38h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  __int128 v21; // [rsp+48h] [rbp-39h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+64h] [rbp-1Dh]
  __int64 v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+70h] [rbp-11h]
  unsigned int v27; // [rsp+74h] [rbp-Dh]
  __int64 v28; // [rsp+78h] [rbp-9h] BYREF
  int v29; // [rsp+80h] [rbp-1h]

  v28 = 0LL;
  v29 = 0;
  v8 = 8LL;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v11 = 2LL;
        break;
      case 2:
        v11 = 4LL;
        break;
      case 3:
        v11 = 8LL;
        break;
      default:
        v9 = a4;
LABEL_6:
        v10 = 0;
        goto LABEL_7;
    }
  }
  else
  {
    v11 = 1LL;
  }
  v9 = a4;
  v12 = v11 * a4;
  if ( v11 * (unsigned __int64)a4 > 0xFFFFFFFF )
    goto LABEL_6;
  if ( !v12 )
    goto LABEL_6;
  v10 = v12 + 8;
  if ( v12 + 8 < v12 )
    goto LABEL_6;
  if ( v10 < 0x10 )
    v10 = 16;
LABEL_7:
  switch ( a3 )
  {
    case 0:
      v8 = 1LL;
LABEL_25:
      v13 = v8 * v9;
      if ( v13 <= 0xFFFFFFFF )
        goto LABEL_27;
      break;
    case 1:
      v8 = 2LL;
      goto LABEL_25;
    case 2:
      v8 = 4LL;
      goto LABEL_25;
    case 3:
      goto LABEL_25;
  }
  LODWORD(v13) = 0;
LABEL_27:
  if ( v10 <= 0x10 )
  {
    Pool2 = (int *)&v28;
    v10 = 16;
  }
  else
  {
    Pool2 = (int *)ExAllocatePool2(64LL, v10, 1229146200LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_L(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v14,
          6,
          74,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v10);
      }
      return;
    }
  }
  v16 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  v24 = 0;
  v22 = v16;
  v25 = a2;
  v21 = 0LL;
  v23 = 10;
  v26 = a3;
  v27 = a4;
  if ( (int)SecureChannel_SendRequestSynchronously(v19, &v20, 56LL, Pool2, v10) >= 0 )
  {
    v17 = *Pool2;
    if ( *Pool2 >= 0 )
    {
      memmove(a5, Pool2 + 2, (unsigned int)v13);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v17,
        6,
        75,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        *Pool2);
    }
  }
  if ( Pool2 && Pool2 != (int *)&v28 )
    ExFreePoolWithTag(Pool2, 0x49434858u);
}
