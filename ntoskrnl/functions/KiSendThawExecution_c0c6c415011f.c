__int64 __fastcall KiSendThawExecution(char a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  signed __int32 v4; // eax
  bool v5; // cc
  int v6; // ecx
  struct _KPRCB *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+30h] [rbp-D8h] BYREF
  _WORD v10[4]; // [rsp+40h] [rbp-C8h]
  _QWORD v11[34]; // [rsp+48h] [rbp-C0h] BYREF

  *(_DWORD *)&v10[1] = 0;
  v10[3] = 0;
  memset(&v11[1], 0, 0x100uLL);
  KeGetCurrentPrcb()->IpiFrozen = 0;
  result = KiSetDebuggerOwner(0LL);
  if ( ((unsigned int)KeNumberProcessors_0 > 1 || *(_DWORD *)(v3 + 36)) && !PoAllProcIntrDisabled )
  {
    if ( KiResumeForReboot
      || (v4 = _InterlockedExchangeAdd(&KiFreezeNestingLevel, 0xFFFFFFFF),
          v5 = v4 <= 1,
          result = (unsigned int)(v4 - 1),
          v5)
      && ((KiBugCheckActive & 3) == 0
       || (result = (__int64)KeGetCurrentPrcb(), (unsigned int)KiBugCheckActive >> 4 != *(_DWORD *)(result + 36))
       || !KiBugcheckOwnerKeepsOthersFrozen) )
    {
      LODWORD(v11[0]) = 2097153;
      memset((char *)v11 + 4, 0, 0x104uLL);
      LODWORD(v8) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v6 = v8;
        do
        {
          v7 = (struct _KPRCB *)KiProcessorBlock[v6];
          if ( v7 != KeGetCurrentPrcb() )
          {
            if ( (v7->IpiFrozen & 0xF) == 2 )
            {
              v7->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx((unsigned __int16 *)v11, v8);
            }
            else
            {
              v7->IpiFrozen = 0;
            }
          }
          LODWORD(v8) = v8 + 1;
          v6 = v8;
        }
        while ( (unsigned int)v8 < (unsigned int)KeNumberProcessors_0 );
      }
      v9[1] = (unsigned __int16 *)v11[1];
      v9[0] = (unsigned __int16 *)v11;
      v10[0] = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v8, v9);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v8] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}
