/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C00C1D44
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C0069BC8 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        __int64 a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  __int64 v4; // rax
  int v7; // r11d
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v9 = 0;
  v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(v4 + 248))(
         a2,
         this,
         a3,
         a4,
         &v9);
  if ( v7 >= 0 && v9 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, a2);
  return (unsigned int)v7;
}
