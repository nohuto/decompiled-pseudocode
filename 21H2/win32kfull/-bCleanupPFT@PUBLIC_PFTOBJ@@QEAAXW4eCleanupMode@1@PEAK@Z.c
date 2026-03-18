/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C00F97F0
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C001C200 (vCleanupPrivateFonts.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00F9740 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0011CB0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

int __fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v7; // rdi
  unsigned int v8; // r12d
  struct PFF **v9; // rbx
  struct PFF *i; // rcx
  __int64 v11; // rcx
  _QWORD v13[8]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[28]; // [rsp+68h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v3 = &retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (int)v3;
    v8 = 0;
    v7 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v7 = 20LL;
    v8 = 128;
  }
  memset(v13, 0, 56);
  memset(v14, 0, sizeof(v14));
  HIDWORD(v13[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = v13;
  v14[18] = v13;
  if ( a3 )
    *a3 = 0;
  v9 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      for ( i = *v9; i; i = (struct PFF *)*((_QWORD *)i + 1) )
      {
        if ( a2 != 1 )
          goto LABEL_14;
        LODWORD(v3) = *((_DWORD *)i + 13);
        if ( ((unsigned __int16)v3 & 0x400) == 0 )
          continue;
        if ( ((unsigned __int16)v3 & 0x800) != 0 )
        {
          LODWORD(v3) = (unsigned int)v3 & 0xFFFFF7FF;
          *((_DWORD *)i + 13) = (_DWORD)v3;
        }
        else
        {
LABEL_14:
          v14[2] = i;
          v14[1] = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v14;
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v14;
          if ( PFTOBJ::bUnloadWorkhorse(a1, i, v9, v8) )
          {
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
            if ( a3 )
              ++*a3;
          }
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          if ( *v9 == (struct PFF *)v14 )
            *v9 = (struct PFF *)v14[1];
          v11 = v14[2];
          if ( v14[2] )
          {
            *(_QWORD *)(v14[2] + 8LL) = v14[1];
            v11 = v14[2];
          }
          LODWORD(v3) = v14[1];
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v11;
          i = (struct PFF *)v14;
        }
      }
      ++v9;
      --v7;
    }
    while ( v7 );
  }
  return (int)v3;
}
