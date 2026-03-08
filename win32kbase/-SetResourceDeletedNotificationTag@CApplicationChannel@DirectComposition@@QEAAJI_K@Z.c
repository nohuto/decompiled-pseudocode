/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00B8A3C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C00B8AFC (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00B8BA8 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdi
  DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  bool v8; // zf

  v3 = (unsigned int)(a2 - 1);
  if ( a2
    && v3 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        (v6 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) * v3 + *((_QWORD *)this + 7))) != 0LL)
    && !*((_QWORD *)v6 + 6) )
  {
    if ( a3 )
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
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
