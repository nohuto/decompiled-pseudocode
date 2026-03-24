/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C0002180
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x1C0004590 (ProcessNvmeHealthInfoLog.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _DWORD *v6; // r8
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  const void *v9; // rdx

  result = GetSrbExtension(a2);
  v7 = result;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v8 = *(_DWORD **)(v5 + 64);
  else
    v8 = *(_DWORD **)(v5 + 24);
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    if ( v8[10] == 3 )
      v8[15] = *v6;
    v8[14] = *(_DWORD *)(result + 4240);
    result = *(unsigned int *)(result + 4240);
    if ( (_DWORD)result )
    {
      v9 = *(const void **)(v7 + 4200);
      if ( v9 )
      {
        result = (__int64)memmove((char *)v8 + (unsigned int)v8[13] + 36, v9, (unsigned int)result);
        if ( v8[10] == 2 && v8[11] == 2 )
          result = ProcessNvmeHealthInfoLog(a1, a2, *(_QWORD *)(v7 + 4200), 13LL);
      }
    }
  }
  else
  {
    v8[14] = 0;
  }
  if ( *(_QWORD *)(v7 + 4200) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v7 + 4240), v7 + 4200, *(_QWORD *)(v7 + 4208));
  *(_DWORD *)(v7 + 4240) = 0;
  *(_QWORD *)(v7 + 4200) = 0LL;
  *(_BYTE *)(v7 + 4253) |= 8u;
  return result;
}
