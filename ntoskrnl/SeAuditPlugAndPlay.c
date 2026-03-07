void __fastcall SeAuditPlugAndPlay(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        char a9)
{
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD *PrimaryToken; // rdx
  _QWORD **ClientToken; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v22[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(v22, 0, sizeof(v22));
  LOBYTE(v20) = 0;
  if ( a8 )
  {
    switch ( a8 )
    {
      case 1:
        v13 = 6419;
        break;
      case 2:
        v13 = 6420;
        break;
      case 3:
        v13 = 6421;
        break;
      case 4:
        v13 = 6422;
        break;
      case 5:
        v13 = 6423;
        break;
      case 6:
        v13 = 6424;
        break;
      default:
        return;
    }
    v14 = 0;
  }
  else
  {
    v13 = 6416;
    v14 = 1;
  }
  HIDWORD(v22[0]) = v13;
  LODWORD(v22[0]) = 5;
  HIDWORD(v22[2]) = 524425;
  v22[1] = v14;
  if ( !a9 )
    HIWORD(v22[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v17 = *ClientToken[19];
  v18 = PrimaryToken[3];
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 4;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 4 * *(unsigned __int8 *)(v17 + 1) + 8;
  v22[4 * HIDWORD(v22[1]) + 7] = v17;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 1;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 32;
  v22[4 * HIDWORD(v22[1]) + 7] = &SeSubsystemName;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 5;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 8;
  v22[4 * HIDWORD(v22[1]) + 5] = v18;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 1;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a1 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a1;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 1;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a2 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a2;
  v19 = 4LL * (unsigned int)++HIDWORD(v22[1]);
  LODWORD(v22[v19 + 4]) = 13;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a6;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 1;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a7 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a7;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 34;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a3 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a3;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 34;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a4 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a4;
  ++HIDWORD(v22[1]);
  LODWORD(v22[4 * HIDWORD(v22[1]) + 4]) = 34;
  HIDWORD(v22[4 * HIDWORD(v22[1]) + 4]) = *a5 + 16;
  v22[4 * HIDWORD(v22[1]) + 7] = a5;
  ++HIDWORD(v22[1]);
  AdtpWriteToEtwEx((__int64)v22, &v20);
  SeReleaseSubjectContext(&SubjectContext);
}
