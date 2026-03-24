/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007A10
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeReenumerateMergeNamespaceChangeList @ 0x1C00069E4 (NVMeReenumerateMergeNamespaceChangeList.c)
 *     GetLocalCommand @ 0x1C000B8A8 (GetLocalCommand.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C001AC78 (NVMeReenumerateNameSpaceStart.c)
 */

__int16 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeListCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // rsi
  __int64 v4; // r11
  __int64 SrbExtension; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rbx
  char v9; // r8
  __int64 v10; // rdx
  _DWORD *v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8

  LocalCommand = GetLocalCommand(a1, a2);
  SrbExtension = GetSrbExtension(v4);
  v8 = SrbExtension;
  if ( !LocalCommand )
    goto LABEL_12;
  v9 = *(_BYTE *)(v7 + 3);
  if ( v9 == 14 )
    goto LABEL_12;
  if ( (*(_DWORD *)(a1 + 24) & 0xE) != 0 )
    goto LABEL_12;
  v10 = *(_QWORD *)(LocalCommand + 96);
  if ( *(_BYTE *)(v10 + 4136) != 4 )
    goto LABEL_12;
  if ( *(_QWORD *)(SrbExtension + 4200) )
  {
    if ( v9 == 1 )
    {
      LOWORD(SrbExtension) = NVMeReenumerateMergeNamespaceChangeList(
                               *(_QWORD *)(SrbExtension + 4232),
                               *(_DWORD **)(v10 + 4200));
      if ( *v11 )
      {
        LOWORD(SrbExtension) = NVMeReenumerateNameSpaceStart(a1);
        goto LABEL_13;
      }
LABEL_12:
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 2u);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 1u);
      goto LABEL_13;
    }
    v12 = *(_WORD *)(SrbExtension + 4250);
    LOWORD(SrbExtension) = v12 & 0xE00;
    if ( (v12 & 0xE00) == 0x200 )
    {
      LOWORD(SrbExtension) = 510;
      if ( (v12 & 0x1FE) == 0x12 )
      {
        **(_DWORD **)(v10 + 4200) = -1;
        NVMeReenumerateNameSpaceStart(a1);
        LOWORD(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
      }
    }
  }
LABEL_13:
  if ( LocalCommand && *(_QWORD *)(v8 + 4200) )
  {
    LOWORD(SrbExtension) = NVMeFreeDmaBuffer(
                             a1,
                             *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
                             (__int64 *)(*(_QWORD *)(LocalCommand + 96) + 4200LL),
                             *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
    *(_DWORD *)(v8 + 4240) = 0;
  }
  v13 = *(_QWORD *)(v8 + 4232);
  if ( v13 )
  {
    LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v13, v6);
    *(_QWORD *)(v8 + 4232) = 0LL;
  }
  *(_BYTE *)(v8 + 4253) |= 8u;
  return SrbExtension;
}
