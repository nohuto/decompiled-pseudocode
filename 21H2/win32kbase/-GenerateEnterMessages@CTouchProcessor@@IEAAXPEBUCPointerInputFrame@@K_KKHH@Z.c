/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018FA14
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0197160 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A15E0 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C01CDC64 (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rbx
  const struct CPointerInputFrame *v6; // rdi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  _BYTE v15[112]; // [rsp+58h] [rbp-51h] BYREF
  char v16; // [rsp+C8h] [rbp+1Fh]
  int v17; // [rsp+C9h] [rbp+20h]
  __int16 v18; // [rsp+CDh] [rbp+24h]
  char v19; // [rsp+CFh] [rbp+26h]

  v5 = a3;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      199,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v8 = *((_QWORD *)v6 + 17) + 480 * v5;
  if ( (*(_DWORD *)(v8 + 180) & 1) != 0 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    memset(v15, 0, sizeof(v15));
    v16 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v8, a4, v6)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_LL(v10, v9, v11, 200, 585, *(_DWORD *)(v8 + 172), *(_WORD *)(v8 + 160));
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v8) )
      ApiSetEditionSendCursorSuppressionUpdate(1LL);
  }
  else
  {
    v12 = *(_DWORD *)v8;
    if ( (*(_DWORD *)v8 & 4) == 0 && (v12 & 8) != 0 || (v12 & 0x40) != 0 )
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      memset(v15, 0, sizeof(v15));
      v16 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v8, a4, v6) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_LL(v13, (_DWORD)a2, v14, 201, 585, *(_DWORD *)(v8 + 172), *(_WORD *)(v8 + 160));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        202,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
}
