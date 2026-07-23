/*
 * XREFs of SdbOpenDatabaseEx @ 0x14096426C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1409669E4 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1407564A8 (SdbpValidateAndApplyCompatFlags.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     SdbpReadMappedData @ 0x14075A5EC (SdbpReadMappedData.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     SdbpOpenCompressedDatabase @ 0x1409676E8 (SdbpOpenCompressedDatabase.c)
 *     AslFileMappingEnsureMappedAs @ 0x140968164 (AslFileMappingEnsureMappedAs.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PVOID **SdbOpenDatabaseEx(const WCHAR *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  PVOID **v5; // rax
  PVOID **v6; // rbx
  char *v7; // rdi
  PVOID *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  PVOID **v12; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, PVOID **);
  v10 = 0LL;
  v11 = 0;
  AslLogCallPrintf(3LL);
  v5 = (PVOID **)AslAlloc(v4, 0xA80uLL);
  v12 = v5;
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0xA80uLL);
    if ( (int)AslFileMappingCreate((__int64 *)v6, a1, 0LL, 0LL, 0LL) >= 0 )
    {
      v7 = (char *)(*v6)[3];
      if ( (unsigned __int64)(v7 - 42) <= 0x7FFFFFD5 && (int)AslFileMappingEnsureMappedAs() >= 0 )
      {
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = (_DWORD)v7;
        v8 = *v6;
        if ( *v6 )
          v8 = (PVOID *)v8[4];
        v6[1] = v8;
        if ( (unsigned int)SdbpReadMappedData((__int64)v6, 0, &v10, 0xCu) )
        {
          if ( v11 == 1717724275 )
          {
            if ( (unsigned int)SdbpValidateAndApplyCompatFlags((__int64)v6, &v10) )
              return v6;
LABEL_18:
            if ( v6 )
            {
              AslFileMappingDelete(*v6);
              ExFreePoolWithTag(v6, 0x74705041u);
            }
            return 0LL;
          }
          if ( v11 == 1717724282 )
          {
            if ( !(unsigned int)SdbpOpenCompressedDatabase((PVOID ***)va) )
            {
              AslLogCallPrintf(1LL);
              v6 = v12;
              goto LABEL_18;
            }
            return v12;
          }
        }
      }
    }
    AslLogCallPrintf(1LL);
    goto LABEL_18;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
