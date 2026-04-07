/*
 * XREFs of ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180005434
 * Callers:
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002AF7C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180093C98 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnAccentStateUpdated(_QWORD *a1, struct CWindowData *a2, int a3)
{
  _QWORD *v3; // rbx
  CAccentBlurBehind *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  v3 = a1;
  if ( a3 == 3 )
  {
    v4 = (CAccentBlurBehind *)a1[42];
    if ( v4
      && (*((_QWORD *)a2 + 5) == v3[50]
       || CAccentBlurBehind::IsBlurBehindDirty(v4, a2, (const struct tagRECT *)(v3 + 77), v3[51], (HWND)v3[50])) )
    {
      v5 = *v3;
      v6 = 0x10000LL;
      a1 = v3;
LABEL_5:
      (*(void (__fastcall **)(_QWORD *, __int64))(v5 + 24))(a1, v6);
    }
  }
  else if ( (unsigned int)(a3 - 4) <= 1 )
  {
    v5 = *a1;
    v6 = 4096LL;
    goto LABEL_5;
  }
}
