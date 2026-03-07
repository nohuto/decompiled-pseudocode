__int64 __fastcall DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi

  v3 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2
    && v4 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v7 = *(_QWORD *)(*((_QWORD *)this + 11) * v4 + *((_QWORD *)this + 7))) != 0) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 168LL))(v7);
    if ( v8
      && (v9 = *(_QWORD *)(v8 + 192)) != 0
      && (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9), (v11 = v10) != 0) )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *(unsigned int *)(v10 + 376));
      *(_DWORD *)a3 = *(_DWORD *)(v11 + 376);
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
  return v3;
}
