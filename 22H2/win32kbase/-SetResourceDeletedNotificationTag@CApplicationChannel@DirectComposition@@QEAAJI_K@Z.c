/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00A6C8C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C00A6D30 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00A6DDC (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  bool v8; // zf

  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( !v5 || *((_QWORD *)v5 + 6) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a3 )
  {
    v7 = DirectComposition::CDeletedNotificationList::EnsureTagAllocation((DirectComposition::CApplicationChannel *)((char *)this + 480));
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)v6 + 3) == 1LL;
      *((_QWORD *)v6 + 6) = a3;
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v6 + 8LL))(v6) )
          DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
            v6,
            (DirectComposition::CApplicationChannel *)((char *)this + 480));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
