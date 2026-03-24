/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C0097F2C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007E324 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C0097FE4 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C01D5940 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rdi
  int v6; // ebx
  struct DirectComposition::CDeletedNotificationList *v7; // rbp
  bool v8; // zf

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(v3 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 || *(_QWORD *)(v5 + 48) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a3 )
  {
    v7 = (DirectComposition::CApplicationChannel *)((char *)this + 472);
    v6 = DirectComposition::CDeletedNotificationList::EnsureTagAllocation((DirectComposition::CApplicationChannel *)((char *)this + 472));
    if ( v6 >= 0 )
    {
      v8 = *(_DWORD *)(v5 + 20) == 1;
      *(_QWORD *)(v5 + 48) = a3;
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) )
          DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
            (DirectComposition::CResourceMarshaler *)v5,
            v7);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
