/*
 * XREFs of ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0288B1C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00A6BF0 (UmfdLoadFontFileView.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00A68A8 (Win32FileInfo.c)
 */

__int64 __fastcall FNTCacheValidateFntFileInfo(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)*a1;
      v11 = 0LL;
      v12 = 0LL;
      if ( !Win32FileInfo((PCWSTR)v6[10], &v12, &v11) )
        break;
      v7 = (_QWORD *)*a1;
      v8 = v11;
      if ( *(_QWORD *)*a1 != v12 || *((_DWORD *)v7 + 6) != (_DWORD)v11 )
        v2 = 1;
      *v7 = v12;
      ++v3;
      v9 = *a1++;
      *(_DWORD *)(v9 + 24) = v8;
      if ( v3 >= a2 )
        goto LABEL_9;
    }
    v2 = 2;
LABEL_9:
    if ( v2 == 1 && qword_1C033ABE8 )
      *(_DWORD *)(qword_1C033ABE8 + 16) |= 2u;
  }
  return v2;
}
