__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // r9d
  int v14; // eax
  unsigned __int8 IsDerivedResourceType; // al
  char v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v17 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2
    && v6 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v7 = *(_QWORD *)(*((_QWORD *)this + 11) * v6 + *((_QWORD *)this + 7))) != 0) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 168LL))(v7);
    if ( v8
      && (!a3
       || (v9 = (unsigned int)(a3 - 1), v9 < *((_QWORD *)this + 10))
       && (_mm_lfence(), (v10 = *(_QWORD *)(*((_QWORD *)this + 11) * v9 + *((_QWORD *)this + 7))) != 0)
       && (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 168LL))(v10)) != 0) )
    {
      v11 = *(_QWORD *)v8;
      if ( v3 )
        v12 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, char *))(v11 + 296))(
                v8,
                this,
                v3,
                &v17);
      else
        v12 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, char *))(v11 + 304))(
                v8,
                this,
                &v17);
      v13 = v12;
      if ( v12 >= 0 )
      {
        if ( v17 )
        {
          v14 = *(_DWORD *)(v8 + 16);
          if ( (v14 & 2) == 0 )
          {
            if ( (v14 & 1) != 0 )
            {
              IsDerivedResourceType = DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *(unsigned int *)(v8 + 36),
                                        170LL);
              *(_QWORD *)(v8 + 8) = *((_QWORD *)this + IsDerivedResourceType + 52);
              *((_QWORD *)this + IsDerivedResourceType + 52) = v8;
            }
            *(_DWORD *)(v8 + 16) |= 2u;
            *((_BYTE *)this + 240) |= 1u;
          }
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
  return v13;
}
