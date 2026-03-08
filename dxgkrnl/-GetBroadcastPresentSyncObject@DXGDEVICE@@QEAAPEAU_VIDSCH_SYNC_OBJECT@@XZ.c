/*
 * XREFs of ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02E63B8
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rdx
  int v4; // ecx
  _DWORD v6[20]; // [rsp+50h] [rbp-58h] BYREF

  v1 = (char *)this + 208;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 208));
  if ( !*((_QWORD *)this + 240) )
  {
    memset(v6, 0, sizeof(v6));
    v3 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = 3;
    if ( *(int *)(v3[2] + 2820LL) >= 2400 )
      v4 = 5;
    v6[0] = v4;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(v3[92] + 8LL)
                                                                                                  + 608LL))(
           v3[93],
           0LL,
           v6,
           10LL,
           0LL,
           0LL,
           (char *)this + 1920,
           0LL) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 240);
}
