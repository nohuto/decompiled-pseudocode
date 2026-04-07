/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800368FC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036538 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x180048948 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18004F2AC (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  int v2; // edi
  CTopLevelWindow::WindowFrame *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800E6D58 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (CTopLevelWindow::WindowFrame *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                             WPF::g_pProcessHeap,
                                             1888LL);
      v4 = v3 ? CTopLevelWindow::WindowFrame::WindowFrame(v3) : 0LL;
      v7 = v4;
      if ( !v4 )
        break;
      v5 = dword_1800E6D58 + 1;
      if ( dword_1800E6D58 + 1 < (unsigned int)dword_1800E6D58 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v5 > dword_1800E6D54 )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u, 1, &v7);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800E6D58) = v4;
        dword_1800E6D58 = v5;
      }
      if ( (unsigned int)++v2 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x25Cu);
  }
  return v0;
}
