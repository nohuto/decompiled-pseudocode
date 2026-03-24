/*
 * XREFs of UIPISQMChangeFilter @ 0x1C003F660
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C003F428 (_ChangeWindowMessageFilterEx.c)
 *     _ChangeWindowMessageFilter @ 0x1C003F5C0 (_ChangeWindowMessageFilter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C021DFA8 (-MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

void *__fastcall UIPISQMChangeFilter(struct tagPROCESSINFO *a1, int a2, int a3, int a4)
{
  void *result; // rax
  int v9; // edi
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  bool v13; // zf
  _OWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h]
  _QWORD v17[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[512]; // [rsp+D0h] [rbp-30h] BYREF

  result = memset(v17, 0, sizeof(v17));
  v9 = 0;
  if ( gfWinMsgSQMIsOptedIn )
  {
    memset(v14, 0, sizeof(v14));
    v15 = 0LL;
    v16 = 0;
    MsgSQMPopulateProcessSQMInfo(a1, (struct tagMSGSQM_PROCESSSQMINFO *)v14);
    if ( (unsigned __int16)a3 >= 0xC000u )
      LOBYTE(v9) = (unsigned int)UserGetAtomName((unsigned __int16)a3, v18, 255LL) != 0;
    v10 = L"(null)";
    LODWORD(v17[11]) = a3;
    LODWORD(v17[0]) = 2;
    v11 = (const wchar_t *)v14;
    if ( !LOWORD(v14[0]) )
      v11 = L"(null)";
    LODWORD(v17[14]) = 2;
    v17[1] = v11;
    LODWORD(v17[5]) = HIDWORD(v15);
    LODWORD(v17[3]) = v15;
    LODWORD(v17[7]) = v16;
    LODWORD(v17[2]) = 1;
    LODWORD(v17[9]) = a2 != 0;
    LODWORD(v17[4]) = 1;
    v12 = (const wchar_t *)v18;
    if ( !v9 )
      v12 = L"(null)";
    LODWORD(v17[6]) = 1;
    LODWORD(v17[8]) = 1;
    LODWORD(v17[10]) = 1;
    LODWORD(v17[12]) = 1;
    v13 = *v12 == 0;
    LODWORD(v17[13]) = a4;
    if ( !v13 )
      v10 = v12;
    v17[15] = v10;
    return (void *)WinSqmAddToStream(gSqmSession, 6265LL, 8LL, v17);
  }
  return result;
}
