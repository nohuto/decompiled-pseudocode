/*
 * XREFs of EtwpInitializeTimeStamp @ 0x14078CF30
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  __int64 *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdi
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // ecx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 200) - 1;
  if ( !v2 )
    goto LABEL_2;
  v11 = v2 - 1;
  if ( !v11 )
  {
    v4 = 0LL;
LABEL_16:
    v3 = (__int64 *)(a1 + 24);
    goto LABEL_4;
  }
  v14 = v11 - 1;
  if ( !v14 )
  {
    v4 = 3LL;
    goto LABEL_16;
  }
  if ( v14 != 1 )
  {
LABEL_2:
    v3 = (__int64 *)(a1 + 24);
LABEL_3:
    v4 = 1LL;
    *(_DWORD *)(a1 + 200) = 1;
    goto LABEL_4;
  }
  v17 = 0LL;
  v3 = (__int64 *)(a1 + 24);
  if ( ((int (__fastcall *)(__int64 *))off_140C01DF0[0])(&v17) < 0 )
    goto LABEL_3;
  v4 = 2LL;
LABEL_4:
  *v3 = v4;
  v5 = (_QWORD *)(a1 + 304);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 200);
    *v5 = EtwpRefTimeSystem;
    result = EtwpRefQpcDelta;
    *(_QWORD *)(a1 + 1280) = EtwpRefQpcDelta;
    if ( v12 == 3 )
    {
      result = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v13 = EtwpRefTimePerfCounter;
      if ( v12 == 2 )
        v13 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v13;
    }
  }
  else if ( *(_DWORD *)(a1 + 200) == 3 )
  {
    *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
  }
  else
  {
    LODWORD(v17) = 0;
    v16 = 0LL;
    v15 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v15, 7, (int *)&v17);
    v6 = v17;
    v7 = *((_QWORD *)&v15 + 1);
    v8 = v15;
    if ( (v17 & 5) == 5 )
    {
      v9 = v16;
      result = *(unsigned int *)(a1 + 200);
      *v5 = v16;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 312) = v9;
          break;
        case 1:
          *(_QWORD *)(a1 + 312) = v8;
          break;
        case 4:
          *(_QWORD *)(a1 + 312) = v7;
          break;
      }
    }
    else
    {
      *(LARGE_INTEGER *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
      *(_DWORD *)(a1 + 816) &= ~0x8000000u;
    }
    if ( *(_DWORD *)(a1 + 200) != 4 && (v6 & 3) == 3 )
      *(_QWORD *)(a1 + 1280) = v7 - v8;
  }
  *(_OWORD *)(a1 + 432) = *(_OWORD *)v5;
  return result;
}
