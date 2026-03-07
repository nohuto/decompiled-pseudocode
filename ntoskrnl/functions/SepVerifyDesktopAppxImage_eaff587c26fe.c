__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  _BYTE *v7; // rdi
  int v8; // eax
  __int64 TrustLabelAce; // r15
  NTSTATUS v10; // ebx
  int SecurityObject; // eax
  _BYTE *Pool2; // rax
  _BYTE v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *a4 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 2172);
  TrustLabelAce = 0LL;
  Object = 0LL;
  v14[0] = 0;
  if ( (v8 & 1) != 0 )
    return 0;
  v10 = PsReferenceProcessFilePointer(a1, &Object);
  if ( v10 >= 0 )
  {
    v15 = 512;
    v7 = SecurityDescriptor;
    v10 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v10 >= 0 )
    {
      SecurityObject = ObQuerySecurityObject((_DWORD)Object, 132, (unsigned int)SecurityDescriptor, 512, (__int64)&v15);
      if ( SecurityObject == -1073741789 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v15, 538994003LL);
        v7 = Pool2;
        if ( !Pool2 )
        {
          v10 = -1073741801;
          goto LABEL_23;
        }
        v10 = RtlCreateSecurityDescriptor(Pool2, 1u);
        if ( v10 < 0 )
          goto LABEL_23;
        SecurityObject = ObQuerySecurityObject((_DWORD)Object, 132, (_DWORD)v7, v15, (__int64)&v15);
      }
      if ( SecurityObject >= 0 )
      {
        if ( v7 )
        {
          v10 = SepVerifyDesktopAppxPackageName(a2, v7, v14);
          if ( v10 >= 0 && a3 == 1 )
            TrustLabelAce = SeGetTrustLabelAce((__int64)v7);
          if ( v14[0] != 1 )
            goto LABEL_23;
          if ( a3 == 1 )
          {
            if ( !TrustLabelAce )
            {
              v10 = -1073740702;
              goto LABEL_23;
            }
          }
          else if ( a3 )
          {
            goto LABEL_23;
          }
          *a4 = 1;
          goto LABEL_23;
        }
        v10 = -1073739509;
      }
      else
      {
        v10 = 0;
      }
    }
  }
LABEL_23:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v7 && v7 != SecurityDescriptor )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
