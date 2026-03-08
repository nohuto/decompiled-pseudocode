/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x140297C74
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14029739C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14066C5AC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140776900 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140297EF8 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // r13d
  __int64 *v4; // r12
  __int64 *v5; // r14
  unsigned __int64 v6; // r15
  char v7; // di
  int v8; // ebx
  _QWORD *v10; // r14
  int v12; // ebx
  int v13; // ebx
  bool v14; // zf
  __int128 *v15; // rdx
  int v16; // ebx
  __int128 *v17; // rdx
  bool v18; // zf
  unsigned int v19; // eax
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  unsigned int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-20h] BYREF
  __int128 v25; // [rsp+30h] [rbp-10h] BYREF

  v3 = a3;
  v4 = (__int64 *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0;
  v8 = a3;
  v25 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    v8 = v3;
    if ( v3 == 1 || v3 == 2 )
      goto LABEL_25;
    if ( v3 == 3 )
    {
      v15 = (__int128 *)(v5 + 5);
      LOWORD(v24) = *(_WORD *)a2;
      WORD1(v24) = v24;
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(a2 + 8);
      goto LABEL_17;
    }
    if ( v3 != 4 )
    {
      switch ( v3 )
      {
        case 5:
          goto LABEL_32;
        case 6:
LABEL_25:
          v18 = a2 == v5[5];
          break;
        case 16:
LABEL_32:
          v19 = *(_DWORD *)(a2 + 8);
          if ( v19 != *((_DWORD *)v5 + 12) )
            goto LABEL_19;
          v18 = memcmp(*(const void **)a2, (const void *)v5[5], v19) == 0;
          break;
        default:
          goto LABEL_19;
      }
      if ( v18 )
      {
        v7 = 1;
        break;
      }
      goto LABEL_19;
    }
    LOWORD(v24) = *(_WORD *)(a2 + 8);
    WORD1(v24) = v24;
    *((_QWORD *)&v24 + 1) = *(_QWORD *)(a2 + 16);
    LOWORD(v25) = *((_WORD *)v5 + 24);
    WORD1(v25) = v25;
    *((_QWORD *)&v25 + 1) = v5[7];
    if ( *(_QWORD *)a2 == v5[5] )
    {
      v15 = &v25;
LABEL_17:
      if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v24, v15) )
        v7 = 1;
    }
LABEL_19:
    v5 = (__int64 *)*v5;
    if ( v7 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( !v7 )
  {
    if ( v10 == (_QWORD *)(a1 + 96) )
      return v6 & -(__int64)(v7 != 0);
    v6 = (unsigned __int64)(v10 - 2);
    if ( (v10[2] & 1) == 0 )
    {
      v12 = v8 - 1;
      if ( !v12 )
        goto LABEL_9;
      v13 = v12 - 1;
      if ( !v13 )
        goto LABEL_9;
      v16 = v13 - 1;
      if ( !v16 )
      {
        v17 = (__int128 *)(v6 + 40);
        LOWORD(v24) = *(_WORD *)a2;
        WORD1(v24) = v24;
        *((_QWORD *)&v24 + 1) = *(_QWORD *)(a2 + 8);
        goto LABEL_23;
      }
      v20 = v16 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
          goto LABEL_40;
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 != 10 )
            goto LABEL_11;
LABEL_40:
          v23 = *(_DWORD *)(a2 + 8);
          if ( v23 != *(_DWORD *)(v6 + 48) )
            goto LABEL_11;
          v14 = memcmp(*(const void **)a2, *(const void **)(v6 + 40), v23) == 0;
        }
        else
        {
LABEL_9:
          v14 = a2 == *(_QWORD *)(v6 + 40);
        }
        if ( v14 )
        {
          v7 = 1;
          return v6 & -(__int64)(v7 != 0);
        }
        goto LABEL_11;
      }
      LOWORD(v24) = *(_WORD *)(a2 + 8);
      WORD1(v24) = v24;
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(a2 + 16);
      LOWORD(v25) = *(_WORD *)(v6 + 48);
      WORD1(v25) = v25;
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v6 + 56);
      if ( *(_QWORD *)a2 == *(_QWORD *)(v6 + 40) )
      {
        v17 = &v25;
LABEL_23:
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v24, v17) )
          v7 = 1;
      }
    }
LABEL_11:
    v10 = (_QWORD *)*v10;
    v8 = v3;
  }
  return v6 & -(__int64)(v7 != 0);
}
