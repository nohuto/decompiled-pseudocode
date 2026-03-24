/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C010EBC4
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C00A30A0 (vCleanupPrivateFonts.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C010EB14 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A21FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  struct PFF *result; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct PFF **v9; // rbx
  struct PFF *i; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct PFF *v13; // rcx
  _QWORD v14[8]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v15[28]; // [rsp+68h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = (struct PFF *)&retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = 0;
    v8 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20LL;
    v7 = 128;
  }
  memset(v14, 0, 56);
  memset(v15, 0, sizeof(v15));
  HIDWORD(v15[6]) = 0x10000;
  HIDWORD(v14[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  result = (struct PFF *)v14;
  v15[18] = v14;
  if ( a3 )
    *a3 = 0;
  v9 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = *v9; ; i = (struct PFF *)*((_QWORD *)v13 + 1) )
      {
        result = SkipInvalidPff(i);
        v13 = result;
        if ( !result )
          break;
        if ( a2 != 1 )
          goto LABEL_13;
        v11 = *((_DWORD *)result + 13);
        if ( (v11 & 0x400) == 0 )
          continue;
        if ( (v11 & 0x800) != 0 )
        {
          *((_DWORD *)v13 + 13) = v11 & 0xFFFFF7FF;
        }
        else
        {
LABEL_13:
          v15[2] = v13;
          v15[1] = *((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = v15;
          if ( v15[1] )
            *(_QWORD *)(v15[1] + 16LL) = v15;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, v13, v9, v7) )
          {
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
            if ( a3 )
              ++*a3;
          }
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          if ( *v9 == (struct PFF *)v15 )
            *v9 = (struct PFF *)v15[1];
          v12 = v15[2];
          if ( v15[2] )
          {
            *(_QWORD *)(v15[2] + 8LL) = v15[1];
            v12 = v15[2];
          }
          if ( v15[1] )
            *(_QWORD *)(v15[1] + 16LL) = v12;
          v13 = (struct PFF *)v15;
        }
      }
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
