/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C0017780
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0002AA4 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C00058D4 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     IsNVMeControllerOnFatalError @ 0x1C0005E98 (IsNVMeControllerOnFatalError.c)
 *     GetLocalCommand @ 0x1C000B8A8 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000D560 (NVMeControllerAsyncReset.c)
 *     NVMeQueueWorkItem @ 0x1C001522C (NVMeQueueWorkItem.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001A3AC (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int v10; // r11d
  _DWORD *v11; // r14
  int v12; // ecx
  unsigned int v13; // r15d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  if ( !v9
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v7 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 24) & 0xE) != 0
    || (_BYTE)SrbExtension != 1 )
  {
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, a2);
  v11 = (_DWORD *)SrbExtension;
  v12 = *(_DWORD *)a3 & 7;
  if ( !v12 )
  {
    v13 = 64;
    StorPortExtendedFunction(86LL, a1, 0LL, v10);
    v14 = *(_BYTE *)(a3 + 1);
    if ( v14 == 1 )
    {
      v15 = a1;
    }
    else
    {
      if ( v14 != 3 || !IsNVMeControllerOnFatalError(a1) )
        goto LABEL_35;
      v15 = a1;
      if ( *(_QWORD *)(a1 + 3992) )
      {
        NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v16);
        goto LABEL_35;
      }
    }
    NVMeControllerAsyncReset(v15, 0, 0LL, 0LL);
LABEL_35:
    LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v13);
    goto LABEL_26;
  }
  if ( v12 == v10 )
  {
    v13 = 512;
    goto LABEL_33;
  }
  switch ( v12 )
  {
    case 2:
      LOBYTE(SrbExtension) = *(_BYTE *)(a3 + 1);
      if ( (_BYTE)SrbExtension )
      {
        if ( (_BYTE)SrbExtension == (_BYTE)v10 )
        {
          v13 = 512;
          v17 = 0LL;
LABEL_34:
          StorPortExtendedFunction(86LL, a1, 0LL, v17);
          goto LABEL_35;
        }
        if ( (_BYTE)SrbExtension != 2 )
          break;
        v13 = 512;
      }
      else
      {
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 3812), 2u);
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3812), 1u) )
          break;
        v13 = 4096;
      }
LABEL_33:
      v17 = v10;
      goto LABEL_34;
    case 6:
      if ( *(_BYTE *)(a3 + 1) == (_BYTE)v10 )
        LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
      break;
    case 7:
      if ( *(_QWORD *)(a1 + 3992) && *(_BYTE *)(a3 + 1) == (_BYTE)v10 )
      {
        StorPortExtendedFunction(86LL, a1, 0LL, v10);
        LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v18);
        break;
      }
      v13 = 512;
      goto LABEL_33;
  }
LABEL_26:
  if ( v11 )
  {
    *v11 = 0;
    LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v11);
  }
  return SrbExtension;
}
