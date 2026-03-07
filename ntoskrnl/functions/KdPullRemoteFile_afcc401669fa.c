__int64 __fastcall KdPullRemoteFile(int a1)
{
  _DWORD v2[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  v4 = 0;
  v2[0] = 128;
  v2[1] = 5;
  v2[2] = 32;
  return KdPullRemoteFileEx(
           a1,
           (unsigned int)KdpCreateFileCallback,
           (unsigned int)&KdpWriteFileCallback,
           (unsigned int)KdpCloseFileCallback,
           (__int64)v2);
}
