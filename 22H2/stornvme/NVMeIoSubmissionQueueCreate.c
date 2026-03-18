/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C001F720
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

__int64 __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  unsigned __int16 v9; // r12
  _BYTE *v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  _BYTE *v17; // [rsp+90h] [rbp+48h]
  _BYTE *v19; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 336);
  v4 = a3;
  v17 = 0LL;
  v19 = 0LL;
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
    v10 = *(_BYTE **)(a1 + 1040);
    v17 = (_BYTE *)(a1 + 944);
    v4 = a3;
    v19 = v10;
LABEL_10:
    v10[4253] |= 1u;
    v19[4253] &= ~2u;
    *((_WORD *)v19 + 2122) = 0;
    v11 = 136LL * v9;
    v19[4096] = 1;
    *((_QWORD *)v19 + 515) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 872) - 128);
    *((_WORD *)v19 + 2068) = v9;
    *((_WORD *)v19 + 2069) = *(_WORD *)(a1 + 334) - 1;
    *((_DWORD *)v19 + 1035) = *((_DWORD *)v19 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v19 + 2071) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 872) - 86);
    if ( (v4 || v8) && (*((_QWORD *)v19 + 528) = NVMeIoSubmissionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v17 + 8;
      else
        v6 = (__int64)(v17 + 8);
      v7 = v17 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v17 + 8));
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
        v12 = v17[11];
        if ( v12 != 1 )
        {
          result = 3238002689LL;
          if ( v12 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *v3 )
      goto LABEL_25;
  }
  StorPortExtendedFunction(0LL, a1, 128LL);
  if ( !v17 )
    goto LABEL_31;
  memset(v17, 0, 0x80uLL);
  NVMeAllocateDmaBuffer(a1, 0x2000u);
  if ( v19 )
  {
    memset(v19, 0, 0x10A0uLL);
    v17[11] = 0;
    *((_DWORD *)v17 + 5) = 251658240;
    *((_QWORD *)v17 + 12) = v19;
    *((_QWORD *)v17 + 8) = v19;
    *((_QWORD *)v17 + 13) = 0LL;
    *v17 = 1;
    *((_QWORD *)v19 + 529) = v17;
    v10 = v19;
    goto LABEL_10;
  }
  if ( v17 )
    StorPortExtendedFunction(1LL, a1, v17);
LABEL_31:
  if ( v6 )
  {
    do
    {
      SrbExtension = GetSrbExtension(v6);
      v15 = *(_QWORD *)(v6 + 40);
      v16 = *(_QWORD *)(SrbExtension + 4232);
      NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v16 + 104));
      StorPortExtendedFunction(1LL, a1, v16);
      v6 = v15;
    }
    while ( v15 );
  }
  return 3238002689LL;
}
