__int64 vNetworkedFontFileCleanup()
{
  __int64 result; // rax
  struct _RTL_AVL_TABLE *v1; // rbx
  BOOLEAN i; // dl
  HANDLE *v3; // rax
  HANDLE *v4; // rdi

  result = UserIsCurrentSessionHostServiceSession();
  if ( (_DWORD)result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *gpxsGlobals = 0LL;
      result = gpxsGlobals;
      v1 = *(struct _RTL_AVL_TABLE **)(gpxsGlobals + 8LL);
      if ( v1 )
      {
        for ( i = 1; ; i = 0 )
        {
          v3 = (HANDLE *)RtlEnumerateGenericTableAvl(v1, i);
          v4 = v3;
          if ( !v3 )
            break;
          ZwClose(*v3);
          RtlDeleteElementGenericTableAvl(v1, v4);
        }
        Win32FreePool(*(void **)(gpxsGlobals + 8LL));
        result = gpxsGlobals;
        *(_QWORD *)(gpxsGlobals + 8LL) = 0LL;
      }
    }
  }
  return result;
}
