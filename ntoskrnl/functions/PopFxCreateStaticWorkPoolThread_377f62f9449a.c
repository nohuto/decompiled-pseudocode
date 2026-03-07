__int64 __fastcall PopFxCreateStaticWorkPoolThread(__int64 a1)
{
  int v1; // ebx
  __int128 v3; // [rsp+50h] [rbp-30h] BYREF
  __int64 v4; // [rsp+60h] [rbp-20h]
  int v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+6Ch] [rbp-14h]
  __int128 v7; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v6 = 0;
  Handle = 0LL;
  v4 = 0LL;
  v3 = 0x30uLL;
  v5 = 512;
  v7 = 0LL;
  v1 = PsCreateSystemThreadEx(
         (__int64)&Handle,
         0x1FFFFF,
         &v3,
         0LL,
         0LL,
         (__int64)PopFxStaticWorkPoolThread,
         a1,
         0LL,
         0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
