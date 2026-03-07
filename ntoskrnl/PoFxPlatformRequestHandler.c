__int64 __fastcall PoFxPlatformRequestHandler(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d

  v1 = *a1;
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    if ( (_DWORD)v1 == 2 && a1[4] == 1 )
      *((_BYTE *)a1 + 20) = PopFxAcpiPepRegistered;
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)PopFxAcpiDispatchNotification(a1 + 4, v1, 0LL);
  }
  return v2;
}
