/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x14083C01C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083C130 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1402092FC (RtlStringCbCatW.c)
 *     PerfDiagpIsTracingAllowed @ 0x14083C260 (PerfDiagpIsTracingAllowed.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PerfDiagpStartPerfDiagLogger(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v1; // rax
  size_t v3; // rbx
  __int64 Pool2; // rax
  wchar_t *v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  _WORD *v8; // r8
  char *v9; // r10
  __int16 v10; // ax
  _WORD *v11; // rax
  unsigned int started; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( pszSrc[v1] );
  v3 = (unsigned int)(2 * v1 + 104);
  Pool2 = ExAllocatePool2(256LL, v3, 1682330192LL);
  v5 = (wchar_t *)Pool2;
  if ( Pool2 )
  {
    v6 = (unsigned __int64)(unsigned int)v3 >> 1;
    if ( v6 )
    {
      v7 = 2147483646 - v6;
      v8 = (_WORD *)Pool2;
      v9 = (char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - Pool2;
      do
      {
        if ( !(v7 + v6) )
          break;
        v10 = *(_WORD *)((char *)v8 + (_QWORD)v9);
        if ( !v10 )
          break;
        *v8++ = v10;
        --v6;
      }
      while ( v6 );
      v11 = v8 - 1;
      if ( v6 )
        v11 = v8;
      *v11 = 0;
    }
    RtlStringCbCatW(v5, v3, pszSrc);
    if ( (unsigned int)PerfDiagpIsTracingAllowed() )
    {
      wcscpy(&xmmword_140C3232C, L"PerfDiag Logger");
      started = EtwStartAutoLogger(&xmmword_140C3232C);
    }
    else
    {
      started = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return started;
}
