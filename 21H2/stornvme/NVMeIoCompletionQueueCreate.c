/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C0006C38
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

__int64 __fastcall NVMeIoCompletionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // r14
  _DWORD *v7; // r15
  char v8; // di
  unsigned __int16 v9; // r12
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  void *v18; // rcx
  __int64 SrbExtension; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r9
  _DWORD *v23; // [rsp+80h] [rbp+40h]
  void *v24; // [rsp+98h] [rbp+58h]

  v23 = 0LL;
  v3 = *(_WORD *)(a1 + 306);
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 8) == 0 || (v8 = 1, v3 >= *(_WORD *)(a1 + 300)) )
    v8 = 0;
  v9 = 1;
  if ( !v3 )
  {
LABEL_16:
    if ( v8 )
    {
      if ( v6 )
        ProcessMultipleCommands(a1, v6);
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( !a3 )
    {
      v18 = *(void **)(a1 + 952);
      *(_BYTE *)(a1 + 867) = 0;
      memset(v18, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
      *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
      *(_DWORD *)(a1 + 856) = 1;
      v11 = *(_BYTE **)(a1 + 952);
      v23 = (_DWORD *)(a1 + 856);
      v24 = v11;
      goto LABEL_8;
    }
    StorPortExtendedFunction(0LL, a1, 112LL, 1701672526LL);
    if ( !v23 )
      goto LABEL_36;
    memset(v23, 0, 0x70uLL);
    NVMeAllocateDmaBuffer(a1, 0x2000u);
    if ( !v24 )
      break;
    memset(v24, 0, 0x10A0uLL);
    *((_BYTE *)v23 + 11) = 0;
    v23[5] = 251658240;
    *((_QWORD *)v23 + 12) = v24;
    *((_QWORD *)v23 + 8) = v24;
    *((_QWORD *)v23 + 13) = 0LL;
    *v23 = 1;
    *((_QWORD *)v24 + 529) = v23;
    v11 = v24;
LABEL_8:
    v11[4253] |= 1u;
    *((_BYTE *)v24 + 4253) &= ~2u;
    *((_WORD *)v24 + 2122) = 0;
    v12 = *(_QWORD *)(a1 + 800);
    v13 = 344LL * v9;
    *((_BYTE *)v24 + 4096) = 5;
    *((_QWORD *)v24 + 515) = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 800) - 336);
    *((_WORD *)v24 + 2068) = v9;
    *((_WORD *)v24 + 2069) = *(_WORD *)(a1 + 302) - 1;
    v14 = *((_DWORD *)v24 + 1035) | 1;
    *((_DWORD *)v24 + 1035) = v14;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v13 + v12 - 144) )
      v15 = v14 & 0xFFFFFFFD;
    else
      v15 = v14 | 2;
    *((_DWORD *)v24 + 1035) = v15;
    *((_WORD *)v24 + 2071) = *(_WORD *)(v13 + *(_QWORD *)(a1 + 800) - 168);
    if ( (a3 || v8) && (*((_QWORD *)v24 + 528) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v23 + 2;
      else
        v6 = (__int64)(v23 + 2);
      v7 = v23 + 2;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v23 + 2));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 440) == *(_WORD *)(a1 + 300) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v16);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 852), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *((_BYTE *)v23 + 11) != 1 )
        {
          result = 3238002689LL;
          if ( *((_BYTE *)v23 + 11) == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *(_WORD *)(a1 + 306) )
      goto LABEL_16;
  }
  if ( v23 )
    StorPortExtendedFunction(1LL, a1, v23, v10);
LABEL_36:
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
  return 3238002689LL;
}
