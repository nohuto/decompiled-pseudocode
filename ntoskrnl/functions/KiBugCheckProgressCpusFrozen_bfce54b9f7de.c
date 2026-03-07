char __fastcall KiBugCheckProgressCpusFrozen(char a1)
{
  __int64 v1; // rdx
  struct _KPRCB *v2; // r8
  char result; // al
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v1 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v2 = (struct _KPRCB *)KiProcessorBlock[v1];
      if ( v2 != KeGetCurrentPrcb() )
      {
        result = v2->IpiFrozen & 0xF;
        if ( result != 2 )
          break;
      }
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 32LL;
    DWORD1(v5) = -2147483552;
    LODWORD(v5) = (a1 != 0) - 2147483552;
    *((_QWORD *)&v5 + 1) = 24LL;
    return WheaLogInternalEvent(&Src);
  }
  return result;
}
