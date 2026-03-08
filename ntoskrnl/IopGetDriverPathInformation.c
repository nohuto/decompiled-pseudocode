/*
 * XREFs of IopGetDriverPathInformation @ 0x140553224
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     IopVerifyDriverObjectOnStack @ 0x1405541A8 (IopVerifyDriverObjectOnStack.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 */

__int64 __fastcall IopGetDriverPathInformation(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  _WORD v11[2]; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v12 = 0;
  if ( (unsigned int)(a3 - 8) < *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v13 = a2 + 8;
  v11[0] = *(_WORD *)(a2 + 4);
  v11[1] = v11[0];
  result = ObReferenceObjectByName(v11, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = KeAcquireQueuedSpinLock(0xAuLL);
    v8 = *(_QWORD *)(a1 + 16);
    LOBYTE(v9) = v6;
    if ( v8 && (v10 = *(_QWORD *)(v8 + 8)) != 0 && (unsigned __int8)IopVerifyDriverObjectOnStack(v10, 0LL, v7, v9) )
      *(_BYTE *)a2 = 1;
    else
      *(_BYTE *)a2 = IopVerifyDriverObjectOnStack(*(_QWORD *)(a1 + 8), 0LL, v7, v9);
    KeReleaseQueuedSpinLock(0xAuLL, v9);
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    return 0LL;
  }
  return result;
}
