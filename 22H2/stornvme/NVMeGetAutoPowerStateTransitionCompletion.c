/*
 * XREFs of NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0018F50
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 */

char __fastcall NVMeGetAutoPowerStateTransitionCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rbx

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( v4 )
  {
    LOBYTE(SrbExtension) = *(_BYTE *)(v3 + 3);
    if ( (_BYTE)SrbExtension != 14 )
    {
      if ( (_BYTE)SrbExtension == 1 )
        *(_DWORD *)(v5 + 1664) ^= (*(_DWORD *)(v5 + 1664) ^ (*v4 << 6)) & 0x40;
      if ( *(_QWORD *)(v6 + 4200) )
      {
        LOBYTE(SrbExtension) = NVMeFreeDmaBuffer(
                                 v5,
                                 *(unsigned int *)(v6 + 4240),
                                 (__int64 *)(v6 + 4200),
                                 *(_QWORD *)(v6 + 4208));
        *(_DWORD *)(v6 + 4240) = 0;
      }
      *(_BYTE *)(v6 + 4253) |= 8u;
    }
  }
  return SrbExtension;
}
