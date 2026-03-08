/*
 * XREFs of WmipCreateGuidObject @ 0x14069AA20
 * Callers:
 *     WmipOpenGuidObject @ 0x14069B120 (WmipOpenGuidObject.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     WmipGetGuidSecurityDescriptor @ 0x14069AC40 (WmipGetGuidSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int128 *a1, int a2, _OWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  int GuidSecurityDescriptor; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID v12; // rdi
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  char *v15; // rsi
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  char *DestinationString; // [rsp+60h] [rbp-A8h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  PVOID v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  struct _ACCESS_STATE AccessState; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v27[224]; // [rsp+148h] [rbp+40h] BYREF

  P = 0LL;
  DestinationString_8 = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v27, 0, sizeof(v27));
  v8 = *((_QWORD *)a1 + 2);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString_8, (PCWSTR)(*(_QWORD *)(v8 + 8) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString_8, &P);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v10 = a1[1];
    v20 = *a1;
    v11 = a1[2];
    v12 = P;
    v23 = HIDWORD(v10);
    v21 = 0LL;
    v25 = *((_QWORD *)&v11 + 1);
    v24 = P;
    v22 = 640;
    GuidSecurityDescriptor = SeCreateAccessState((int)&AccessState, (int)v27, a2, (__int64)&WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v13 = *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken;
      v14 = *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken;
      AccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObjectEx(0, (_DWORD)WmipGuidObjectType, (unsigned int)&v20, 0);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v15 = DestinationString;
        memset(DestinationString, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v15, NotificationEvent, 0);
        *((_DWORD *)v15 + 28) = 4096;
        *((_DWORD *)v15 + 36) = 4096;
        *(_OWORD *)(v15 + 24) = *a3;
        GuidSecurityDescriptor = ObInsertObjectEx(v15, &AccessState, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v15;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken = v13;
      *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken = v14;
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
    if ( v12 && v12 != (PVOID)WmipDefaultAccessSd )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
