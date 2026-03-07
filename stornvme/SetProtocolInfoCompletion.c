__int64 __fastcall SetProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r9
  const void *v7; // rdx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(result + 4240);
    result = *(unsigned int *)(result + 4240);
    if ( (_DWORD)result )
    {
      v7 = *(const void **)(v5 + 4200);
      if ( v7 )
        result = (__int64)memmove((void *)(*(unsigned int *)(v6 + 52) + v6 + 36), v7, (unsigned int)result);
    }
  }
  else
  {
    *(_DWORD *)(v6 + 56) = 0;
  }
  if ( *(_QWORD *)(v5 + 4200) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4240), (__int64 *)(v5 + 4200), *(_QWORD *)(v5 + 4208));
  *(_DWORD *)(v5 + 4240) = 0;
  *(_QWORD *)(v5 + 4200) = 0LL;
  *(_BYTE *)(v5 + 4253) |= 8u;
  return result;
}
