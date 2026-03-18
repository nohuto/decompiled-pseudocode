/*
 * XREFs of IoctlQueryEnduranceInformation @ 0x1C001B91C
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall IoctlQueryEnduranceInformation(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebp
  __int64 v6; // rdx
  unsigned __int8 v7; // cl
  _DWORD *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 result; // rax

  v3 = 0;
  v4 = 0;
  GetSrbExtension(a2);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v7 = *(_BYTE *)(v6 + 7);
  GetNamespaceId(a1, v7);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v8 = *(_DWORD **)(a2 + 64);
    v9 = 60LL;
  }
  else
  {
    v8 = *(_DWORD **)(a2 + 24);
    v9 = 16LL;
  }
  v10 = *(_DWORD *)(a2 + v9);
  if ( v10 >= 0x54 )
  {
    NVMeZeroMemory(v8 + 7, v10 - 28);
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    v3 = -1056964605;
  }
  else
  {
    if ( v10 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  v8[8] = 56;
  v8[7] = 56;
  result = v3;
  v8[6] = v4;
  return result;
}
