/*
 * XREFs of ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0380730
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned int a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        unsigned int a8,
        const struct tagRECT *a9,
        unsigned int Size,
        unsigned __int8 *a11)
{
  unsigned int v12; // r14d
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  struct DXGKVMB_COMMAND_BASE *v16; // rbx
  int v17; // eax
  __int64 v18; // rsi
  struct _MDL *v19; // [rsp+20h] [rbp-1A8h]
  struct DXGKVMB_COMMAND_BASE *v23[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v24; // [rsp+80h] [rbp-148h]

  v12 = 16 * a8;
  if ( a8 > 0x2000 )
  {
    v13 = 11048LL;
    WdLogSingleEntry1(2LL, 11048LL);
    v14 = L"SubRectCount is invalid";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( Size > 0x20000 )
  {
    v13 = 11053LL;
    WdLogSingleEntry1(2LL, 11053LL);
    v14 = L"PrivateDriverDataSize is invalid";
    goto LABEL_3;
  }
  *(_OWORD *)v23 = 0LL;
  v24 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v23, this, v12 + Size + 80, 0LL, 0LL, 0LL);
  v16 = v23[0];
  if ( v23[0] )
  {
    *(_QWORD *)v23[0] = 0LL;
    *((_DWORD *)v16 + 2) = 0;
    *((_BYTE *)v16 + 12) = 0;
    *((_DWORD *)v16 + 3) &= 0x1FFu;
    *((_QWORD *)v16 + 2) = 38LL;
    *((_DWORD *)v16 + 2) = *((_DWORD *)a2 + 126);
    *((_DWORD *)v16 + 6) = *(_DWORD *)(*((_QWORD *)a3 + 2) + 472LL);
    *((_DWORD *)v16 + 7) = *((_DWORD *)a3 + 7);
    *((_DWORD *)v16 + 8) = a4;
    *((_DWORD *)v16 + 9) = a5;
    *(struct tagRECT *)((char *)v16 + 40) = *a6;
    *(struct tagRECT *)((char *)v16 + 56) = *a7;
    *((_DWORD *)v16 + 18) = a8;
    *((_DWORD *)v16 + 19) = Size;
    if ( a8 )
      memmove((char *)v16 + 80, a9, v12);
    if ( Size )
    {
      if ( &a11[Size] < a11 || (unsigned __int64)&a11[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v16 + v12 + 80, a11, Size);
    }
    v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v23[1], v23[0], v24, v19);
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendBlt failed: 0x%I64x", v18, 0LL, 0LL, 0LL, 0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v23);
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(6LL, 11061LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate input buffer",
      11061LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v23);
    return 3221225495LL;
  }
}
