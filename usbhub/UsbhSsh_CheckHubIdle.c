__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  v3 = v2;
  if ( *(_BYTE *)(v2 + 3408)
    || *(_QWORD *)(v2 + 3104) != v2 + 3104
    || *(_DWORD *)(v2 + 3120)
    || *(_QWORD *)(v2 + 4824) != v2 + 4824
    || (*(_DWORD *)(v2 + 2560) & 0x10) != 0
    || *(int *)(v2 + 2740) > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
  {
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
  *(_BYTE *)(v3 + 3408) = 0;
  return result;
}
