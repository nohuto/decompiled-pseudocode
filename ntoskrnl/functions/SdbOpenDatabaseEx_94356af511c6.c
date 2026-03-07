wchar_t ***SdbOpenDatabaseEx(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  wchar_t ***v5; // rax
  wchar_t ***v6; // rbx
  int MergeRedirectPath; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // rcx
  wchar_t *v12; // rdi
  wchar_t **v13; // rax
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  wchar_t ***v17; // [rsp+70h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF
  va_list Pa; // [rsp+88h] [rbp+48h]
  va_list va1; // [rsp+90h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  v15 = 0LL;
  v16 = 0;
  AslLogCallPrintf(3LL);
  v5 = (wchar_t ***)AslAlloc(v4, 0xA80uLL);
  v17 = v5;
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0xA80uLL);
    P = 0LL;
    MergeRedirectPath = SdbGetMergeRedirectPath((wchar_t **)Pa, a1);
    v10 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_11;
      v11 = 3LL;
    }
    else
    {
      if ( !P )
      {
        v10 = -1073741772;
        goto LABEL_11;
      }
      v10 = AslFileMappingCreate(v6, (const WCHAR *)P, 0LL, 0LL, 0LL);
      if ( v10 >= 0 )
      {
LABEL_11:
        if ( P )
          ExFreePoolWithTag(P, 0x74705041u);
        if ( (v10 < 0 || !*v6) && (int)AslFileMappingCreate(v6, a1, 0LL, 0LL, 0LL) < 0 )
          goto LABEL_31;
        v12 = (*v6)[3];
        if ( (unsigned __int64)(v12 - 21) > 0x7FFFFFD5 || (int)AslFileMappingEnsureMappedAs(*v6, v8, v9) < 0 )
          goto LABEL_31;
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = (_DWORD)v12;
        v13 = *v6;
        if ( *v6 )
          v13 = (wchar_t **)v13[4];
        v6[1] = v13;
        if ( !(unsigned int)SdbpReadMappedData((__int64)v6, 0, &v15, 0xCu) )
          goto LABEL_31;
        if ( v16 == 1717724275 )
        {
          if ( !(unsigned int)SdbpValidateAndApplyCompatFlags((__int64)v6, &v15, 0) )
            goto LABEL_32;
        }
        else
        {
          if ( v16 != 1717724282 )
          {
LABEL_31:
            AslLogCallPrintf(1LL);
LABEL_32:
            if ( v6 )
            {
              AslFileMappingDelete((PVOID *)*v6);
              ExFreePoolWithTag(v6, 0x74705041u);
            }
            return 0LL;
          }
          if ( !(unsigned int)SdbpOpenCompressedDatabase(&v17, 0LL, 0LL) )
          {
            AslLogCallPrintf(1LL);
            v6 = v17;
            goto LABEL_32;
          }
        }
        return v6;
      }
      v11 = 1LL;
    }
    AslLogCallPrintf(v11);
    goto LABEL_11;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
