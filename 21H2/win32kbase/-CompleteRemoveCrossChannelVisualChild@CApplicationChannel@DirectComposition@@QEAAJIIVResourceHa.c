/*
 * XREFs of ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C0002BF4
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0002AF8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0002CDC (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3,
        int a4)
{
  unsigned __int64 v5; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rsi
  __int64 CrossChannelVisualChildNoRef; // rbx
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741790;
  if ( v5 >= *((_QWORD *)a1 + 10) )
    return (unsigned int)-1073741790;
  _mm_lfence();
  v8 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
  if ( !v8 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 96LL))(
          v8,
          195LL) )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v13 = (unsigned int)(a3 - 1);
    if ( v13 < *((_QWORD *)a1 + 10) )
    {
      _mm_lfence();
      v14 = *((_QWORD *)a1 + 7);
      v15 = v13 * *((_QWORD *)a1 + 11);
      CrossChannelVisualChildNoRef = *(_QWORD *)(v15 + v14);
      if ( CrossChannelVisualChildNoRef )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 96LL))(
               *(_QWORD *)(v15 + v14),
               195LL) )
        {
          goto LABEL_8;
        }
        return (unsigned int)-1073741811;
      }
    }
    return (unsigned int)-1073741790;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v8);
  if ( !CrossChannelVisualChildNoRef )
    return (unsigned int)-1073741811;
LABEL_8:
  v10 = *(_QWORD *)v8;
  v16 = 0;
  v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v10 + 232))(
          v8,
          a1,
          CrossChannelVisualChildNoRef,
          &v16);
  if ( v11 >= 0 && v16 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v8);
  return (unsigned int)v11;
}
