/*
 * XREFs of sub_1800631C0 @ 0x1800631C0
 * Callers:
 *     sub_180062DCC @ 0x180062DCC (sub_180062DCC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 sub_1800631C0()
{
  unsigned __int64 v0; // rsi
  struct _ACL *v1; // rbx
  char v2; // r15
  void *v3; // rax
  void *v4; // rdi
  DWORD LengthSid; // ebx
  DWORD v6; // r14d
  struct _ACL *v7; // rax
  void *v8; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  DWORD LastError; // eax
  __int64 v13; // rdx
  PSID pSid; // [rsp+60h] [rbp-20h] BYREF
  DWORD dwBufferLength; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+6Ch] [rbp-14h] BYREF

  pSid = 0LL;
  v0 = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v1 = 0LL;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
  v2 = 0;
  v3 = HeapAlloc(hHeap, 0, 0x28uLL);
  v4 = v3;
  if ( !v3 )
  {
    v10 = off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 10LL;
LABEL_24:
    sub_1800BB4B4(v10[2], v11, &unk_180171E90);
    goto LABEL_12;
  }
  if ( !InitializeSecurityDescriptor(v3, 1u) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 11LL;
LABEL_33:
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), v13, &unk_180171E90, LastError);
    goto LABEL_12;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 12LL;
    goto LABEL_33;
  }
  LengthSid = GetLengthSid(SidToCheck);
  v6 = LengthSid + GetLengthSid(pSid) + 24;
  v7 = (struct _ACL *)HeapAlloc(hHeap, 0, v6);
  v1 = v7;
  if ( !v7 )
  {
    v10 = off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 13LL;
    goto LABEL_24;
  }
  if ( !InitializeAcl(v7, v6, 2u) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 14LL;
    goto LABEL_33;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 0xF001Fu, SidToCheck) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 15LL;
    goto LABEL_33;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 4u, pSid) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 16LL;
    goto LABEL_33;
  }
  if ( !SetSecurityDescriptorDacl(v4, 1, v1, 0) )
  {
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 17LL;
    goto LABEL_33;
  }
  dwBufferLength = GetSecurityDescriptorLength(v4);
  v8 = HeapAlloc(hHeap, 0, dwBufferLength);
  v0 = (unsigned __int64)v8;
  if ( !v8 )
  {
    v10 = off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_BYTE *)off_18019C348 + 28) & 0x10) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 18LL;
    goto LABEL_24;
  }
  if ( MakeSelfRelativeSD(v4, v8, &dwBufferLength) )
  {
    v2 = 1;
    goto LABEL_12;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    LastError = GetLastError();
    v13 = 19LL;
    goto LABEL_33;
  }
LABEL_12:
  if ( pSid )
    FreeSid(pSid);
  if ( v1 )
    HeapFree(hHeap, 0, v1);
  if ( v4 )
    HeapFree(hHeap, 0, v4);
  if ( !v2 && v0 )
    HeapFree(hHeap, 0, (LPVOID)v0);
  return v0 & -(__int64)(v2 != 0);
}
