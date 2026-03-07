__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rsi
  int v8; // eax
  int InfoKey; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v14 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    InfoKey = DrvDbOpenDeviceIdRegKey(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_9;
    v8 = (int)Handle[0];
  }
  InfoKey = PnpCtxRegQueryInfoKey((__int64)&v14, v8, 0, 0, (__int64)&v14, 0LL, 0LL);
  if ( InfoKey >= 0 )
  {
    v11 = a5;
    if ( !v14
      || (InfoKey = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_140C096F8, 3u, a4, a5, v6), InfoKey >= 0) )
    {
      if ( v11 < *v6 )
        InfoKey = -1073741789;
    }
  }
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)InfoKey;
}
