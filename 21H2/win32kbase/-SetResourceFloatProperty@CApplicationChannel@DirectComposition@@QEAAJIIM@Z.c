/*
 * XREFs of ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C002631C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007E324 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00263C8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0091BD8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceFloatProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3,
        float a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebp
  struct DirectComposition::CResourceMarshaler *v7; // rbx
  int v8; // esi
  char v9; // cl
  bool v11; // al
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v5 = (unsigned int)(a2 - 1);
  v6 = a3;
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v7 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v7 + 120LL))(
           v7,
           (unsigned int)a3,
           a3,
           &v12);
    if ( v8 >= 0 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        v11 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v7, v6);
        v9 = v12;
        if ( v11 )
          v9 = 1;
        v12 = v9;
      }
      else
      {
        v9 = v12;
      }
      if ( v9 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v7);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}
