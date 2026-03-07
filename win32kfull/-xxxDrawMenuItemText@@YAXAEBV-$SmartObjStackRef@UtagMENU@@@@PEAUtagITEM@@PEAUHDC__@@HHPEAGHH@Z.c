WCHAR *__fastcall xxxDrawMenuItemText(
        __int64 **a1,
        __int64 a2,
        Gre::Base *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // r13
  WCHAR *result; // rax
  WCHAR *SourceString; // rbx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 ThreadWin32Thread; // rax
  unsigned __int16 PrefixCount; // [rsp+40h] [rbp-288h]
  __int64 v20; // [rsp+48h] [rbp-280h]
  __int128 v21; // [rsp+58h] [rbp-270h] BYREF
  __int64 v22; // [rsp+68h] [rbp-260h]
  _BYTE v23[512]; // [rsp+70h] [rbp-258h] BYREF

  v12 = PtiCurrentShared((__int64)a1);
  v13 = *(_QWORD *)(a2 + 88);
  v20 = (__int64)v12;
  v22 = 0LL;
  v21 = 0LL;
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v23;
  }
  else
  {
    result = (WCHAR *)Win32AllocPoolZInit(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, &v21, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v20) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, v16);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_21;
  }
  else
  {
    GreExtTextOutW((__int64)a3, a4, a5, 0, 0LL, (__int64)SourceString, v16);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned __int8)gpdwCPUserPreferencesMask & 0x20) != 0
    || (int)gpdwCPUserPreferencesMask >= 0
    || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
        *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u)
    && (*(_DWORD *)(ThreadWin32Thread + 648) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v20) )
      xxxPSMTextOut((HDC)a3, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, PrefixCount);
  }
LABEL_21:
  result = (WCHAR *)v23;
  if ( SourceString != (WCHAR *)v23 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  return result;
}
