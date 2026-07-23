/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14078FD48
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A8878 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078F5F0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140981618 (RtlpMuiRegGetInstalledLanguageIndex.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1403A8AE8 (_MuiRegAllocArray.c)
 *     RtlLCIDToCultureName @ 0x140916180 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14098176C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  LCID v4; // ebp
  char v8; // r15
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int16 v15; // r9
  wchar_t *v16; // rax
  wchar_t *v17; // rdi
  __int64 v18; // r8
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v8 = 0;
  String = 0LL;
  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 != 4096 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 0LL;
    if ( !*(_WORD *)(v11 + 6) )
    {
LABEL_15:
      v16 = (wchar_t *)MuiRegAllocArray(v12, 0x55u);
      v17 = v16;
      if ( v16 )
      {
        if ( a3 )
        {
          String.Buffer = v16;
          *(_DWORD *)&String.Length = 11141120;
          if ( RtlLCIDToCultureName(v4, &String) )
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, String.Buffer, v18, a4);
        }
        ExFreePoolWithTag(v17, 0);
        if ( v8 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = *(_QWORD *)(v11 + 16);
    while ( 1 )
    {
      v14 = 28LL * (int)v12;
      if ( *(_WORD *)(v14 + v13 + 4) == (_WORD)v4 )
      {
        v15 = *(_WORD *)(v14 + v13);
        if ( (v15 & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = v12;
          return 0LL;
        }
        if ( (v15 & 0x1000) != 0 )
          v8 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= *(unsigned __int16 *)(v11 + 6) )
        goto LABEL_15;
    }
  }
  return result;
}
