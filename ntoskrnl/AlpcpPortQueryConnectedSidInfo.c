/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1407569CC
 * Callers:
 *     NtAlpcQueryInformation @ 0x140756660 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D4F38 (AlpcpReferenceConnectedPort.c)
 *     SeCaptureSid @ 0x140710930 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140710A34 (SeReleaseSid.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // r13
  signed __int64 *v14; // rsi
  ULONG_PTR v15; // rbx
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+48h] [rbp-A0h]
  PSID v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v21 = a1;
  v20 = a2;
  Sid1 = 0LL;
  memset(Sid2, 0, 0x44uLL);
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid((char *)a2, a5, v8, v9, v17, 1, &Sid1);
  v19 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v11 = 0LL;
    v12 = AlpcpReferenceConnectedPort(a1);
    v13 = (_QWORD *)v12;
    if ( v12 )
    {
      v14 = (signed __int64 *)(v12 + 352);
      ExAcquirePushLockSharedEx(v12 + 352, 0LL);
      if ( (v13[3] & 1) == 0 )
        v11 = (signed __int64 *)v13[3];
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      ObfDereferenceObject(v13);
    }
    if ( v11 )
    {
      v15 = PsReferencePrimaryTokenWithTag((__int64)v11, 0x746C6644u);
      SeQueryUserSidToken(v15, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject(v11 + 151, v15, 0x746C6644u);
      LOBYTE(v15) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v11, 0x63706C41u);
      v16 = (_BYTE)v15 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v16 = -1073741769;
    }
    if ( Sid1 != a2 )
      SeReleaseSid(Sid1, a5, 1);
    return v16;
  }
  return result;
}
