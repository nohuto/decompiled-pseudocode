/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00ABEE8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C00ABFA8 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00AC050 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  DirectComposition::CResourceMarshaler *v5; // rdi
  struct DirectComposition::CDeletedNotificationList *v6; // rbp
  int v7; // ebx
  bool v8; // zf

  v3 = (unsigned int)(a2 - 1);
  if ( a2
    && v3 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        (v5 = *(DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) != 0LL)
    && !*((_QWORD *)v5 + 7) )
  {
    if ( a3 )
    {
      v6 = (DirectComposition::CApplicationChannel *)((char *)this + 472);
      v7 = DirectComposition::CDeletedNotificationList::EnsureTagAllocation((DirectComposition::CApplicationChannel *)((char *)this + 472));
      if ( v7 >= 0 )
      {
        v8 = *((_QWORD *)v5 + 3) == 1LL;
        *((_QWORD *)v5 + 7) = a3;
        if ( v8 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 24LL))(v5) )
            DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(v5, v6);
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
