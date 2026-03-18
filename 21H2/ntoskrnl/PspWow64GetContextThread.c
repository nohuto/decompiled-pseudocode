/*
 * XREFs of PspWow64GetContextThread @ 0x140704EF8
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x140A0EB90 (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x140A0EE3C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140704980 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407049DC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWriteExtendedContext @ 0x140704E2C (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1407051BC (RtlpWow64GetContextOnAmd64.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, int *a2, int a3, char a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  void *v13; // rsp
  int *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  _DWORD *v21; // r10
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+28h] [rbp-28h]
  bool v25[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v26; // [rsp+54h] [rbp+4h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v28; // [rsp+60h] [rbp+10h] BYREF
  __int64 v29; // [rsp+68h] [rbp+18h] BYREF
  __int64 v30; // [rsp+70h] [rbp+20h]
  int v31[4]; // [rsp+78h] [rbp+28h] BYREF
  __int128 v32; // [rsp+88h] [rbp+38h]
  _BYTE v33[720]; // [rsp+A0h] [rbp+50h] BYREF

  v30 = a1;
  v29 = 0LL;
  memset(v33, 0, 0x2CCuLL);
  v27[0] = 0;
  v28 = 0LL;
  v25[0] = 0;
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  if ( a3 != 716 )
    return 3221225476LL;
  v8 = *(_QWORD *)(a1 + 544);
  if ( !*(_QWORD *)(v8 + 1408) || *(_WORD *)(v8 + 2412) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    v26 = *(_DWORD *)v9;
  }
  else
  {
    v26 = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((int *)&v26, a4);
  if ( (int)result >= 0 )
  {
    v11 = v26;
    if ( !a4 )
    {
      v14 = a2;
      v16 = (__int64)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea((_KPROCESS *)v8, v30, 1, (__int64)v33, v23, v24, 0LL, v25);
      if ( (int)result >= 0 )
      {
        if ( v25[0] && (v11 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL, (__int64)v27);
          if ( (int)result >= 0 )
          {
            v17 = v27[0] + 15LL;
            if ( v17 <= v27[0] )
              v17 = 0xFFFFFFFFFFFFFF0LL;
            v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
            v19 = alloca(v18);
            v20 = alloca(v18);
            result = RtlInitializeExtendedContext((__int64)v25, 0x4010001Fu, (__int64)&v29);
            if ( (int)result >= 0 )
            {
              if ( (v11 & 0x10040) == 0x10040 )
              {
                v31[2] |= 0x100040u;
                v21 = (_DWORD *)v29;
                *(_QWORD *)(v29 + 16) = *(_QWORD *)(v16 + 16);
                v21[4] += v16 - (_DWORD)v21;
                v21[1] = v21[4] + v21[5] - *v21;
              }
              result = PspGetContextThreadInternal(v30, (__int64)v25, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v25[0] )
                  result = RtlCopyContext((__int64)v14, *v14, (__int64)v33);
                else
                  result = RtlpWow64GetContextOnAmd64(v33, v25, v14);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v22, (__int64)(a2 + 179), (__int64)v31, v11, v16);
                    v27[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v26, (__int64)v27);
    if ( (int)result >= 0 )
    {
      v12 = v27[0] + 15LL;
      if ( v12 <= v27[0] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = (int *)v25;
      memset(v25, 0, v27[0]);
      result = RtlInitializeExtendedContext((__int64)v25, v11, (__int64)&v28);
      if ( (int)result >= 0 )
      {
        v16 = v28;
        result = RtlpReadExtendedContext(v15, 0, v28, v11, (__int64)a2, v31);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
