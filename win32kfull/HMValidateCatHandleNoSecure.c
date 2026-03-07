__int64 __fastcall HMValidateCatHandleNoSecure(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r14

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v3 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v5 = HMPkheFromPhe(v3);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v3 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process(v4))
      && *(_BYTE *)(v3 + 24) == 1 )
    {
      return *(_QWORD *)v5;
    }
  }
  return v2;
}
