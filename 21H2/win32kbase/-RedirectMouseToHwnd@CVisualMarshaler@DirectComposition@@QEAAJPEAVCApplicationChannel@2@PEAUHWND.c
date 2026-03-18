/*
 * XREFs of ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C021B798
 * Callers:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0214BB8 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00021F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0058084 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0083D68 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0083E9C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        __int16 a5,
        __int16 a6)
{
  DirectComposition::CInteractionMarshaler *v6; // rdi
  HWND v7; // rax
  int WindowForInputType; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  HWND v19; // [rsp+30h] [rbp-D0h] BYREF
  void *v20; // [rsp+38h] [rbp-C8h] BYREF
  DirectComposition::CInteractionMarshaler *v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[38]; // [rsp+50h] [rbp-B0h] BYREF
  bool v23; // [rsp+1B0h] [rbp+B0h] BYREF

  v6 = (DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 28);
  v7 = 0LL;
  WindowForInputType = 0;
  v19 = 0LL;
  v21 = v6;
  if ( !v6 )
    goto LABEL_29;
  v13 = (_QWORD *)*((_QWORD *)v6 + 34);
  if ( v13 )
  {
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v13, 1, &v19);
    v7 = v19;
  }
  if ( WindowForInputType >= 0 )
  {
LABEL_29:
    if ( a3 == v7 )
      goto LABEL_15;
    v20 = 0LL;
    if ( *((_QWORD *)this + 28) )
    {
      v14 = *(_QWORD *)this;
      v23 = 0;
      WindowForInputType = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(v14 + 152))(
                             this,
                             a2,
                             23LL);
    }
    if ( WindowForInputType >= 0 )
    {
      WindowForInputType = DirectComposition::CVisualMarshaler::EnsureInteraction(this, a2, 0, L"RedirectMouse", &v21);
      if ( WindowForInputType >= 0 )
      {
        memset(v22, 0, 0x128uLL);
        LODWORD(v22[0]) = 232;
        if ( a4 )
        {
          v15 = *(_OWORD *)a4;
          LODWORD(v22[1]) = 3;
          v16 = *((_OWORD *)a4 + 1);
          *(_OWORD *)&v22[3] = v15;
          v22[7] = *((_QWORD *)a4 + 4);
          *(_OWORD *)&v22[5] = v16;
        }
        else
        {
          LODWORD(v22[1]) = 2;
        }
        LODWORD(v22[8]) = 0;
        LODWORD(v22[15]) = 0;
        LODWORD(v22[22]) = 0;
        v22[2] = a3;
        WindowForInputType = CompositionInputObject::KernelCreateCompositionInputSink(
                               (const struct COMPOSITION_INPUT_SINK_V2 *)v22,
                               &v20);
        if ( WindowForInputType >= 0 )
        {
          v6 = v21;
          WindowForInputType = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v21, v20, &v23);
          if ( WindowForInputType >= 0 )
          {
LABEL_15:
            if ( v6 )
            {
              v17 = *((_DWORD *)v6 + 37);
              if ( (a5 & 0x803F) != 0 )
              {
                if ( (a6 & 0x803F) != 0 )
                  v17 |= 0x803Fu;
                else
                  v17 &= 0xFFFF7FC0;
              }
              if ( (a5 & 0x100) != 0 )
              {
                if ( (a6 & 0x100) != 0 )
                  v17 |= 0x100u;
                else
                  v17 &= ~0x100u;
              }
              if ( v17 != *((_DWORD *)v6 + 37) )
              {
                *((_DWORD *)v6 + 19) |= 1u;
                *((_DWORD *)v6 + 37) = v17;
                DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v6);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)WindowForInputType;
}
