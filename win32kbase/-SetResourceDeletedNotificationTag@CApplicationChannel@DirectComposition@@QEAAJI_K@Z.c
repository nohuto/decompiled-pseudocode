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
