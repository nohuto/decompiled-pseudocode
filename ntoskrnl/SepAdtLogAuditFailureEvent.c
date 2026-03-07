__int64 __fastcall SepAdtLogAuditFailureEvent(unsigned int a1, char a2)
{
  __int64 v3; // rdi
  unsigned __int32 v4; // edx
  unsigned __int8 *v5; // r8
  __int64 v6; // rcx
  _OWORD Src[66]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = a1;
  memset(Src, 0, 0x418uLL);
  if ( !SepAdtAuditFailureEventLogged || a2 || (unsigned int)SepAdtAuditFailureCount >= 0x32 )
  {
    SepAdtAuditFailureEventLogged = 1;
    v4 = _InterlockedExchange(&SepAdtAuditFailureCount, 0);
    v5 = (unsigned __int8 *)SeLocalSystemSid;
    *(_QWORD *)&Src[0] = 0x20900000001LL;
    *(_QWORD *)&Src[1] = 0x200080066LL;
    if ( a2 )
    {
      DWORD1(Src[1]) = 18;
LABEL_7:
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4 * v5[1] + 8;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = v5;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 32;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = &SeSubsystemName;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 10;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v3;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      v6 = (unsigned __int8)SepCrashOnAuditFail;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v6;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v4;
      ++DWORD2(Src[0]);
      SepAdtLogAuditRecord(Src);
      return 0LL;
    }
    if ( v4 )
      goto LABEL_7;
  }
  return 0LL;
}
