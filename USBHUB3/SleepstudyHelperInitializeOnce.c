/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x1C008F670
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _OWORD *v3; // rdi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  _OWORD *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  _DWORD *OutputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp+20h] BYREF

  v3 = &SleepstudyHelperRoutineBlock;
  v4 = 0;
  OutputBuffer = 0LL;
  memset(&SleepstudyHelperRoutineBlock, 0, 0x108uLL);
  InputBuffer = 63LL;
  v5 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, &OutputBuffer, 8u);
  if ( v5 == -1073741637 )
  {
    return 1;
  }
  else if ( v5 >= 0 )
  {
    v6 = OutputBuffer;
    v4 = 1;
    if ( *OutputBuffer )
    {
      v7 = 2LL;
      do
      {
        *v3 = *v6;
        v3[1] = v6[1];
        v3[2] = v6[2];
        v3[3] = v6[3];
        v3[4] = v6[4];
        v3[5] = v6[5];
        v3[6] = v6[6];
        v3 += 8;
        v8 = v6[7];
        v6 += 8;
        *(v3 - 1) = v8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v3 = *(_QWORD *)v6;
    }
  }
  return v4;
}
