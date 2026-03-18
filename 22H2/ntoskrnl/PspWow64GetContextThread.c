/*
 * XREFs of PspWow64GetContextThread @ 0x1407A069C
 * Callers:
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x140A4DA28 (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x140A4DCB0 (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x14030D1D0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D250 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpReadExtendedContext @ 0x1407703F0 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1407709E0 (RtlCopyContext.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1407A0CF8 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0D54 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWriteExtendedContext @ 0x1407A11A4 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1407A1270 (RtlpWow64GetContextOnAmd64.c)
 */

__int64 __fastcall PspWow64GetContextThread(struct _KTHREAD *a1, int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  ULONG_PTR Process; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  void *v14; // rsp
  int *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  int v22; // ecx
  _DWORD *v23; // r10
  int v24; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+28h] [rbp-28h]
  _BYTE v26[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp+4h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v29; // [rsp+60h] [rbp+10h] BYREF
  __int64 v30; // [rsp+68h] [rbp+18h] BYREF
  struct _KTHREAD *v31; // [rsp+70h] [rbp+20h]
  int v32[4]; // [rsp+78h] [rbp+28h] BYREF
  __int128 v33; // [rsp+88h] [rbp+38h]
  _BYTE v34[720]; // [rsp+A0h] [rbp+50h] BYREF

  v31 = a1;
  v30 = 0LL;
  memset(v34, 0, 0x2CCuLL);
  v28[0] = 0;
  v29 = 0LL;
  v26[0] = 0;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  if ( a3 != 716 )
    return 3221225476LL;
  Process = (ULONG_PTR)a1->Process;
  if ( !*(_QWORD *)(Process + 1408) || *(_WORD *)(Process + 2412) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    v27 = *(_DWORD *)v10;
  }
  else
  {
    v27 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v27, v8);
  if ( (int)result >= 0 )
  {
    v12 = v27;
    if ( !a4 )
    {
      v15 = a2;
      v17 = (__int64)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(Process, v24, v25, 0LL, (__int64)v26);
      if ( (int)result >= 0 )
      {
        if ( v26[0] && (v12 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL, (__int64)v28);
          if ( (int)result >= 0 )
          {
            v18 = v28[0] + 15LL;
            if ( v18 <= v28[0] )
              v18 = 0xFFFFFFFFFFFFFF0LL;
            v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
            v20 = alloca(v19);
            v21 = alloca(v19);
            result = RtlInitializeExtendedContext((__int64)v26, 0x4010001Fu, (__int64)&v30);
            if ( (int)result >= 0 )
            {
              if ( (v12 & 0x10040) == 0x10040 )
              {
                v32[2] |= 0x100040u;
                v23 = (_DWORD *)v30;
                *(_QWORD *)(v30 + 16) = *(_QWORD *)(v17 + 16);
                v23[4] += v17 - (_DWORD)v23;
                v23[1] = v23[4] + v23[5] - *v23;
              }
              result = PspGetContextThreadInternal(v31, (__int64)v26, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v26[0] )
                  result = RtlCopyContext((__int64)v15, *v15, (__int64)v34);
                else
                  result = RtlpWow64GetContextOnAmd64(v34, v26, v15);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v22, (int)a2 + 716, (unsigned int)v32, v12, v17);
                    v28[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v27, (__int64)v28);
    if ( (int)result >= 0 )
    {
      v13 = v28[0] + 15LL;
      if ( v13 <= v28[0] )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
      v15 = (int *)v26;
      memset(v26, 0, v28[0]);
      result = RtlInitializeExtendedContext((__int64)v26, v12, (__int64)&v29);
      if ( (int)result >= 0 )
      {
        v17 = v29;
        result = RtlpReadExtendedContext(v16, 0, v29, v12, (__int64)a2, v32);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
