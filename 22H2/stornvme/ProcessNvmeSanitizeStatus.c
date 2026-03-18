/*
 * XREFs of ProcessNvmeSanitizeStatus @ 0x1C0024F48
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000368C (NVMeRequestComplete.c)
 *     NVMeQueueWorkItem @ 0x1C0016BF8 (NVMeQueueWorkItem.c)
 *     GetLunExtension @ 0x1C001B7C4 (GetLunExtension.c)
 */

char __fastcall ProcessNvmeSanitizeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 LunExtension; // r14
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  if ( (*(_WORD *)(a3 + 2) & 5) != 0 && *(_QWORD *)(a1 + 4328) )
  {
    v7 = *(_DWORD *)(a1 + 4336);
    if ( (v7 & 1) != 0 )
    {
      v8 = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(v8 + 4253) |= 8u;
      *(_BYTE *)(v9 + 3) = 4;
      NVMeRequestComplete(a1);
      *(_QWORD *)(a1 + 4328) = 0LL;
      *(_DWORD *)(a1 + 4336) &= ~1u;
    }
    else if ( (*(_WORD *)(a3 + 2) & 7) == 3 )
    {
      *(_DWORD *)(a1 + 4336) = v7 | 1;
      NVMeQueueWorkItem(a1, (__int64)NVMeSanitizeRecoverWorkItem);
    }
    else
    {
      v10 = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(v10 + 4253) |= 8u;
      *(_BYTE *)(v11 + 3) = 1;
      NVMeRequestComplete(a1);
      *(_QWORD *)(a1 + 4328) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, LunExtension);
  }
  return 0;
}
