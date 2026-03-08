/*
 * XREFs of ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C005C424
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        void *a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rdi
  int v9; // r11d
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v6 = *((_QWORD *)this + 11) * v5,
        v7 = *((_QWORD *)this + 7),
        (v8 = *(struct DirectComposition::CResourceMarshaler **)(v6 + v7)) != 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, char *))(*(_QWORD *)v8 + 224LL))(
           *(_QWORD *)(v6 + v7),
           a3,
           a4,
           &v11);
    if ( v9 >= 0 && v11 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v9;
}
