/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C0214454
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02080D4 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0208B08 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx
  ULONG64 v8; // rcx
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __m128i v11; // xmm1
  INT v12; // esi
  __int128 v13; // xmm4
  __int64 v14; // xmm5_8
  ULONGLONG v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  size_t v18; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v21; // [rsp+38h] [rbp-160h] BYREF
  __int64 v22; // [rsp+40h] [rbp-158h]
  ULONGLONG v23; // [rsp+48h] [rbp-150h] BYREF
  ULONGLONG pullResult[2]; // [rsp+50h] [rbp-148h] BYREF
  ULONGLONG v25; // [rsp+60h] [rbp-138h]
  __int64 v26; // [rsp+68h] [rbp-130h] BYREF
  int v27; // [rsp+70h] [rbp-128h]
  int v28; // [rsp+74h] [rbp-124h]
  __int128 v29; // [rsp+78h] [rbp-120h] BYREF
  __int64 v30; // [rsp+88h] [rbp-110h]
  __m128i v31; // [rsp+90h] [rbp-108h]
  __int128 v32; // [rsp+A0h] [rbp-F8h]
  __int128 v33; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  volatile void *v35[2]; // [rsp+D0h] [rbp-C8h]
  INT iOperand[8]; // [rsp+E0h] [rbp-B8h]
  __int128 v37; // [rsp+100h] [rbp-98h]
  __int128 v38; // [rsp+110h] [rbp-88h]
  _OWORD v39[4]; // [rsp+120h] [rbp-78h] BYREF
  __int64 v40; // [rsp+160h] [rbp-38h]
  int v41; // [rsp+1A0h] [rbp+8h] BYREF
  char v42; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 *v43; // [rsp+1B0h] [rbp+18h]
  __int64 v44; // [rsp+1B8h] [rbp+20h]

  v43 = a3;
  v22 = 0LL;
  memset_0(v39, 0, 0x48uLL);
  pullResult[0] = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v41 = 0;
  v28 = 0;
  v44 = 0LL;
  *a3 = 0LL;
  v26 = a1;
  v27 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(60LL);
  LODWORD(a1) = KeUserModeCallback(60LL, &v26, 16LL, &v21, &v41);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  if ( (int)a1 >= 0 && v41 == 24 )
  {
    v6 = (__int64 *)v21;
    if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v44 = *v6;
    if ( v44 == 2 )
    {
      v44 = 0LL;
      v7 = *((_QWORD *)PtiCurrentShared((__int64)v6) + 64);
      if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != v39 )
      {
        v8 = *(_QWORD *)(v21 + 16);
        if ( v8 + 72 < v8 || v8 + 72 > MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        v9 = *(_OWORD *)v8;
        v37 = v9;
        v32 = v9;
        v10 = *(_OWORD *)(v8 + 16);
        v38 = v10;
        v33 = v10;
        v11 = *(__m128i *)(v8 + 32);
        v31 = v11;
        *(__m128i *)Address = v11;
        v29 = *(_OWORD *)(v8 + 48);
        *(_OWORD *)v35 = v29;
        *(_QWORD *)iOperand = *(_QWORD *)(v8 + 64);
        v39[0] = v9;
        v39[1] = v10;
        v39[2] = v11;
        v39[3] = v29;
        v40 = *(_QWORD *)iOperand;
        v44 = 2LL;
        v12 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
        if ( IntToULongLong(v12, pullResult) < 0
          || IntToULongLong(iOperand[0], &v23) < 0
          || (v15 = pullResult[0] + v23, pullResult[0] + v23 < pullResult[0])
          || (v25 = pullResult[0] + v23, v16 = v15 + 72, v15 >= 0xFFFFFFFFFFFFFFB8uLL) )
        {
          v17 = 0LL;
          v22 = 0LL;
        }
        else
        {
          if ( v16 < 0x90 )
            v16 = 144LL;
          v25 = v16;
          v17 = Win32AllocPoolZInit(v16, 1164211029LL);
          v22 = v17;
          v11 = v31;
          v9 = v37;
          v10 = v38;
          v13 = v29;
          v14 = *(_QWORD *)iOperand;
        }
        if ( v17 )
        {
          v29 = 0LL;
          v30 = 0LL;
          *a3 = v17;
          *(_OWORD *)v17 = v9;
          *(_OWORD *)(v17 + 16) = v10;
          *(__m128i *)(v17 + 32) = v11;
          *(_OWORD *)(v17 + 48) = v13;
          *(_QWORD *)(v17 + 64) = v14;
          if ( v12 )
          {
            ProbeForRead(Address[0], v12, 1u);
            memmove((void *)(v17 + 72), (const void *)Address[0], v12);
          }
          if ( iOperand[0] )
          {
            v18 = iOperand[0];
            ProbeForRead(v35[1], iOperand[0], 1u);
            memmove((void *)(v17 + v12 + 72LL), (const void *)v35[1], v18);
          }
          PushW32ThreadLock(v17, &v29, (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v17);
          v31.m128i_i64[0] = (__int64)KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(v31.m128i_i64[0]);
          *(_QWORD *)(ThreadWin32Thread + 16) = v29;
        }
        else
        {
          return 3LL;
        }
      }
    }
  }
  return (unsigned int)v44;
}
