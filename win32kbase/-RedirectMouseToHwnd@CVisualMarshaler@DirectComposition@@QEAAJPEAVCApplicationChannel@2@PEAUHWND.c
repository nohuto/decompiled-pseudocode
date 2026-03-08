/*
 * XREFs of ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0252A34
 * Callers:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C024AFAC (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C0009F60 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00A1EAC (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C00A206C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        __int16 a5,
        __int16 a6)
{
  int WindowForInputType; // edi
  __int64 v9; // rcx
  DirectComposition::CInteractionMarshaler *v12; // rax
  DirectComposition::CInteractionMarshaler *v13; // rbx
  _QWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  DirectComposition::CInteractionMarshaler *v19; // [rsp+30h] [rbp-D0h] BYREF
  HWND v20; // [rsp+38h] [rbp-C8h] BYREF
  void *v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[38]; // [rsp+50h] [rbp-B0h] BYREF
  bool v23; // [rsp+1B0h] [rbp+B0h] BYREF

  WindowForInputType = 0;
  v20 = 0LL;
  v9 = *((_QWORD *)this + 27);
  if ( !v9 )
  {
    v13 = 0LL;
    v19 = 0LL;
LABEL_8:
    if ( a3 == v20 )
      goto LABEL_15;
    v21 = 0LL;
    WindowForInputType = DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
                           this,
                           a2,
                           0,
                           1,
                           L"RedirectMouse",
                           &v19);
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
                             &v21);
      if ( WindowForInputType >= 0 )
      {
        v13 = v19;
        WindowForInputType = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v19, v21, &v23);
        if ( WindowForInputType >= 0 )
        {
LABEL_15:
          if ( v13 )
          {
            v17 = *((_DWORD *)v13 + 35);
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
            if ( v17 != *((_DWORD *)v13 + 35) )
            {
              *((_DWORD *)v13 + 17) |= 1u;
              *((_DWORD *)v13 + 35) = v17;
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v13);
            }
          }
        }
      }
    }
    return (unsigned int)WindowForInputType;
  }
  v12 = (DirectComposition::CInteractionMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 128LL))(v9);
  v19 = v12;
  v13 = v12;
  if ( !v12 )
    goto LABEL_8;
  v14 = (_QWORD *)*((_QWORD *)v12 + 33);
  if ( v14 )
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v14, 1, &v20);
  if ( WindowForInputType >= 0 )
    goto LABEL_8;
  return (unsigned int)WindowForInputType;
}
