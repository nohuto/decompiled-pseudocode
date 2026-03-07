__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 Prop; // rax
  bool v5; // al
  struct tagWND *v6; // rcx
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  result = GreGetBounds(v2, &v7, 4LL);
  if ( (_DWORD)result )
  {
    Prop = GetProp(*(_QWORD *)(a1 + 32), (unsigned __int16)atomLayer, 1LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 27LL) & 0x10) != 0 )
    {
      return UnionRect(Prop + 16, Prop + 16, &v7);
    }
    else
    {
      v5 = IS_USERCRIT_OWNED_EXCLUSIVE();
      v6 = *(struct tagWND **)(a1 + 32);
      if ( v5 )
        return InvalidateWEFCOMPOSITEDWindow(v6, &v7);
      else
        return PostCOMPOSITEDInvalidateAPC(v6, &v7);
    }
  }
  return result;
}
