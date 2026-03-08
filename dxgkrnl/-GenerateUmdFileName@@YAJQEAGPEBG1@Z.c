/*
 * XREFs of ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C02CAAFC
 * Callers:
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02CB87C (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C003F868 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

signed int __fastcall GenerateUmdFileName(unsigned __int16 *const a1, const unsigned __int16 *a2, size_t *a3)
{
  size_t *NtSystemRoot; // rax
  __int64 v6; // rdx
  signed int result; // eax
  __int64 v8; // rdx
  unsigned __int16 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // r8
  unsigned __int16 v16; // r9
  unsigned __int16 *v17; // rax
  __int64 v18; // rdx

  RtlStringCbCopyW(a1, 0x208uLL, (size_t *)L"\\??\\");
  NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
  result = RtlStringCbCatW(a1, v6, NtSystemRoot);
  if ( result >= 0 )
  {
    v8 = 260LL;
    v9 = a1;
    v10 = 260LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    v11 = (260 - v10) & -(__int64)(v10 != 0);
    result = v10 == 0 ? 0xC000000D : 0;
    if ( v10 )
    {
      v12 = &a1[v11];
      v13 = 260 - v11;
      if ( 260 != v11 )
      {
        v14 = 2147483646LL;
        v15 = (char *)((char *)L"\\System32\\" - (char *)v12);
        do
        {
          if ( !v14 )
            break;
          v16 = *(unsigned __int16 *)((char *)v12 + (_QWORD)v15);
          if ( !v16 )
            break;
          *v12 = v16;
          --v14;
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      v17 = v12 - 1;
      if ( v13 )
        v17 = v12;
      v8 = -v13;
      *v17 = 0;
      result = v8 == 0 ? 0x80000005 : 0;
    }
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(a1, v8, (size_t *)L"HostDriverStore");
      if ( result >= 0 )
        return RtlStringCbCatW(a1, v18, a3);
    }
  }
  return result;
}
