/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C0085974
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DirectComposition::CResourceMarshaler *v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebx
  char v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v22 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2
    && v6 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v10 = *((_QWORD *)this + 7),
        v11 = v6 * *((_QWORD *)this + 11),
        (v12 = *(struct DirectComposition::CResourceMarshaler **)(v11 + v10)) != 0LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v12 + 96LL))(*(_QWORD *)(v11 + v10), 195LL) )
      return (unsigned int)-1073741811;
    v13 = (unsigned int)(a3 - 1);
    if ( !a3 )
      return (unsigned int)-1073741811;
    if ( v13 >= *((_QWORD *)this + 10) )
      return (unsigned int)-1073741811;
    _mm_lfence();
    v14 = *((_QWORD *)this + 7);
    v15 = v13 * *((_QWORD *)this + 11);
    v16 = *(_QWORD *)(v15 + v14);
    if ( !v16 )
      return (unsigned int)-1073741811;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v16 + 96LL))(*(_QWORD *)(v15 + v14), 195LL)
      && (!a5
       || (v17 = a5 - 1, v17 < *((_QWORD *)this + 10))
       && (_mm_lfence(),
           v18 = *((_QWORD *)this + 7),
           v19 = v17 * *((_QWORD *)this + 11),
           (v5 = *(_QWORD *)(v19 + v18)) != 0)
       && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 96LL))(*(_QWORD *)(v19 + v18), 195LL)) )
    {
      v20 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v12 + 224LL))(
              v12,
              this,
              v16,
              a4,
              v5,
              &v22);
      if ( v20 >= 0 && v22 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v12);
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
  return (unsigned int)v20;
}
