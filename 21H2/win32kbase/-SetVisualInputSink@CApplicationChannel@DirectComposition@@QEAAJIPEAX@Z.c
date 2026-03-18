/*
 * XREFs of ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0083C84
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0083D68 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  unsigned __int64 v4; // rcx
  DirectComposition::CVisualMarshaler *v6; // rbx
  __int64 v7; // rax
  int v8; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rsi
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2
    && v4 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        (v6 = *(DirectComposition::CVisualMarshaler **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) != 0LL) )
  {
    v7 = *(_QWORD *)v6;
    v11 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(v7 + 96))(v6, 195LL) )
    {
      v8 = DirectComposition::CVisualMarshaler::EnsureInteraction(v6, this, 1, L"SetInputSink", &v11);
      if ( v8 >= 0 )
      {
        v9 = v11;
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v11 + 128LL))(
               v11,
               0LL,
               a3,
               &v12);
        if ( v8 >= 0 )
        {
          if ( v12 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
