__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  __int64 *i; // rcx
  int v5; // eax
  __int64 *NextProcess; // rax
  __int64 *v7; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = NextProcess;
    if ( !NextProcess )
      break;
    v5 = *((_DWORD *)NextProcess + 543);
    if ( (v5 & 0x1000) == 0 && v7 != (__int64 *)PsSecureSystemProcess && (v5 & 1) == 0 && !v7[280] )
    {
      KeStackAttachProcess((PRKPROCESS)v7, &ApcState);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
  }
  return 0LL;
}
