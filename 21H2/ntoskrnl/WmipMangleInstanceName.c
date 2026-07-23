/*
 * XREFs of WmipMangleInstanceName @ 0x140758428
 * Callers:
 *     WmipBuildInstanceSet @ 0x140756D98 (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140633FE0 (WmipFindGEByGuid.c)
 *     WmipFindISinGEbyName @ 0x140758528 (WmipFindISinGEbyName.c)
 */

__int64 __fastcall WmipMangleInstanceName(_QWORD *a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  unsigned int v5; // edi
  NTSTRSAFE_PCWSTR v8; // r11
  volatile signed __int64 *GEByGuid; // rbp
  size_t v10; // rsi
  __int16 i; // bx
  volatile signed __int64 *ISinGEbyName; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  size_t v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = 0;
  v14 = 0;
  v15[0] = 0LL;
  RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, v15);
  RtlStringCchCopyW(a4, a3, v8);
  GEByGuid = WmipFindGEByGuid(a1, 0);
  if ( GEByGuid )
  {
    v10 = v15[0] - 1;
    for ( i = 90; ; a4[v10] = i )
    {
      ISinGEbyName = (volatile signed __int64 *)WmipFindISinGEbyName(GEByGuid, a4, &v14);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISinGEbyName);
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
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
  }
  return v5;
}
