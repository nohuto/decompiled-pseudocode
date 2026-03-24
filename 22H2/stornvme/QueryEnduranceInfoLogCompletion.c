/*
 * XREFs of QueryEnduranceInfoLogCompletion @ 0x1C0016330
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall QueryEnduranceInfoLogCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(v2 + 64);
    result = *(unsigned __int8 *)(*(unsigned int *)(v2 + 52) + v2 + 10);
  }
  else
  {
    result = *(unsigned __int8 *)(v2 + 7);
    v5 = *(_QWORD *)(v2 + 24);
  }
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    v7 = *(_QWORD *)(SrbExtension + 4200);
    v8 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * result + 1736) + 94LL);
    *(_DWORD *)(v5 + 36) = 1;
    *(_DWORD *)(v5 + 40) = v8;
    result = *(unsigned __int8 *)(v7 + 5);
    *(_DWORD *)(v5 + 36) = 5;
    *(_DWORD *)(v5 + 48) = result;
    v9 = *(_OWORD *)(v7 + 48);
    *(_DWORD *)(v5 + 36) = 13;
    *(_OWORD *)(v5 + 52) = v9;
    v10 = *(_OWORD *)(v7 + 64);
    *(_DWORD *)(v5 + 36) = 29;
    *(_OWORD *)(v5 + 68) = v10;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( *(_QWORD *)(SrbExtension + 4200) )
    result = NVMeFreeDmaBuffer(
               v4,
               *(unsigned int *)(SrbExtension + 4240),
               (__int64 *)(SrbExtension + 4200),
               *(_QWORD *)(SrbExtension + 4208));
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_DWORD *)(v5 + 24) = 56;
  return result;
}
