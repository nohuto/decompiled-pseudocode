__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  __int64 v1; // rdx
  int v2; // edi

  v2 = BiOpenStoreKeyFromObject(a1);
  if ( v2 >= 0 )
  {
    LOBYTE(v1) = 1;
    BiSetFirmwareModified(0LL, v1);
  }
  return (unsigned int)v2;
}
