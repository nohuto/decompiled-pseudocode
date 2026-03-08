/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C001F6B0
 * Callers:
 *     IoQueuesCreation @ 0x1C000A5E8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A774 (IoQueuesCreationAsync.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     ProcessMultipleCommands @ 0x1C0024780 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  unsigned __int16 v9; // r12
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r9
  _BYTE *v20; // [rsp+90h] [rbp+48h]
  _BYTE *v22; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 336);
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
LABEL_25:
    if ( v8 && v6 )
      ProcessMultipleCommands(a1, v6);
    return 0LL;
  }
  while ( !v4 )
  {
    LocalCommandReuse(a1, a1 + 944);
    v11 = *(_BYTE **)(a1 + 1040);
    v20 = (_BYTE *)(a1 + 944);
    v4 = a3;
    v22 = v11;
LABEL_10:
    v11[4253] |= 1u;
    v22[4253] &= ~2u;
    *((_WORD *)v22 + 2122) = 0;
    v12 = 136LL * v9;
    v22[4096] = 1;
    *((_QWORD *)v22 + 515) = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 872) - 128);
    *((_WORD *)v22 + 2068) = v9;
    *((_WORD *)v22 + 2069) = *(_WORD *)(a1 + 334) - 1;
    *((_DWORD *)v22 + 1035) = *((_DWORD *)v22 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v22 + 2071) = *(_WORD *)(v12 + *(_QWORD *)(a1 + 872) - 86);
    if ( (v4 || v8) && (*((_QWORD *)v22 + 528) = NVMeIoSubmissionQueueCreateCompletion, v8) )
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
          StorPortExtendedFunction(81LL, a1, 1000LL, v13);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 932), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        v14 = v20[11];
        if ( v14 != 1 )
        {
          result = 3238002689LL;
          if ( v14 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *v3 )
      goto LABEL_25;
  }
  StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
  if ( !v20 )
    goto LABEL_31;
  memset(v20, 0, 0x80uLL);
  NVMeAllocateDmaBuffer(a1, 0x2000u);
  if ( v22 )
  {
    memset(v22, 0, 0x10A0uLL);
    v20[11] = 0;
    *((_DWORD *)v20 + 5) = 251658240;
    *((_QWORD *)v20 + 12) = v22;
    *((_QWORD *)v20 + 8) = v22;
    *((_QWORD *)v20 + 13) = 0LL;
    *v20 = 1;
    *((_QWORD *)v22 + 529) = v20;
    v11 = v22;
    goto LABEL_10;
  }
  if ( v20 )
    StorPortExtendedFunction(1LL, a1, v20, v10);
LABEL_31:
  if ( v6 )
  {
    do
    {
      SrbExtension = GetSrbExtension(v6);
      v17 = *(_QWORD *)(v6 + 40);
      v18 = *(_QWORD *)(SrbExtension + 4232);
      NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v18 + 104));
      StorPortExtendedFunction(1LL, a1, v18, v19);
      v6 = v17;
    }
    while ( v17 );
  }
  return 3238002689LL;
}
