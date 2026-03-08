/*
 * XREFs of RtlpHpAllocVA @ 0x140330920
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140248BE0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x1402F8FAC (RtlpHpHeapExtendContext.c)
 *     RtlpHpSegMgrReserve @ 0x1403085F4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x140375668 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpVaMgrCtxAlloc @ 0x1403041DC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpEnvAllocVA @ 0x140330480 (RtlpHpEnvAllocVA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1403D2D10 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(unsigned __int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edi
  __int128 v9; // xmm0
  __int64 v12; // rdx
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+28h] [rbp-51h]
  unsigned __int64 v23; // [rsp+38h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  __int128 v25; // [rsp+58h] [rbp-21h]
  int v26; // [rsp+68h] [rbp-11h] BYREF
  int v27; // [rsp+6Ch] [rbp-Dh]
  int v28; // [rsp+70h] [rbp-9h]
  int v29; // [rsp+74h] [rbp-5h]
  __int64 v30; // [rsp+78h] [rbp-1h]

  v6 = 0LL;
  v26 = 4096;
  v7 = a4 & 0xFEFFFFFF;
  v27 = 4096;
  v28 = 0x200000;
  v9 = *a6;
  v29 = 0x200000;
  v30 = 0x100040000000LL;
  v25 = v9;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v18 = 0;
    v29 = 0;
    if ( BYTE3(v25) )
      v26 = BYTE3(v25) - 1;
    else
      v26 = -1;
    v27 = BYTE1(v25);
    v28 = BYTE2(v25);
    if ( (v25 & 8) != 0 )
      v18 = 1;
    v19 = *a2;
    v30 = *((_QWORD *)&v25 + 1);
    v29 = v18;
    v24 = v19 - (((_DWORD)v19 - 1) & 0xFFFFF) + 0xFFFFF;
    v20 = RtlpHpVaMgrCtxAlloc((__int64)&unk_140C70DD8, (__int64)&v24, a3, (unsigned int *)&v26);
    if ( !v20 )
      return 3221225626LL;
    *a2 = v24;
    *a1 = v20;
    return 0LL;
  }
  v12 = *a2;
  v13 = BYTE1(v25);
  v14 = v12 - 1;
  if ( (a4 & 0x2000) != 0 )
  {
    v21 = (unsigned int)*(&v26 + BYTE1(v25));
    v15 = v21 - ((v21 + v14) & (unsigned int)(v21 - 1)) + v12 - 1;
  }
  else
  {
    v15 = v12 - (v14 & 0xFFF) + 4095;
  }
  v24 = v15;
  if ( (a4 & 0x1000) != 0 && BYTE1(v25) == 4 )
  {
    *a2 = v15;
    if ( (a4 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v15);
    return 0LL;
  }
  if ( BYTE1(v25) == 5 )
    v6 = a3;
  if ( (a4 & 0x2000) != 0 && (v25 & 8) != 0 )
    v7 = a4 & 0xFEFBFFFF | 0x40000;
  result = RtlpHpEnvAllocVA(a1, &v24, v6, v7, a5, v22, BYTE1(v25), v23, BYTE2(v25));
  if ( (int)result >= 0 )
  {
    v17 = v24;
    if ( (v7 & 0x1000) != 0 && (unsigned __int8)(v13 - 2) <= 2u && (v7 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v24);
    *a2 = v17;
    return 0LL;
  }
  return result;
}
