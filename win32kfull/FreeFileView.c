void __fastcall FreeFileView(struct _FILEVIEW **a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r14
  struct _FILEVIEW **v6; // rsi
  struct _FILEVIEW **j; // rdi
  struct _FILEVIEW **v8; // rsi
  struct _FILEVIEW **i; // rdi
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v10);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( *(_QWORD *)(v5 + 23472) )
  {
    v8 = &a1[v3];
    for ( i = a1; i < v8; ++i )
    {
      v11 = *((_DWORD *)*i + 16);
      NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(*(_QWORD *)(v5 + 23472), &v11);
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
  v6 = &a1[v3];
  for ( j = a1; j < v6; ++j )
  {
    if ( *((_QWORD *)*j + 11) )
      vUnmapRemoteFonts();
    else
      vUnreferenceFileviewSection(*j);
  }
  Win32FreePool(a1);
}
