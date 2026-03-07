__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *a6,
        unsigned int a7,
        void *a8,
        unsigned __int8 (__fastcall *a9)(char *, __int64),
        __int64 a10,
        int a11)
{
  __int64 v11; // rax
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  __int64 v19; // r9
  __int64 v20; // r9
  int GenericStorePropertyKeys; // eax
  wchar_t *Pool2; // rdi
  unsigned int v23; // r12d
  char *v24; // rax
  __int64 v25; // r9
  HANDLE v26; // rcx
  int v27; // eax
  int v28; // [rsp+20h] [rbp-69h]
  int v29; // [rsp+20h] [rbp-69h]
  int v30; // [rsp+28h] [rbp-61h]
  unsigned int v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h] BYREF
  char *v33; // [rsp+68h] [rbp-21h]
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  PVOID P; // [rsp+78h] [rbp-11h]
  HANDLE v36; // [rsp+80h] [rbp-9h] BYREF
  __int64 v37; // [rsp+88h] [rbp-1h]
  unsigned int v39; // [rsp+E8h] [rbp+5Fh] BYREF

  v11 = *(_QWORD *)&PiPnpRtlCtx;
  v37 = *(_QWORD *)&PiPnpRtlCtx;
  Handle = 0LL;
  v36 = 0LL;
  v39 = 0;
  v32 = 1;
  a5 = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_8;
    v11 = v37;
  }
  if ( a8
    || (ObjectProperty = PnpOpenObjectRegKey(v11, (__int64)a6, a7, 33554433, 0, (__int64)&v36), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v19 = (__int64)Handle;
      if ( a4 )
        v19 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(a1, a2, a3, v19, v28, 0, 0LL, 0, (__int64)&v39);
    }
    else
    {
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0, 0LL, 0, &v39);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v39 )
      {
        ObjectProperty = 0;
        goto LABEL_8;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20LL * v39, 1667526736LL);
      if ( !P )
      {
        ObjectProperty = -1073741670;
        goto LABEL_8;
      }
      if ( a3 )
      {
        v20 = (__int64)Handle;
        if ( a4 )
          v20 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(a1, a2, a3, v20, v29, 0, (__int64)P, v39, (__int64)&v39);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0, (__int64)P, v39, &v39);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_54;
      v31 = 256;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 256LL, 1667526736LL);
      if ( !Pool2 )
      {
LABEL_39:
        ObjectProperty = -1073741670;
        goto LABEL_54;
      }
      v23 = 0;
      if ( !v39 )
        goto LABEL_53;
      while ( 1 )
      {
        if ( a9 && !a9((char *)P + 20 * v23, a10) )
          goto LABEL_50;
        v24 = (char *)P + 20 * v23;
        v33 = v24;
        if ( a3 )
        {
          v25 = (__int64)Handle;
          if ( a4 )
            v25 = a4;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             a3,
                             v25,
                             0LL,
                             (__int64)v24,
                             (__int64)&v32,
                             (__int64)Pool2,
                             v31,
                             (__int64)&a5,
                             a11);
          if ( ObjectProperty == -1073741822 )
            goto LABEL_38;
        }
        else
        {
          ObjectProperty = PnpGetGenericStoreProperty(a1, a4, 0LL, (__int64)v24, &v32, (__int64)Pool2, v31, &a5);
        }
        if ( ObjectProperty != -1073741789 )
        {
          if ( ObjectProperty < 0 )
            goto LABEL_53;
          v26 = v36;
          if ( a8 )
            v26 = a8;
          v27 = PiDevCfgSetObjectProperty(v37, 0LL, a6, a7, (__int64)v26, v30, (__int64)v33, v32, Pool2, a5, a11);
          ObjectProperty = v27;
          if ( v27 != -1073741790 )
          {
            if ( v27 < 0 )
              goto LABEL_53;
            goto LABEL_50;
          }
LABEL_38:
          ObjectProperty = 0;
          goto LABEL_50;
        }
        if ( a5 <= v31 )
        {
          ObjectProperty = -1073741595;
LABEL_53:
          ExFreePoolWithTag(Pool2, 0);
LABEL_54:
          ExFreePoolWithTag(P, 0);
          break;
        }
        ExFreePoolWithTag(Pool2, 0);
        v31 = a5;
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, a5, 1667526736LL);
        if ( !Pool2 )
          goto LABEL_39;
        ObjectProperty = 0;
        --v23;
LABEL_50:
        if ( ++v23 >= v39 )
          goto LABEL_53;
      }
    }
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  if ( v36 )
    ZwClose(v36);
  return (unsigned int)ObjectProperty;
}
