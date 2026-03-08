/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x14029739C
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140296FB0 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140297BBC (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140297C28 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140297C74 (AuthzBasepFindSecurityAttributeValue.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14066C90C (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 SecurityAttributeValue; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  void *v15; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  int v18; // eax
  unsigned int v19; // edx

  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v4 = 0;
    v5 = 0LL;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( *(_WORD *)(a1 + 48) != 1 && *(_WORD *)(a1 + 48) != 2 )
      {
        if ( *(_WORD *)(a1 + 48) == 3 )
        {
          v6 = *(_QWORD *)(a2 + 32) + 16LL * (unsigned int)v5;
          goto LABEL_6;
        }
        if ( *(_WORD *)(a1 + 48) == 4 )
        {
          v6 = *(_QWORD *)(a2 + 32) + 24 * v5;
          goto LABEL_6;
        }
        if ( *(_WORD *)(a1 + 48) != 5 )
        {
          if ( *(_WORD *)(a1 + 48) == 6 )
            break;
          if ( *(_WORD *)(a1 + 48) != 16 )
            return (unsigned int)-1073741811;
        }
        v9 = (_QWORD *)(a2 + 32);
        v7 = (unsigned int)v5;
        SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(
                                   a1,
                                   *(_QWORD *)(a2 + 32) + 16LL * (unsigned int)v5);
LABEL_7:
        v4 = 0;
        v10 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
        {
          switch ( *(_WORD *)(a2 + 16) )
          {
            case 3:
              LODWORD(v10) = *(unsigned __int16 *)(*v9 + 16LL * (unsigned int)v5);
              break;
            case 4:
              LODWORD(v10) = *(unsigned __int16 *)(*v9 + 24LL * (unsigned int)v5 + 8);
              break;
            case 5:
            case 0x10:
              LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16 * v7 + 8);
              break;
          }
          v11 = AuthzBasepAllocateSecurityAttributeValue((unsigned int)v10);
          v13 = v11;
          if ( !v11 )
            return (unsigned int)-1073741670;
          switch ( *(_WORD *)(a2 + 16) )
          {
            case 1:
            case 2:
LABEL_15:
              *(_QWORD *)(v11 + 40) = *(_QWORD *)(*v9 + 8 * v7);
              goto LABEL_16;
            case 3:
              v15 = (void *)(v11 + 64);
              v16 = *(unsigned __int16 *)(*v9 + 16LL * (unsigned int)v5);
              *(_WORD *)(v11 + 40) = v16;
              *(_WORD *)(v11 + 42) = v16;
              *(_QWORD *)(v11 + 48) = v11 + 64;
              v17 = *(const void **)(*v9 + 16LL * (unsigned int)v5 + 8);
              break;
            case 4:
              *(_QWORD *)(v11 + 40) = *(_QWORD *)(*v9 + 24 * v7);
              v15 = (void *)(v11 + 64);
              v19 = *(unsigned __int16 *)(*v9 + 24 * v7 + 8);
              *(_WORD *)(v11 + 48) = v19;
              v16 = v19;
              *(_QWORD *)(v11 + 56) = v11 + 64;
              v17 = *(const void **)(*v9 + 24 * v7 + 16);
              break;
            default:
              if ( *(_WORD *)(a2 + 16) != 5 )
              {
                if ( *(_WORD *)(a2 + 16) == 6 )
                  goto LABEL_15;
                if ( *(_WORD *)(a2 + 16) != 16 )
                {
LABEL_16:
                  LOBYTE(v12) = 1;
                  AuthzBasepAddSecurityAttributeValueToLists(a1, v13, 0LL, v12);
                  goto LABEL_17;
                }
              }
              v15 = (void *)(v11 + 64);
              v16 = *(unsigned int *)(*v9 + 16 * v7 + 8);
              *(_DWORD *)(v11 + 48) = v16;
              *(_QWORD *)(v11 + 40) = v11 + 64;
              v17 = *(const void **)(*v9 + 16 * v7);
              break;
          }
          memmove(v15, v17, v16);
          goto LABEL_16;
        }
        v18 = *(_DWORD *)(SecurityAttributeValue + 32);
        if ( (v18 & 4) == 0 )
          return (unsigned int)-1073741771;
        *(_DWORD *)(v10 + 32) = v18 & 0xFFFFFFFB;
        AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v10, 0LL, (unsigned int)v5);
        --*(_DWORD *)(a1 + 64);
LABEL_17:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 24) )
          return v4;
      }
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v5);
LABEL_6:
      v7 = (unsigned int)v5;
      SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v6);
      v9 = (_QWORD *)(a2 + 32);
      goto LABEL_7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
