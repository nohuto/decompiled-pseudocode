/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0022A80
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetLocalCommand @ 0x1C0009C80 (GetLocalCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     NVMeReenumerateMergeNamespaceChangeList @ 0x1C0021848 (NVMeReenumerateMergeNamespaceChangeList.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C002263C (NVMeReenumerateNameSpaceStart.c)
 */

__int16 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeListCompletion(__int64 a1, __int64 a2)
{
  unsigned __int64 LocalCommand; // r14
  __int64 v4; // r11
  __int64 SrbExtension; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // r15
  char v10; // r8
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  _DWORD *v15; // r14
  __int16 v16; // r8
  __int64 v17; // r8

  LocalCommand = GetLocalCommand(a1, a2);
  SrbExtension = GetSrbExtension(v4);
  v8 = SrbExtension;
  v9 = *(_QWORD *)(SrbExtension + 4232);
  if ( !LocalCommand
    || (v10 = *(_BYTE *)(v7 + 3), v10 == 14)
    || (LODWORD(SrbExtension) = *(_DWORD *)(a1 + 32), (SrbExtension & 0xE) != 0)
    || (v11 = LocalCommand + 96, v6 = *(_QWORD *)(LocalCommand + 96), *(_BYTE *)(v6 + 4136) != 4) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
    v14 = (_QWORD *)(v8 + 4200);
    v13 = LocalCommand + 96;
    goto LABEL_17;
  }
  v12 = (_QWORD *)(v8 + 4200);
  v13 = LocalCommand + 96;
  v14 = (_QWORD *)(v8 + 4200);
  if ( !*(_QWORD *)(v8 + 4200) )
    goto LABEL_17;
  if ( v10 == 1 )
  {
    v15 = *(_DWORD **)(v6 + 4200);
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    LOWORD(SrbExtension) = (unsigned __int16)NVMeReenumerateMergeNamespaceChangeList(v9, v15);
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
  v16 = *(_WORD *)(v8 + 4250);
  LOWORD(SrbExtension) = v16 & 0xE00;
  if ( (v16 & 0xE00) != 0x200
    || (LOWORD(SrbExtension) = 510, (v16 & 0x1FE) != 0x12)
    || (**(_DWORD **)(v6 + 4200) = -1,
        LOWORD(SrbExtension) = NVMeReenumerateNameSpaceStart(a1),
        v14 = (_QWORD *)(v8 + 4200),
        v13 = LocalCommand + 96,
        !*(_BYTE *)(a1 + 22)) )
  {
LABEL_17:
    v11 = v13;
    v12 = v14;
    if ( !LocalCommand )
      goto LABEL_20;
    goto LABEL_18;
  }
  LOWORD(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
LABEL_18:
  if ( *v12 )
  {
    LOWORD(SrbExtension) = NVMeFreeDmaBuffer(
                             a1,
                             *(unsigned int *)(*(_QWORD *)v11 + 4240LL),
                             (__int64 *)(*(_QWORD *)v11 + 4200LL),
                             *(_QWORD *)(*(_QWORD *)v11 + 4208LL));
    *(_DWORD *)(v8 + 4240) = 0;
  }
LABEL_20:
  v17 = *(_QWORD *)(v8 + 4232);
  if ( v17 )
  {
    LOWORD(SrbExtension) = StorPortExtendedFunction(1LL, a1, v17, v6);
    *(_QWORD *)(v8 + 4232) = 0LL;
  }
  *(_BYTE *)(v8 + 4253) |= 8u;
  return SrbExtension;
}
