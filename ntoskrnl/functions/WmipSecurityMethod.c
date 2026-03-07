__int64 __fastcall WmipSecurityMethod(
        unsigned __int16 *Object,
        int a2,
        ULONG *a3,
        void *a4,
        ULONG *a5,
        __int64 a6,
        POOL_TYPE a7,
        PGENERIC_MAPPING a8)
{
  int v9; // edx
  __int64 v10; // rdx
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  void *Pool2; // rax
  void *v16; // r14
  int v17; // eax
  POOL_TYPE v18[2]; // [rsp+20h] [rbp-F8h]
  PGENERIC_MAPPING v19; // [rsp+28h] [rbp-F0h]
  ULONG i; // [rsp+70h] [rbp-A8h] BYREF
  ULONG v21; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(Object, a4, a8, a6);
      }
      else
      {
        return ObDeassignSecurity(a6, v10, a8);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo((__int64)Object, a3, a4, a5);
    }
  }
  else
  {
    v12 = 64LL;
    if ( a7 != NonPagedPoolNx )
      v12 = 256LL;
    DestinationString = 0LL;
    v13 = ObSetSecurityDescriptorInfo(Object, a3, a4, a6, a7, a8);
    if ( v13 >= 0 )
    {
      v14 = 1024LL;
      for ( i = 1024; ; v14 = i )
      {
        Pool2 = (void *)ExAllocatePool2(v12, v14, 1885957463LL);
        v16 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v21 = -1;
        v17 = ObQuerySecurityDescriptorInfo((__int64)Object, &v21, Pool2, &i);
        v13 = v17;
        if ( v17 != -1073741789 )
          break;
        ExFreePoolWithTag(v16, 0);
      }
      if ( v17 >= 0 )
      {
        LODWORD(v19) = Object[15];
        v18[0] = Object[14];
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *((unsigned int *)Object + 6),
          *(_QWORD *)v18,
          v19,
          *((unsigned __int8 *)Object + 32),
          *((unsigned __int8 *)Object + 33),
          *((unsigned __int8 *)Object + 34),
          *((unsigned __int8 *)Object + 35),
          *((unsigned __int8 *)Object + 36),
          *((unsigned __int8 *)Object + 37),
          *((unsigned __int8 *)Object + 38),
          *((unsigned __int8 *)Object + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v13 = WmipSaveGuidSecurityDescriptor(&DestinationString, v16);
        ExFreePoolWithTag(v16, 0);
      }
    }
    return (unsigned int)v13;
  }
}
