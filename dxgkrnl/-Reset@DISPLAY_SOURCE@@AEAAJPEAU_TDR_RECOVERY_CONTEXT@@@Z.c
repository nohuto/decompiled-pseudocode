/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BAA38
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BA8B0 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 272) = -1;
  *((_DWORD *)this + 280) = -1;
  *((_DWORD *)this + 283) = -1;
  *((_DWORD *)this + 284) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_WORD *)this + 380) = 0;
  *((_BYTE *)this + 765) = 0;
  *((_DWORD *)this + 274) = 0;
  *((_BYTE *)this + 1116) = 0;
  *((_BYTE *)this + 704) = 0;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *((_BYTE *)this + 763) = 1;
  *((_QWORD *)this + 96) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *(_QWORD *)((char *)this + 1124) = 0LL;
  v4 = (void *)*((_QWORD *)this + 100);
  if ( v4 )
    memset(v4, 0, *((unsigned int *)this + 204));
  v5 = (void *)*((_QWORD *)this + 106);
  if ( v5 )
    memset(v5, 0, 4 * *(unsigned int *)(v3 + 2244) * (unsigned __int64)*(unsigned int *)(v3 + 2240));
  v6 = (void *)*((_QWORD *)this + 111);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v3 + 2244) * (unsigned __int64)*(unsigned int *)(v3 + 2240));
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2928LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 736) + 8LL) + 520LL))(
      *(_QWORD *)(v7 + 744),
      *((unsigned int *)this + 4),
      0LL,
      (char *)this + 1008,
      0LL);
  DISPLAY_SOURCE::ClearAllDisplayState(this);
  return 0LL;
}
