/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x1402013A4
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402F4D04 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     SepVerifyDesktopAppxPackageName @ 0x140201574 (SepVerifyDesktopAppxPackageName.c)
 *     SeGetTrustLabelAce @ 0x14026C320 (SeGetTrustLabelAce.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x1406F4264 (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  _BYTE *v7; // rdi
  int v8; // eax
  __int64 TrustLabelAce; // r15
  NTSTATUS v10; // ebx
  int SecurityObject; // eax
  _BYTE *PoolWithTag; // rax
  _BYTE v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *a4 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 2172);
  TrustLabelAce = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v14[0] = 0;
  if ( (v8 & 1) != 0 )
    return 0;
  v10 = PsReferenceProcessFilePointer(a1, &NumberOfBytes[1]);
  if ( v10 >= 0 )
  {
    NumberOfBytes[0] = 512;
    v7 = SecurityDescriptor;
    v10 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v10 >= 0 )
    {
      SecurityObject = ObQuerySecurityObject(
                         NumberOfBytes[1],
                         132,
                         (unsigned int)SecurityDescriptor,
                         512,
                         (__int64)NumberOfBytes);
      if ( SecurityObject == -1073741789 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v10 = -1073741801;
          goto LABEL_23;
        }
        v10 = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
        if ( v10 < 0 )
          goto LABEL_23;
        SecurityObject = ObQuerySecurityObject(
                           NumberOfBytes[1],
                           132,
                           (_DWORD)v7,
                           NumberOfBytes[0],
                           (__int64)NumberOfBytes);
      }
      if ( SecurityObject < 0 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      if ( !v7 )
      {
        v10 = -1073739509;
        goto LABEL_23;
      }
      v10 = SepVerifyDesktopAppxPackageName(a2, v7, v14);
      if ( v10 >= 0 && a3 == 1 )
        TrustLabelAce = SeGetTrustLabelAce(v7);
      if ( v14[0] != 1 )
        goto LABEL_23;
      if ( a3 == 1 )
      {
        if ( TrustLabelAce )
          goto LABEL_22;
        v10 = -1073740702;
      }
      if ( a3 )
        goto LABEL_23;
LABEL_22:
      *a4 = 1;
    }
  }
LABEL_23:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ObfDereferenceObjectWithTag(*(PVOID *)&NumberOfBytes[1], 0x746C6644u);
  if ( v7 && v7 != SecurityDescriptor )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
