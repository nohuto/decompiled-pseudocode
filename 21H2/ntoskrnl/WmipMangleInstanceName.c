/*
 * XREFs of WmipMangleInstanceName @ 0x14075EF9C
 * Callers:
 *     WmipBuildInstanceSet @ 0x14075D4B8 (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     WmipFindISinGEbyName @ 0x14075F09C (WmipFindISinGEbyName.c)
 *     WmipUnreferenceEntry @ 0x1407838E0 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140783CD8 (WmipFindGEByGuid.c)
 */

__int64 __fastcall WmipMangleInstanceName(__int64 a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  unsigned int v5; // edi
  NTSTRSAFE_PCWSTR v8; // r11
  __int64 GEByGuid; // rbp
  size_t v10; // rsi
  __int16 i; // bx
  __int64 ISinGEbyName; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  size_t v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = 0;
  v14 = 0;
  v15[0] = 0LL;
  RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, v15);
  RtlStringCchCopyW(a4, a3, v8);
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  if ( GEByGuid )
  {
    v10 = v15[0] - 1;
    for ( i = 90; ; a4[v10] = i )
    {
      ISinGEbyName = WmipFindISinGEbyName(GEByGuid, a4, &v14);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry(&WmipISChunkInfo, ISinGEbyName);
      if ( i == 90 )
      {
        ++v10;
        i = 65;
        if ( v10 == a3 - 1 )
        {
          v5 = -1073741670;
          break;
        }
        a4[v10 + 1] = 0;
      }
      else
      {
        ++i;
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
  }
  return v5;
}
