__int64 vTrustedFontFileTableCleanup()
{
  __int64 result; // rax
  struct _RTL_AVL_TABLE *v1; // rbx
  BOOLEAN i; // dl
  struct _UNICODE_STRING *v3; // rax
  struct _UNICODE_STRING *v4; // rdi

  result = UserIsCurrentSessionHostServiceSession();
  if ( (_DWORD)result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *(_QWORD *)(gpxsGlobals + 16LL) = 0LL;
      result = gpxsGlobals;
      v1 = *(struct _RTL_AVL_TABLE **)(gpxsGlobals + 24LL);
      if ( v1 )
      {
        for ( i = 1; ; i = 0 )
        {
          v3 = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v1, i);
          v4 = v3;
          if ( !v3 )
            break;
          RtlFreeUnicodeString(v3);
          RtlDeleteElementGenericTableAvl(v1, v4);
        }
        Win32FreePool(*(void **)(gpxsGlobals + 24LL));
        result = gpxsGlobals;
        *(_QWORD *)(gpxsGlobals + 24LL) = 0LL;
      }
    }
  }
  return result;
}
