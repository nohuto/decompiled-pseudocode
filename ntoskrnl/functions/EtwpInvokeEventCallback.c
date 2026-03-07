__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  unsigned int v5; // r10d
  __int64 result; // rax
  char v7; // r9
  __int64 v8; // r10
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int **)a2;
  v5 = *(_DWORD *)(a2 + 16);
  v9 = 0;
  result = EtwpGetNextEventOffsetType(v3, v5, &v9);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v7);
    if ( (_DWORD)result )
      return ((__int64 (__fastcall *)(char *, _QWORD, __int64))qword_140D1F268)((char *)v3 + v8, v9, a3);
  }
  return result;
}
