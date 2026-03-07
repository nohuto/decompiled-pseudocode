__int64 __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  enum _KMTUMDVERSION Version; // edx
  __int64 result; // rax
  __int64 v5; // rdx
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  Version = a2->Version;
  if ( (unsigned int)Version >= (NUM_KMTUMDVERSIONS|KMTUMDVERSION_DX11) )
    return 3221225485LL;
  v6 = 0LL;
  result = ADAPTER_RENDER::GetUMDFileName(this, Version, &v6);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)IsNullUmdDriver(&v6) )
    return 3221225485LL;
  return RtlStringCbCopyNW((char *)a2->UmdFileName, v5, (char *)v6.Buffer, v6.Length);
}
