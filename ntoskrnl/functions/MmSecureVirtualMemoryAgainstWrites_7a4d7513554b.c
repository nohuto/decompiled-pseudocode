__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v4; // r12d
  int v5; // r15d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // [rsp+30h] [rbp-88h]
  int v15; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = a3;
  v5 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
  v9 = MiObtainReferencedVadEx(v3, 0, &v15);
  v10 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && MiVadSupportsPrivateCommit(v9)
      && ((*(_DWORD *)(v10 + 48) & 8) == 0 || (int)MiCheckSecuredVad(v10, v5, v4, 1, 0) >= 0)
      && (*(_DWORD *)(v10 + 48) & 0x200000) == 0
      && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0
      && (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x700) )
    {
      if ( (v11 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL), (v11 & 0x80u) != 0) && (v11 & 0x20) == 0
        || !(unsigned int)MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v12, v3, v8) )
      {
        if ( (int)MiSetReadOnlyOnSectionView(a1, v10, v3, v8) >= 0 )
        {
          v7 = MiAddSecureEntry(v10, v3, v8, -1073741823, 0);
          if ( !v7 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v8);
        }
      }
    }
    MiUnlockAndDereferenceVad((PVOID)v10);
  }
  if ( Process )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v7 )
    return qword_140C656C0 ^ a1 ^ v7;
  return v7;
}
