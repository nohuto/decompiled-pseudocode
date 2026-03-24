/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C0019790
 * Callers:
 *     IoQueuesCreation @ 0x1C000BFD8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000C15C (IoQueuesCreationAsync.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     ProcessMultipleCommands @ 0x1C001C4C4 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeIoCompletionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // r14
  _DWORD *v7; // r15
  char v8; // di
  unsigned __int16 v9; // r12
  bool i; // cc
  __int64 v11; // r9
  _BYTE *v12; // rax
  void *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 SrbExtension; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r9
  _DWORD *v24; // [rsp+80h] [rbp+40h]
  void *v25; // [rsp+98h] [rbp+58h]

  v24 = 0LL;
  v3 = *(_WORD *)(a1 + 290);
  v25 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, v3 >= *(_WORD *)(a1 + 284)) )
    v8 = 0;
  v9 = 1;
  for ( i = v3 != 0; i; i = v9 <= *(_WORD *)(a1 + 290) )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 112LL, 1701672526LL);
      if ( !v24 )
        goto LABEL_30;
      memset(v24, 0, 0x70uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v25 )
      {
        if ( v24 )
          StorPortExtendedFunction(1LL, a1, v24, v11);
LABEL_30:
        if ( v6 )
        {
          do
          {
            SrbExtension = GetSrbExtension(v6);
            v20 = *(_QWORD *)(v6 + 40);
            v21 = *(_QWORD *)(SrbExtension + 4232);
            NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v21 + 104));
            StorPortExtendedFunction(1LL, a1, v21, v22);
            v6 = v20;
          }
          while ( v20 );
        }
        return 0;
      }
      memset(v25, 0, 0x10A0uLL);
      *((_BYTE *)v24 + 11) = 0;
      v24[5] = 251658240;
      *((_QWORD *)v24 + 12) = v25;
      *((_QWORD *)v24 + 8) = v25;
      *((_QWORD *)v24 + 13) = 0LL;
      *v24 = 1;
      *((_QWORD *)v25 + 529) = v24;
      v12 = v25;
    }
    else
    {
      v13 = *(void **)(a1 + 936);
      *(_BYTE *)(a1 + 851) = 0;
      memset(v13, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
      *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 936);
      *(_DWORD *)(a1 + 840) = 1;
      v12 = *(_BYTE **)(a1 + 936);
      v24 = (_DWORD *)(a1 + 840);
      v25 = v12;
    }
    v12[4253] |= 1u;
    *((_BYTE *)v25 + 4253) &= ~2u;
    *((_WORD *)v25 + 2122) = 0;
    v14 = *(_QWORD *)(a1 + 784);
    v15 = 344LL * v9;
    *((_BYTE *)v25 + 4096) = 5;
    *((_QWORD *)v25 + 515) = *(_QWORD *)(v15 + *(_QWORD *)(a1 + 784) - 336);
    *((_WORD *)v25 + 2068) = v9;
    *((_WORD *)v25 + 2069) = *(_WORD *)(a1 + 286) - 1;
    v16 = *((_DWORD *)v25 + 1035) | 1;
    *((_DWORD *)v25 + 1035) = v16;
    if ( *(_BYTE *)(a1 + 16) || *(_BYTE *)(v15 + v14 - 144) )
      v17 = v16 & 0xFFFFFFFD;
    else
      v17 = v16 | 2;
    *((_DWORD *)v25 + 1035) = v17;
    *((_WORD *)v25 + 2071) = *(_WORD *)(v15 + *(_QWORD *)(a1 + 784) - 168);
    if ( (a3 || v8) && (*((_QWORD *)v25 + 528) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v24 + 2;
      else
        v6 = (__int64)(v24 + 2);
      v7 = v24 + 2;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v24 + 2));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 424) == *(_WORD *)(a1 + 284) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v18);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 836), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *((_BYTE *)v24 + 11) != 1 )
          return 0;
      }
    }
    ++v9;
  }
  if ( v8 && v6 )
    ProcessMultipleCommands(a1, v6);
  return 1;
}
