/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x1406C5C0C
 * Callers:
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x1402A4F20 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1402A4F40 (SeTokenIsWriteRestricted.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(_QWORD *Token, _DWORD *a2, _BYTE *a3)
{
  int v4; // esi
  unsigned int v6; // r14d
  unsigned int v7; // esi
  __int64 v8; // r12
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  void *v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // ebp
  unsigned int v16; // r14d
  unsigned int v17; // esi
  __int64 v18; // r12
  void *v19; // r13
  void *v20; // [rsp+68h] [rbp+10h]

  *a3 = 0;
  v4 = a2[50];
  if ( ((v4 & 0x800) == 0 || (Token[25] & 0x800) != 0)
    && (!SeTokenIsRestricted(a2) || SeTokenIsRestricted(Token))
    && (!SeTokenIsWriteRestricted(a2) || SeTokenIsWriteRestricted(Token))
    && (!SeTokenIsRestricted(a2) || a2[32] >= *((_DWORD *)Token + 32))
    && (~*((_QWORD *)a2 + 9) & Token[9]) == 0LL
    && (~*((_QWORD *)a2 + 8) & Token[8]) == 0LL
    && (~v4 & (_DWORD)Token[25] & 0x1000) == 0 )
  {
    if ( SeTokenIsRestricted(a2) && (v14 = *((_DWORD *)Token + 32), v15 = 0, v14) )
    {
      v16 = a2[32];
      while ( 1 )
      {
        v17 = 0;
        if ( v16 )
        {
          v18 = *((_QWORD *)a2 + 20);
          v19 = *(void **)(Token[20] + 16LL * v15);
          do
          {
            if ( RtlEqualSid(v19, *(PSID *)(v18 + 16LL * v17)) )
              break;
            ++v17;
          }
          while ( v17 < v16 );
        }
        if ( v17 == v16 )
          break;
        if ( ++v15 >= v14 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v6 = a2[31];
      v7 = 0;
      if ( !v6 )
      {
LABEL_14:
        *a3 = 1;
        return 0LL;
      }
      v8 = *((_QWORD *)a2 + 19);
      while ( 1 )
      {
        if ( (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x10) != 0 )
        {
          v10 = *((_DWORD *)Token + 31);
          v11 = 0;
          if ( v10 )
          {
            v12 = *(void **)(v8 + 16LL * v7);
            v13 = Token[19];
            v20 = v12;
            while ( !RtlEqualSid(v12, *(PSID *)(v13 + 16LL * v11)) )
            {
              v12 = v20;
              if ( ++v11 >= v10 )
                goto LABEL_13;
            }
            if ( (*(_DWORD *)(v13 + 16LL * v11 + 8) & 0x10) == 0 )
              break;
          }
        }
LABEL_13:
        if ( ++v7 >= v6 )
          goto LABEL_14;
      }
    }
  }
  return 3221225569LL;
}
