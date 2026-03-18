/*
 * XREFs of ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C013F8C4
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C000E3EC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C000F924 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C000F9FC (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall EFSOBJ::bGrow(EFSOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  size_t v7; // rbx
  size_t v8; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (*(_QWORD *)(*(_QWORD *)this + 48LL) - *(_QWORD *)this - 68LL) >> 3;
  if ( (int)v3 + 16 < (unsigned int)v3 )
    return 0LL;
  v11 = *(_DWORD *)(v1 + 24);
  EFSMEMOBJ::EFSMEMOBJ(
    (EFSMEMOBJ *)v10,
    *(struct DCOBJ **)(v1 + 32),
    v3 + 16,
    *(_DWORD *)(v1 + 8),
    *(void **)(v1 + 16),
    &v11);
  v4 = v10[0];
  v5 = 0;
  if ( v10[0] )
  {
    v6 = *(_QWORD *)this;
    v7 = 8LL * (unsigned int)((*(_QWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)this - 68LL) >> 3);
    memmove((void *)(v10[0] + 68LL), (const void *)(*(_QWORD *)this + 68LL), v7);
    v8 = v7 + v4 + 68;
    v5 = 1;
    *(_QWORD *)(v4 + 40) = v8;
    *(_DWORD *)(v4 + 64) = *(_DWORD *)(v6 + 64);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v6 + 28);
    v10[0] = *(_QWORD *)this;
    *(_QWORD *)this = v4;
  }
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v10);
  return v5;
}
