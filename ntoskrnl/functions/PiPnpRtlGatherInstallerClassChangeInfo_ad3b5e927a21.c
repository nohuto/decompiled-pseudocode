__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v10; // eax
  int v11; // [rsp+60h] [rbp-98h] BYREF
  int v12; // [rsp+64h] [rbp-94h] BYREF
  int v13[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-78h] BYREF

  v12 = 0;
  v11 = 0;
  *(_OWORD *)v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1198550608LL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_16:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2u, a2, (volatile signed __int32 **)(Pool2 + 16));
    if ( Object < 0 )
      goto LABEL_16;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_16;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)&v12,
                     (__int64)v13,
                     16,
                     (__int64)&v11,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
    return 0;
  if ( ObjectProperty < 0 )
    goto LABEL_16;
  Object = PnpStringFromGuid(v13, v14);
  if ( Object < 0 )
    goto LABEL_16;
  v10 = PiDmGetObject(2LL, (__int64)v14, (_QWORD *)*a3 + 1);
  Object = v10;
  if ( v10 == -1073741772 )
  {
    return 0;
  }
  else if ( v10 < 0 )
  {
    goto LABEL_16;
  }
  return (unsigned int)Object;
}
