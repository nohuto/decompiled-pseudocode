/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x140759BC8
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x140755F34 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 * Callees:
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407537AC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140759DC0 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1407C123C (SdbFindNextStringIndexedTag.c)
 *     SdbTagIDToTagRef @ 0x1407CD6D0 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  void *v7; // rsi
  unsigned __int16 v10; // r14
  __int64 v11; // r15
  wchar_t *v12; // rax
  __int64 v13; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r12
  __int64 v18; // r13
  unsigned int v19; // edi
  unsigned int i; // eax
  __int64 v21; // r9
  unsigned int v22; // ebx
  _OWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(void **)(a1 + 8);
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0LL;
    goto LABEL_10;
  }
  v10 = 28700;
  v11 = (__int64)a3;
  v12 = wcsrchr(a3, 0x5Cu);
  if ( !v12 )
  {
LABEL_10:
    v13 = (__int64)a3;
    goto LABEL_4;
  }
  v13 = (__int64)(v12 + 1);
LABEL_4:
  v26 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v7, v10, 24577LL, v13, v24);
  v17 = a7;
  v18 = a6;
  while ( 1 )
  {
    v19 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v7, v10, v15, v13, (unsigned int *)v24);
            ;
            i = SdbpFindNextIndexedWildCardTag((__int64)v7, (unsigned int *)v24) )
      {
        v22 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v11, v21, a5, v18, v17) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v7, v22, &v26) )
            return v26;
          goto LABEL_18;
        }
      }
      return v26;
    }
    if ( (unsigned int)SdbpCheckKObject(a1, FirstStringIndexedTag, v11, v16, a5, v18, v17) )
      break;
    FirstStringIndexedTag = SdbFindNextStringIndexedTag(v7, v24);
  }
  if ( !(unsigned int)SdbTagIDToTagRef(a1, v7, v19, &v26) )
LABEL_18:
    AslLogCallPrintf(1LL);
  return v26;
}
