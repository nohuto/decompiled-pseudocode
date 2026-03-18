/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0022AF0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     GetLocalCommand @ 0x1C0009D40 (GetLocalCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     NVMeReenumerateMergeNamespaceChangeList @ 0x1C00218B8 (NVMeReenumerateMergeNamespaceChangeList.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C00226AC (NVMeReenumerateNameSpaceStart.c)
 */

__int16 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeListCompletion(__int64 a1, __int64 a2)
{
  unsigned __int64 LocalCommand; // r14
  __int64 v4; // r11
  __int64 SrbExtension; // rax
  __int64 v6; // r11
  __int64 v7; // rbp
  __int64 v8; // r15
  char v9; // r8
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  _DWORD *v15; // r14
  __int16 v16; // r8
  __int64 v17; // r8

  LocalCommand = GetLocalCommand(a1, a2);
  SrbExtension = GetSrbExtension(v4);
  v7 = SrbExtension;
  v8 = *(_QWORD *)(SrbExtension + 4232);
  if ( !LocalCommand
    || (v9 = *(_BYTE *)(v6 + 3), v9 == 14)
    || (LODWORD(SrbExtension) = *(_DWORD *)(a1 + 32), (SrbExtension & 0xE) != 0)
    || (v10 = LocalCommand + 96, v11 = *(_QWORD *)(LocalCommand + 96), *(_BYTE *)(v11 + 4136) != 4) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
    v14 = (_QWORD *)(v7 + 4200);
    v13 = LocalCommand + 96;
    goto LABEL_17;
  }
  v12 = (_QWORD *)(v7 + 4200);
  v13 = LocalCommand + 96;
  v14 = (_QWORD *)(v7 + 4200);
  if ( !*(_QWORD *)(v7 + 4200) )
    goto LABEL_17;
  if ( v9 == 1 )
  {
    v15 = *(_DWORD **)(v11 + 4200);
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL);
    LOWORD(SrbExtension) = (unsigned __int16)NVMeReenumerateMergeNamespaceChangeList(v8, v15);
    if ( *v15 )
    {
      LOWORD(SrbExtension) = NVMeReenumerateNameSpaceStart(a1);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
    }
    goto LABEL_18;
  }
  v16 = *(_WORD *)(v7 + 4250);
  LOWORD(SrbExtension) = v16 & 0xE00;
  if ( (v16 & 0xE00) != 0x200
    || (LOWORD(SrbExtension) = 510, (v16 & 0x1FE) != 0x12)
    || (**(_DWORD **)(v11 + 4200) = -1,
        LOWORD(SrbExtension) = NVMeReenumerateNameSpaceStart(a1),
        v14 = (_QWORD *)(v7 + 4200),
        v13 = LocalCommand + 96,
        !*(_BYTE *)(a1 + 22)) )
  {
LABEL_17:
    v10 = v13;
    v12 = v14;
    if ( !LocalCommand )
      goto LABEL_20;
    goto LABEL_18;
  }
  LOWORD(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL);
LABEL_18:
  if ( *v12 )
  {
    LOWORD(SrbExtension) = NVMeFreeDmaBuffer(
                             a1,
                             *(unsigned int *)(*(_QWORD *)v10 + 4240LL),
                             (__int64 *)(*(_QWORD *)v10 + 4200LL),
                             *(_QWORD *)(*(_QWORD *)v10 + 4208LL));
    *(_DWORD *)(v7 + 4240) = 0;
  }
LABEL_20:
  v17 = *(_QWORD *)(v7 + 4232);
  if ( v17 )
  {
    LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v17);
    *(_QWORD *)(v7 + 4232) = 0LL;
  }
  *(_BYTE *)(v7 + 4253) |= 8u;
  return SrbExtension;
}
