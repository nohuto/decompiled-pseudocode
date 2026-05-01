/*
 * XREFs of ?HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z @ 0x18003CBFC
 * Callers:
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003CAB0 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemQueryUserContextToken(ULONG a1, void *a2, unsigned __int64 *a3)
{
  PSID *Heap; // rdi
  int LastError; // ebx
  int UserContext; // ebx
  int UserContextFromSid; // eax
  LPWSTR StringSid; // [rsp+30h] [rbp-10h] BYREF
  ULONG TokenInformationLength; // [rsp+60h] [rbp+20h] BYREF
  void *phToken; // [rsp+78h] [rbp+38h] BYREF

  StringSid = 0LL;
  Heap = 0LL;
  phToken = 0LL;
  if ( !a1 )
  {
    if ( ConvertSidToStringSidW(a2, &StringSid) )
    {
      UserContextFromSid = UMgrQueryUserContextFromSid(StringSid, a3);
      UserContext = UserContextFromSid;
      if ( UserContextFromSid >= 0
        || UserContextFromSid == -2147023584
        && IsWellKnownSid(a2, WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        goto LABEL_8;
      }
LABEL_16:
      LastError = UserContext | 0xC0000000;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
  if ( !WTSQueryUserToken(a1, &phToken) )
  {
LABEL_22:
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_9;
  }
  LastError = NtQueryInformationToken(phToken, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( LastError != -1073741789 )
    goto LABEL_9;
  Heap = (PSID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
  if ( Heap )
  {
    LastError = NtQueryInformationToken(phToken, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
    if ( LastError < 0 )
      goto LABEL_9;
    if ( RtlEqualSid(a2, *Heap) )
    {
      UserContext = UMgrQueryUserContext(phToken, a3);
      if ( UserContext >= 0 )
      {
LABEL_8:
        LastError = 0;
        goto LABEL_9;
      }
      goto LABEL_16;
    }
    LastError = -1073741720;
  }
  else
  {
    LastError = -1073741801;
  }
LABEL_9:
  if ( StringSid )
    LocalFree(StringSid);
  if ( phToken )
    NtClose(phToken);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)LastError;
}
