__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v3; // rbx
  unsigned int v4; // edi

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1836411216LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        v4 = ExInitializeResourceLite(Pool2);
        if ( (v4 & 0xC0000000) == 0xC0000000 )
          goto LABEL_11;
        if ( _InterlockedCompareExchange64(a1, (signed __int64)v3, 0LL) )
          ExDeleteResourceLite(v3);
        else
          v3 = 0LL;
        v4 = 0;
        if ( v3 )
LABEL_11:
          ExFreePoolWithTag(v3, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
