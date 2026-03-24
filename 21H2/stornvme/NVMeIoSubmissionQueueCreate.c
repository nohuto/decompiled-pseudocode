/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C0019EC0
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

char __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, __int64 a2, char a3)
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
  __int64 v14; // rdx
  __int64 SrbExtension; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r9
  _DWORD *v20; // [rsp+80h] [rbp+40h]
  void *v21; // [rsp+98h] [rbp+58h]

  v20 = 0LL;
  v3 = *(_WORD *)(a1 + 288);
  v21 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, v3 >= *(_WORD *)(a1 + 284)) )
    v8 = 0;
  v9 = 1;
  for ( i = v3 != 0; i; i = v9 <= *(_WORD *)(a1 + 288) )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 112LL, 1701672526LL);
      if ( !v20 )
        goto LABEL_26;
      memset(v20, 0, 0x70uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v21 )
      {
        if ( v20 )
          StorPortExtendedFunction(1LL, a1, v20, v11);
LABEL_26:
        if ( v6 )
        {
          do
          {
            SrbExtension = GetSrbExtension(v6);
            v16 = *(_QWORD *)(v6 + 40);
            v17 = *(_QWORD *)(SrbExtension + 4232);
            NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v17 + 104));
            StorPortExtendedFunction(1LL, a1, v17, v18);
            v6 = v16;
          }
          while ( v16 );
        }
        return 0;
      }
      memset(v21, 0, 0x10A0uLL);
      *((_BYTE *)v20 + 11) = 0;
      v20[5] = 251658240;
      *((_QWORD *)v20 + 12) = v21;
      *((_QWORD *)v20 + 8) = v21;
      *((_QWORD *)v20 + 13) = 0LL;
      *v20 = 1;
      *((_QWORD *)v21 + 529) = v20;
      v12 = v21;
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
      v20 = (_DWORD *)(a1 + 840);
      v21 = v12;
    }
    v12[4253] |= 1u;
    *((_BYTE *)v21 + 4253) &= ~2u;
    *((_WORD *)v21 + 2122) = 0;
    v14 = 136LL * v9;
    *((_BYTE *)v21 + 4096) = 1;
    *((_QWORD *)v21 + 515) = *(_QWORD *)(v14 + *(_QWORD *)(a1 + 776) - 128);
    *((_WORD *)v21 + 2068) = v9;
    *((_WORD *)v21 + 2069) = *(_WORD *)(a1 + 286) - 1;
    *((_DWORD *)v21 + 1035) = *((_DWORD *)v21 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v21 + 2071) = *(_WORD *)(v14 + *(_QWORD *)(a1 + 776) - 86);
    if ( (a3 || v8) && (*((_QWORD *)v21 + 528) = NVMeIoSubmissionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v20 + 2;
      else
        v6 = (__int64)(v20 + 2);
      v7 = v20 + 2;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v20 + 2));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 424) == *(_WORD *)(a1 + 284) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, 0LL);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 836), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *((_BYTE *)v20 + 11) != 1 )
          return 0;
      }
    }
    ++v9;
  }
  if ( v8 && v6 )
    ProcessMultipleCommands(a1, v6);
  return 1;
}
