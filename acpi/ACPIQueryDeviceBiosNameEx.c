__int64 __fastcall ACPIQueryDeviceBiosNameEx(ULONG_PTR a1, char a2, struct _UNICODE_STRING *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v5 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( v5 )
  {
    v6 = ACPIAmliBuildObjectPathname(v5, &P, a2);
    if ( v6 >= 0 )
    {
      v6 = ACPIInitUnicodeString(a3);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v6;
}
