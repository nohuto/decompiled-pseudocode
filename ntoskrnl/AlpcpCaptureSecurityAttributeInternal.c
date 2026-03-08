/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x1406D3584
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x1406D34B4 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x14077DE30 (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     AlpcReferenceBlobByHandle @ 0x1406D1E94 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140715630 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(PVOID Object, int a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  char v8; // di
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  if ( *a4 == -2LL )
  {
    if ( (a2 & 0x20000) != 0 )
    {
      v8 = 1;
LABEL_7:
      result = AlpcpCreateSecurityContext(Object, KeGetCurrentThread(), (__int64)v14);
      if ( (int)result >= 0 )
      {
        v10 = v14[0];
        *(_QWORD *)(a5 + 32) = v14[0];
        if ( v8 )
          *a4 = *(_QWORD *)(v10 + 8);
      }
      return result;
    }
    if ( (a2 & 0x10000) == 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    return 3221225480LL;
  }
  v11 = *((_QWORD *)Object + 2);
  if ( !v11 )
    return 3221225480LL;
  v12 = AlpcReferenceBlobByHandle((_QWORD *)(v11 + 40), *a4, AlpcSecurityType);
  v13 = v12;
  if ( !v12 )
    return 3221225480LL;
  if ( Object == *(PVOID *)(v12 + 24) )
  {
    if ( (a2 & 0x10000) != 0 )
    {
      if ( (unsigned __int8)AlpcpDeleteBlob(v12) )
        AlpcpDereferenceBlobEx(v13);
      AlpcpDereferenceBlobEx(v13);
      v13 = 0LL;
    }
    *(_QWORD *)(a5 + 32) = v13;
    return 0LL;
  }
  else
  {
    AlpcpDereferenceBlobEx(v12);
    return 3221225506LL;
  }
}
