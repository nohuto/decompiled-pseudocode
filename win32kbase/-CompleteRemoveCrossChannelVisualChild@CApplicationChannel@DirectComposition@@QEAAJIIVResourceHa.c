__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3,
        int a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  __int64 CrossChannelVisualChildNoRef; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r11d
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741790;
  if ( v5 >= *((_QWORD *)a1 + 10) )
    return (unsigned int)-1073741790;
  _mm_lfence();
  if ( (v8 = *(_QWORD *)(*((_QWORD *)a1 + 11) * v5 + *((_QWORD *)a1 + 7))) == 0 )
    return (unsigned int)-1073741790;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8);
  v10 = (struct DirectComposition::CResourceMarshaler *)v9;
  if ( !v9 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v9);
    goto LABEL_8;
  }
  v16 = (unsigned int)(a3 - 1);
  if ( v16 < *((_QWORD *)a1 + 10) )
  {
    _mm_lfence();
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 11) * v16 + *((_QWORD *)a1 + 7));
    if ( v17 )
    {
      CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 168LL))(v17);
LABEL_8:
      v12 = CrossChannelVisualChildNoRef;
      goto LABEL_9;
    }
  }
  v12 = 0LL;
LABEL_9:
  if ( !v12 )
    return (unsigned int)-1073741811;
  v13 = *(_QWORD *)v10;
  v18 = 0;
  v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v13 + 296))(
          v10,
          a1,
          v12,
          &v18);
  if ( v14 >= 0 && v18 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v10);
  return (unsigned int)v14;
}
