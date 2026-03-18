/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C00069E8
 * Callers:
 *     IoQueuesCreationAsync @ 0x1C0006850 (IoQueuesCreationAsync.c)
 *     IoQueuesCreation @ 0x1C0017D90 (IoQueuesCreation.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     ProcessMultipleCommands @ 0x1C0024B10 (ProcessMultipleCommands.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // r14
  _DWORD *v7; // r15
  char v8; // di
  unsigned __int16 v9; // r12
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  void *v14; // rcx
  __int64 SrbExtension; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r9
  _DWORD *v19; // [rsp+80h] [rbp+40h]
  _BYTE *v20; // [rsp+98h] [rbp+58h]

  v19 = 0LL;
  v3 = *(_WORD *)(a1 + 304);
  v20 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 8) == 0 || (v8 = 1, v3 >= *(_WORD *)(a1 + 300)) )
    v8 = 0;
  v9 = 1;
  if ( !v3 )
  {
LABEL_13:
    if ( v8 )
    {
      if ( v6 )
        ProcessMultipleCommands(a1, v6);
    }
    return 0LL;
  }
  while ( !a3 )
  {
    v14 = *(void **)(a1 + 952);
    *(_BYTE *)(a1 + 867) = 0;
    memset(v14, 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
    *(_DWORD *)(a1 + 856) = 1;
    v11 = *(_BYTE **)(a1 + 952);
    v19 = (_DWORD *)(a1 + 856);
    v20 = v11;
LABEL_8:
    v11[4253] |= 1u;
    v20[4253] &= ~2u;
    *((_WORD *)v20 + 2122) = 0;
    v12 = 136LL * v9;
    v20[4096] = 1;
    *((_QWORD *)v20 + 515) = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 792) - 128);
    *((_WORD *)v20 + 2068) = v9;
    *((_WORD *)v20 + 2069) = *(_WORD *)(a1 + 302) - 1;
    *((_DWORD *)v20 + 1035) = *((_DWORD *)v20 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v20 + 2071) = *(_WORD *)(v12 + *(_QWORD *)(a1 + 792) - 86);
    if ( (a3 || v8) && (*((_QWORD *)v20 + 528) = NVMeIoSubmissionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v19 + 2;
      else
        v6 = (__int64)(v19 + 2);
      v7 = v19 + 2;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v19 + 2));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 440) == *(_WORD *)(a1 + 300) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, 0LL);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 852), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *((_BYTE *)v19 + 11) != 1 )
        {
          result = 3238002689LL;
          if ( *((_BYTE *)v19 + 11) == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *(_WORD *)(a1 + 304) )
      goto LABEL_13;
  }
  StorPortExtendedFunction(0LL, a1, 112LL, 1701672526LL);
  if ( !v19 )
    goto LABEL_32;
  memset(v19, 0, 0x70uLL);
  NVMeAllocateDmaBuffer(a1, 0x2000u);
  if ( v20 )
  {
    memset(v20, 0, 0x10A0uLL);
    *((_BYTE *)v19 + 11) = 0;
    v19[5] = 251658240;
    *((_QWORD *)v19 + 12) = v20;
    *((_QWORD *)v19 + 8) = v20;
    *((_QWORD *)v19 + 13) = 0LL;
    *v19 = 1;
    *((_QWORD *)v20 + 529) = v19;
    v11 = v20;
    goto LABEL_8;
  }
  if ( v19 )
    StorPortExtendedFunction(1LL, a1, v19, v10);
LABEL_32:
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
  return 3238002689LL;
}
