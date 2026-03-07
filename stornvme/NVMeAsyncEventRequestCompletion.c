char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 SrbExtension; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // r15
  char v11; // r11
  unsigned int v12; // esi
  int v13; // ecx
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r9
  char v17; // cl
  __int64 v18; // r9
  char v19; // cl

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( !v8 || *(_BYTE *)(v6 + 3) == 14 || (*(_DWORD *)(a1 + 32) & 0xE) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, v6);
  v10 = (_BYTE *)SrbExtension;
  if ( v11 != 1 )
  {
    *(_BYTE *)(v7 + 4253) |= 8u;
    if ( *(_BYTE *)(a1 + 22) )
      LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    goto LABEL_54;
  }
  v12 = 0;
  v13 = *(_DWORD *)a3 & 7;
  if ( !v13 )
  {
    v12 = 64;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    v14 = *(_BYTE *)(a3 + 1);
    if ( v14 == 1 )
    {
      v15 = a1;
    }
    else
    {
      if ( v14 != 3 || !IsNVMeControllerOnFatalError(a1) )
        goto LABEL_51;
      v15 = a1;
      if ( *(_QWORD *)(a1 + 4208) )
      {
        NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v16);
        goto LABEL_51;
      }
    }
    NVMeControllerAsyncReset(v15, 0, 0LL, 0LL);
LABEL_51:
    LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v12);
    goto LABEL_54;
  }
  if ( v13 == 1 )
  {
    v12 = 512;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_51;
    goto LABEL_49;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 6 )
    {
      v19 = *(_BYTE *)(a3 + 1);
      if ( v19 )
      {
        LOBYTE(SrbExtension) = v19 - 1;
        if ( (unsigned __int8)(v19 - 1) > 1u )
          goto LABEL_54;
        v12 = 512;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_51;
      }
      else
      {
        v12 = 64;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_51;
      }
LABEL_26:
      v18 = 0LL;
LABEL_50:
      StorPortExtendedFunction(86LL, a1, 0LL, v18);
      goto LABEL_51;
    }
    if ( v13 != 7 )
      goto LABEL_54;
    if ( *(_QWORD *)(a1 + 4208) && *(_BYTE *)(a3 + 1) == 1 )
    {
      if ( *(_BYTE *)(a1 + 22) )
        StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
      LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v9);
      goto LABEL_54;
    }
    v12 = 512;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_51;
LABEL_49:
    v18 = 1LL;
    goto LABEL_50;
  }
  v17 = *(_BYTE *)(a3 + 1);
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v12 = 512;
      if ( !*(_BYTE *)(a1 + 24) )
        goto LABEL_51;
      goto LABEL_26;
    }
    if ( v17 != 2 )
    {
      if ( v17 != -17 )
        goto LABEL_54;
      v12 = 4096;
      if ( !*(_BYTE *)(a1 + 22) )
        goto LABEL_51;
      goto LABEL_32;
    }
    v12 = 512;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_51;
    goto LABEL_49;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 2u);
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 1u) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
    v12 = 4096;
  }
  if ( *(_BYTE *)(a1 + 22) )
LABEL_32:
    LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  if ( v12 )
    goto LABEL_51;
LABEL_54:
  if ( v10 )
  {
    LODWORD(SrbExtension) = *(_DWORD *)(a1 + 32);
    if ( (SrbExtension & 0x10) == 0 )
    {
      *v10 = 0;
      LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v10);
    }
  }
  return SrbExtension;
}
