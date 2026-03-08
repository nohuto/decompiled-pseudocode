/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x1402475E0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140247394 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140247720 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402D5E70 (AuthzBasepCopyoutSecurityAttributes.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        size_t Size,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  unsigned int v7; // r10d
  unsigned int v9; // ebx
  _QWORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  __int64 result; // rax
  int v16; // ebp
  __int64 v17; // r15
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  v18 = 0LL;
  v9 = a3;
  *a6 = 0;
  if ( *a1 )
  {
    if ( (_DWORD)a3 )
    {
      v12 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        v13 = *((_WORD *)v12 - 4);
        if ( !v13 )
          return 3221225485LL;
        v14 = *((_WORD *)v12 - 3);
        if ( !v14 || v13 > v14 || !*v12 )
          return 3221225485LL;
        ++v7;
        v12 += 2;
        if ( v7 >= (unsigned int)a3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      result = AuthzBasepGetSecurityAttributesCopyoutBufferSize(a1, a2, a3, &v18);
      if ( (int)result >= 0 )
      {
        v16 = v18;
        if ( v18 )
        {
          v17 = (unsigned int)Size;
          if ( (unsigned int)Size < v18 )
          {
            result = 3221225507LL;
            *v6 = v18;
          }
          else
          {
            memset(a4, 0, (unsigned int)Size);
            result = AuthzBasepCopyoutSecurityAttributes(a1, a2, v9, a4, v17);
            *v6 = v16;
          }
        }
        else
        {
          return 3221225485LL;
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)Size < 0x10 )
    {
      v7 = -1073741789;
    }
    else
    {
      *a4 = 0LL;
      *(_WORD *)a4 = 1;
    }
    *v6 = 16;
    return v7;
  }
  return result;
}
