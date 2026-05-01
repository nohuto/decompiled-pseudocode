/*
 * XREFs of ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1802BBC44
 * Callers:
 *     ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1801526F0 (--0-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1802BBCBC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(__int64 a1, char a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax

  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>();
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  v4 = (4 * ((a2 & 1) == 0)) | 2;
  if ( (a2 & 2) != 0 )
    v4 = 4 * ((a2 & 1) == 0);
  v5 = v4 | 8;
  if ( (a2 & 8) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (a2 & 4) == 0 )
    v6 = v5;
  *(_DWORD *)(a1 + 112) = v6;
  return a1;
}
