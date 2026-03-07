void __fastcall Controller_SetLogIdentifier(__int64 a1)
{
  __int64 v2; // r9
  NTSTATUS v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+28h] [rbp-30h]
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 72) )
  {
    v2 = *(unsigned int *)(a1 + 176);
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v5 = *(unsigned __int16 *)(a1 + 252);
      v4 = *(unsigned __int16 *)(a1 + 248);
      v3 = RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %04x %04x", v2, v4, v5);
    }
    else
    {
      v3 = RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %s %s", v2, a1 + 304, a1 + 309);
    }
    if ( v3 >= 0 )
      imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 72), pszDest);
  }
}
