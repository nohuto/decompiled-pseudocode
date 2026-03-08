/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x1C00158D0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v5 = *(_QWORD *)(v3 + 64);
  else
    v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v5 + 28);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v6 >= *(_DWORD *)(SrbExtension + 4240) )
      v6 = *(_DWORD *)(SrbExtension + 4240);
    memmove((void *)(v5 + *(unsigned int *)(v5 + 44)), *(const void **)(SrbExtension + 4200), v6);
  }
  else
  {
    *(_BYTE *)(v3 + 3) = 1;
  }
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4240),
             (__int64 *)(SrbExtension + 4200),
             *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
