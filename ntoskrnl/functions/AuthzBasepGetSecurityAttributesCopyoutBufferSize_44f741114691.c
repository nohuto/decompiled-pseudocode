__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        ULONGLONG *a4)
{
  NTSTATUS SecurityAttributeValueCopyoutBufferSize; // r8d
  ULONGLONG v9; // rbx
  unsigned int v10; // edi
  __int64 SecurityAttribute; // rax
  __int64 v12; // r8
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  ULONGLONG pullResult; // [rsp+58h] [rbp+38h] BYREF

  pullResult = 0LL;
  if ( !a2 )
  {
    SecurityAttributeValueCopyoutBufferSize = RtlULongLongMult(0x28uLL, *a1, &pullResult);
    if ( SecurityAttributeValueCopyoutBufferSize < 0 )
      return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
    v9 = pullResult + 16;
    if ( pullResult < 0xFFFFFFFFFFFFFFF0uLL )
    {
      v14 = *((_QWORD *)a1 + 1);
      while ( (unsigned int *)v14 != a1 + 2 )
      {
        v15 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 < v9 )
          return (unsigned int)-1073741675;
        v16 = *(unsigned __int16 *)(v14 + 32);
        if ( v16 + v15 < v15 )
          return (unsigned int)-1073741675;
        pullResult = v16 + v15;
        SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v14, &pullResult);
        if ( SecurityAttributeValueCopyoutBufferSize < 0 )
          return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
        v14 = *(_QWORD *)v14;
        v9 = pullResult;
      }
      goto LABEL_20;
    }
    return (unsigned int)-1073741675;
  }
  SecurityAttributeValueCopyoutBufferSize = RtlULongLongMult(0x28uLL, a3, &pullResult);
  if ( SecurityAttributeValueCopyoutBufferSize < 0 )
    return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
  v9 = pullResult + 16;
  if ( pullResult >= 0xFFFFFFFFFFFFFFF0uLL )
    return (unsigned int)-1073741675;
  v10 = 0;
  if ( !a3 )
  {
LABEL_20:
    *a4 = v9;
    return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
  }
  while ( 1 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v10);
    v12 = SecurityAttribute;
    if ( !SecurityAttribute )
      return (unsigned int)-1073741275;
    v17 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 < v9 )
      return (unsigned int)-1073741675;
    v18 = *(unsigned __int16 *)(SecurityAttribute + 32);
    if ( v18 + v17 < v17 )
      return (unsigned int)-1073741675;
    pullResult = v17 + v18;
    SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, &pullResult);
    if ( SecurityAttributeValueCopyoutBufferSize < 0 )
      return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
    v9 = pullResult;
    if ( ++v10 >= a3 )
      goto LABEL_20;
  }
}
