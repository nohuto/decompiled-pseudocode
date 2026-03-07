void HalpTimerRestartProfileInterrupt()
{
  __int64 v0; // rbx
  unsigned int Number; // edi
  __int64 InternalData; // rax
  int v3; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  if ( HalpProfileTimer )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !Number )
    {
      InternalData = HalpTimerGetInternalData(HalpProfileTimer);
      v3 = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(InternalData);
      if ( v3 >= 0 )
      {
        if ( HalpProfilingActive )
        {
          HalpSetTimer(v0, 2, *(unsigned int *)(32LL * Number + HalpProfileData + 24), 1, &v5);
        }
        else
        {
          v4 = HalpTimerGetInternalData(v0);
          (*(void (__fastcall **)(__int64))(v0 + 136))(v4);
        }
      }
      else
      {
        *(_DWORD *)(v0 + 256) = v3;
        HalpTimerLastProblem = 15;
        *(_QWORD *)(v0 + 264) = "minkernel\\hals\\lib\\timers\\common\\timeprof.c";
        *(_DWORD *)(v0 + 252) = 15;
        *(_DWORD *)(v0 + 272) = 502;
      }
    }
  }
}
