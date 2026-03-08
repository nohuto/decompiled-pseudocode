/*
 * XREFs of EngFntCacheLookUp @ 0x1C011D690
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011D480 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C0116040 (SearchFNTCacheHlink.c)
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v2; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // r8
  ULONG v8; // eax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  *pulSize = 0;
  v10 = 0LL;
  if ( !FastCheckSum )
    return 0LL;
  v5 = *(_QWORD *)(SGDGetSessionState(FastCheckSum) + 32);
  if ( (*(_DWORD *)(v5 + 19384) & 1) != 0 )
  {
    v6 = *(__int64 **)(v5 + 19392);
    if ( v6 )
    {
      if ( *v6 )
      {
        SearchFNTCacheHlink(FastCheckSum, &v10, *v6);
        v7 = v10;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 24) & 1) == 0 )
          {
            v8 = *(_DWORD *)(v10 + 16);
            *pulSize = v8;
            if ( v8 )
              return (PVOID)(*(_QWORD *)(*(_QWORD *)(v5 + 19392) + 24LL) + *(unsigned int *)(v7 + 20));
          }
        }
      }
    }
  }
  return v2;
}
