__int64 __fastcall bCleanupFontTable(struct PFT **a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v5; // eax
  int v6; // edi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[0] = *a1;
  v2 = v8[0];
  if ( v8[0] )
  {
    v5 = PFTOBJ::bUnloadAllButPermanentFonts((PFTOBJ *)v8, a2);
    v6 = v5;
    if ( *(_QWORD *)(v2 + 8) )
      v6 = bCleanupFontHash((struct _FONTHASH **)(v2 + 8)) & v5;
    if ( *(_QWORD *)v2 )
      v6 &= bCleanupFontHash((struct _FONTHASH **)v2);
    if ( *(_QWORD *)(v2 + 16) )
      LOBYTE(v6) = bCleanupFontHash((struct _FONTHASH **)(v2 + 16)) & v6;
    if ( !*(_DWORD *)(v2 + 28) )
    {
      Win32FreePool((void *)v2);
      v2 = 0LL;
    }
    v3 = (v2 == 0) & (unsigned __int8)v6;
    *a1 = 0LL;
  }
  return v3;
}
