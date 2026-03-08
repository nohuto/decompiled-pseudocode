/*
 * XREFs of EtwpFindDebugId @ 0x140775478
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x1409EE4AC (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x140775684 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(__int64 a1, size_t a2, __int64 *a3, _DWORD *a4)
{
  int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  unsigned int i; // r15d
  size_t v14; // rcx
  size_t v15; // rdi
  void *v16; // rax
  void **v17; // rcx
  __int64 Pool2; // rax
  void *Src; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  __int128 v24; // [rsp+50h] [rbp-58h]
  size_t Size; // [rsp+60h] [rbp-48h]
  int v26; // [rsp+68h] [rbp-40h]

  v5 = a1;
  v6 = RtlImageNtHeader(a1);
  v8 = v6;
  v22 = v6;
  if ( !v6 )
    return 3221225595LL;
  LODWORD(Src) = 0;
  LOBYTE(v7) = 1;
  v9 = RtlImageDirectoryEntryToData(v5, v7, 6, (int)&Src);
  v10 = v9;
  v23 = v9;
  if ( !v9 || (unsigned int)Src < 0x1C )
    return 3221225485LL;
  v11 = (unsigned int)Src;
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v8, v5, a2, v9, (unsigned int)Src) )
    return 3221225595LL;
  v12 = v11 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v21 = i;
    if ( i >= (unsigned int)v12 )
      return 3221226021LL;
    v24 = *(_OWORD *)v10;
    Size = *(_QWORD *)(v10 + 16);
    v26 = *(_DWORD *)(v10 + 24);
    v14 = HIDWORD(Size);
    if ( HIDWORD(Size) > a2 )
      return 3221225485LL;
    v15 = (unsigned int)Size;
    if ( (unsigned int)Size > a2 || v14 > a2 - (unsigned int)Size )
      return 3221225485LL;
    if ( HIDWORD(v24) == 2 )
    {
      Src = (void *)(a1 + v14);
      if ( !(unsigned __int8)EtwpIsValidImageAddress(v22, a1, a2, (int)a1 + HIDWORD(Size), (unsigned int)Size) )
        return 3221225595LL;
      v16 = Src;
      if ( *(_DWORD *)Src == 1396986706 )
        break;
    }
    v10 += 28LL;
    v23 = v10;
  }
  if ( (unsigned int)v15 < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)v15 )
  {
    v17 = (void **)a3;
LABEL_16:
    *a4 = v15;
    memmove(*v17, v16, v15);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(256LL, v15, 1651995717LL);
  v17 = (void **)a3;
  *a3 = Pool2;
  if ( Pool2 )
  {
    v16 = Src;
    goto LABEL_16;
  }
  return 3221225495LL;
}
