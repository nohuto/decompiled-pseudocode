NTSTATUS __fastcall DxgkCreateRegistrySubkey(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES v5; // [rsp+40h] [rbp-38h] BYREF
  ULONG v6; // [rsp+80h] [rbp+8h] BYREF

  if ( !a1 )
    return -1073741811;
  v5.RootDirectory = a3;
  v5.ObjectName = a4;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  v6 = 0;
  return ZwCreateKey(a1, a2, &v5, 0, 0LL, 0, &v6);
}
