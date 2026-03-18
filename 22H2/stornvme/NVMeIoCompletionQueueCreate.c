/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C001EFF0
 * Callers:
 *     IoQueuesCreation @ 0x1C000A6A8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A834 (IoQueuesCreationAsync.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     ProcessMultipleCommands @ 0x1C0024740 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeIoCompletionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  unsigned __int16 v9; // r12
  _BYTE *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  char v15; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  _BYTE *v20; // [rsp+90h] [rbp+48h]
  void *v22; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 338);
  v4 = a3;
  v20 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 332)) )
    v8 = 0;
  v9 = 1;
  if ( !*v3 )
  {
LABEL_29:
    if ( v8 && v6 )
      ProcessMultipleCommands(a1, v6);
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v4 )
    {
      LocalCommandReuse(a1, a1 + 944);
      v10 = *(_BYTE **)(a1 + 1040);
      v20 = (_BYTE *)(a1 + 944);
      v4 = a3;
      v22 = v10;
      goto LABEL_10;
    }
    StorPortExtendedFunction(0LL, a1, 128LL);
    if ( !v20 )
      goto LABEL_35;
    memset(v20, 0, 0x80uLL);
    NVMeAllocateDmaBuffer(a1, 0x2000u);
    if ( !v22 )
      break;
    memset(v22, 0, 0x10A0uLL);
    v20[11] = 0;
    *((_DWORD *)v20 + 5) = 251658240;
    *((_QWORD *)v20 + 12) = v22;
    *((_QWORD *)v20 + 8) = v22;
    *((_QWORD *)v20 + 13) = 0LL;
    *v20 = 1;
    *((_QWORD *)v22 + 529) = v20;
    v10 = v22;
LABEL_10:
    v10[4253] |= 1u;
    *((_BYTE *)v22 + 4253) &= ~2u;
    *((_WORD *)v22 + 2122) = 0;
    v11 = *(_QWORD *)(a1 + 880);
    v12 = 392LL * v9;
    *((_BYTE *)v22 + 4096) = 5;
    *((_QWORD *)v22 + 515) = *(_QWORD *)(*(_QWORD *)(a1 + 880) + v12 - 384);
    *((_WORD *)v22 + 2068) = v9;
    *((_WORD *)v22 + 2069) = *(_WORD *)(a1 + 334) - 1;
    v13 = *((_DWORD *)v22 + 1035) | 1;
    *((_DWORD *)v22 + 1035) = v13;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v12 + v11 - 144) )
      v14 = v13 & 0xFFFFFFFD;
    else
      v14 = v13 | 2;
    *((_DWORD *)v22 + 1035) = v14;
    *((_WORD *)v22 + 2071) = *(_WORD *)(*(_QWORD *)(a1 + 880) + v12 - 216);
    if ( (v4 || v8) && (*((_QWORD *)v22 + 528) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v20 + 8;
      else
        v6 = (__int64)(v20 + 8);
      v7 = v20 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v20 + 8));
      if ( v4 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 332) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 932), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        v15 = v20[11];
        if ( v15 != 1 )
        {
          result = 3238002689LL;
          if ( v15 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *v3 )
      goto LABEL_29;
  }
  if ( v20 )
    StorPortExtendedFunction(1LL, a1, v20);
LABEL_35:
  if ( v6 )
  {
    do
    {
      SrbExtension = GetSrbExtension(v6);
      v18 = *(_QWORD *)(v6 + 40);
      v19 = *(_QWORD *)(SrbExtension + 4232);
      NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v19 + 104));
      StorPortExtendedFunction(1LL, a1, v19);
      v6 = v18;
    }
    while ( v18 );
  }
  return 3238002689LL;
}
