__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // r8
  __int64 v4; // rdx
  const wchar_t *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  char *v9; // [rsp+40h] [rbp-20h]
  char v10; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0LL;
  v2 = IopAutoReboot != 0;
  WORD5(v8) = 8;
  v9 = &v10;
  v7 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 2) != 0 )
  {
    LOBYTE(v3) = v2;
    BgpFwDisplayBugCheckProgressUpdate(a1, &v7, v3);
  }
  BgpFwReleaseLock();
  if ( a1 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v7 && *((_QWORD *)&v7 + 1) && (_QWORD)v8 )
    {
      KiHeadlessDisplayString(*(_QWORD *)(v7 + 8), *(unsigned __int16 *)v7);
      KiHeadlessDisplayString(L" ", 4LL);
      KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v7 + 1));
      KiHeadlessDisplayString(v9, WORD4(v8));
      v4 = *(unsigned __int16 *)v8;
      v5 = *(const wchar_t **)(v8 + 8);
    }
    else
    {
      KiBugCheckConvertProgressValueToUnicodeString(a1, (__int64)&v8 + 8);
      KiHeadlessDisplayString(v9, WORD4(v8));
      v4 = 4LL;
      v5 = L"%";
    }
    KiHeadlessDisplayString(v5, v4);
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
