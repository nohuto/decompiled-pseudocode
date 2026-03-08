/*
 * XREFs of ProcessNvmeSanitizeStatus @ 0x1C0024F88
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C001E210 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     NVMeQueueWorkItem @ 0x1C0016B88 (NVMeQueueWorkItem.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 */

char __fastcall ProcessNvmeSanitizeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v6; // r9
  __int64 LunExtension; // r14
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  if ( (*(_WORD *)(a3 + 2) & 5) != 0 && *(_QWORD *)(a1 + 4328) )
  {
    v8 = *(_DWORD *)(a1 + 4336);
    if ( (v8 & 1) != 0 )
    {
      v9 = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(v9 + 4253) |= 8u;
      *(_BYTE *)(v10 + 3) = 4;
      NVMeRequestComplete(a1, v10);
      *(_QWORD *)(a1 + 4328) = 0LL;
      *(_DWORD *)(a1 + 4336) &= ~1u;
    }
    else if ( (*(_WORD *)(a3 + 2) & 7) == 3 )
    {
      *(_DWORD *)(a1 + 4336) = v8 | 1;
      NVMeQueueWorkItem(a1, (__int64)NVMeSanitizeRecoverWorkItem, *(unsigned int *)(a3 + 4), v6);
    }
    else
    {
      v11 = GetSrbExtension(*(_QWORD *)(a1 + 4328));
      *(_BYTE *)(v11 + 4253) |= 8u;
      *(_BYTE *)(v12 + 3) = 1;
      NVMeRequestComplete(a1, v12);
      *(_QWORD *)(a1 + 4328) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, LunExtension, 1LL);
  }
  return 0;
}
