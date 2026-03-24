/*
 * XREFs of FreeFileView @ 0x1C00A5B30
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00A58B4 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00A4CA4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00A8BAC (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     vUnmapRemoteFonts @ 0x1C028A6F0 (vUnmapRemoteFonts.c)
 */

void __fastcall FreeFileView(struct _FILEVIEW **a1, unsigned int a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v4; // rbp
  struct _FILEVIEW **v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  struct _FILEVIEW **v8; // rsi
  unsigned __int64 v9; // rbp
  char v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v10, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  if ( UmfdFileviewLookup )
  {
    v7 = v2;
    v8 = a1;
    v9 = 0LL;
    if ( a1 > &a1[v2] )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        v11 = *((_DWORD *)*v8 + 16);
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v11, &v11);
        ++v9;
        ++v8;
      }
      while ( v9 < v7 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
  v4 = v2;
  v5 = a1;
  v6 = 0LL;
  if ( a1 > &a1[v2] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *((_QWORD *)*v5 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v5);
      ++v5;
      ++v6;
    }
    while ( v6 < v4 );
  }
  Win32FreePool(a1);
}
