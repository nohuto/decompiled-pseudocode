__int64 BapdpProcessBootMetadata()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  _DWORD *v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  ExSoftRebootFlags = 0;
  ExSoftRebootState = 0;
  ExBootLoaderMetadata = 0LL;
  ExBootLoaderMetadataLock = 0LL;
  v4 = 0LL;
  v5[0] = 1527004268;
  v5[1] = 1201445829;
  v5[2] = 1736995215;
  v5[3] = 1054971003;
  if ( (int)KsrGetFirmwareInformation(&v4) >= 0 && v4 && *v4 >= 8u && (v4[81] & 1) != 0 )
    ExSoftRebootFlags |= 0x10000000u;
  if ( (qword_140C316F8 & 4) != 0 )
  {
    ExSoftRebootState = 2;
    ExSoftRebootFlags = 2;
  }
  LODWORD(v4) = 0;
  result = BapdpQueryData(v0, v5, 0LL, 0LL, &v4);
  if ( (_DWORD)result == -1073741789 )
  {
    result = ExAllocatePool2(256LL, (unsigned int)v4 + 4LL, 0x64506142u);
    v3 = (_DWORD *)result;
    if ( result )
    {
      BapdpQueryData(v2, v5, 0LL, result + 4, &v4);
      *v3 = (_DWORD)v4;
      ExBootLoaderMetadata = v3;
      result = KsrInitPageDatabase(v3 + 1);
      if ( (int)result >= 0 )
        ExSoftRebootFlags |= 4u;
    }
  }
  return result;
}
