/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C021188C
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FA48C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0205504 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0205F38 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  ULONG64 v14; // rdx
  __int64 v15; // rcx
  ULONG64 v16; // rcx
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __m128i v19; // xmm1
  INT v20; // esi
  __int128 v21; // xmm4
  __int64 v22; // xmm5_8
  ULONGLONG v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  size_t v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v32; // [rsp+38h] [rbp-160h] BYREF
  __int64 v33; // [rsp+40h] [rbp-158h]
  ULONGLONG v34; // [rsp+48h] [rbp-150h] BYREF
  ULONGLONG pullResult[2]; // [rsp+50h] [rbp-148h] BYREF
  ULONGLONG v36; // [rsp+60h] [rbp-138h]
  __int64 v37; // [rsp+68h] [rbp-130h] BYREF
  int v38; // [rsp+70h] [rbp-128h]
  int v39; // [rsp+74h] [rbp-124h]
  __int128 v40; // [rsp+78h] [rbp-120h] BYREF
  __int64 v41; // [rsp+88h] [rbp-110h]
  __m128i v42; // [rsp+90h] [rbp-108h]
  __int128 v43; // [rsp+A0h] [rbp-F8h]
  __int128 v44; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  volatile void *v46[2]; // [rsp+D0h] [rbp-C8h]
  INT iOperand[8]; // [rsp+E0h] [rbp-B8h]
  __int128 v48; // [rsp+100h] [rbp-98h]
  __int128 v49; // [rsp+110h] [rbp-88h]
  _OWORD v50[4]; // [rsp+120h] [rbp-78h] BYREF
  __int64 v51; // [rsp+160h] [rbp-38h]
  int v52; // [rsp+1A0h] [rbp+8h] BYREF
  char v53; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 *v54; // [rsp+1B0h] [rbp+18h]
  __int64 v55; // [rsp+1B8h] [rbp+20h]

  v54 = a3;
  v33 = 0LL;
  memset_0(v50, 0, 0x48uLL);
  pullResult[0] = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v52 = 0;
  v39 = 0;
  v55 = 0LL;
  *a3 = 0LL;
  v37 = a1;
  v38 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53, v6, v7, v8);
  EtwTraceBeginCallback(60LL);
  LODWORD(a1) = KeUserModeCallback(60LL, &v37, 16LL, &v32, &v52);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53, v9, v10);
  if ( (int)a1 >= 0 && v52 == 24 )
  {
    v13 = (__int64 *)v32;
    v14 = v32 + 8;
    if ( v32 + 8 < v32 || v14 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v55 = *v13;
    if ( v55 == 2 )
    {
      v55 = 0LL;
      v15 = *((_QWORD *)PtiCurrentShared((__int64)v13, v14, v11, v12) + 64);
      if ( !v15 || (*(_DWORD *)(v15 + 84) & 1) == 0 || *(_OWORD **)(v15 + 96) != v50 )
      {
        v16 = *(_QWORD *)(v32 + 16);
        if ( v16 + 72 < v16 || v16 + 72 > MmUserProbeAddress )
          v16 = MmUserProbeAddress;
        v17 = *(_OWORD *)v16;
        v48 = v17;
        v43 = v17;
        v18 = *(_OWORD *)(v16 + 16);
        v49 = v18;
        v44 = v18;
        v19 = *(__m128i *)(v16 + 32);
        v42 = v19;
        *(__m128i *)Address = v19;
        v40 = *(_OWORD *)(v16 + 48);
        *(_OWORD *)v46 = v40;
        *(_QWORD *)iOperand = *(_QWORD *)(v16 + 64);
        v50[0] = v17;
        v50[1] = v18;
        v50[2] = v19;
        v50[3] = v40;
        v51 = *(_QWORD *)iOperand;
        v55 = 2LL;
        v20 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
        if ( IntToULongLong(v20, pullResult) < 0
          || IntToULongLong(iOperand[0], &v34) < 0
          || (v23 = pullResult[0] + v34, pullResult[0] + v34 < pullResult[0])
          || (v36 = pullResult[0] + v34, v24 = v23 + 72, v23 >= 0xFFFFFFFFFFFFFFB8uLL) )
        {
          v25 = 0LL;
          v33 = 0LL;
        }
        else
        {
          if ( v24 < 0x90 )
            v24 = 144LL;
          v36 = v24;
          v25 = Win32AllocPoolZInit(v24, 1164211029LL);
          v33 = v25;
          v19 = v42;
          v17 = v48;
          v18 = v49;
          v21 = v40;
          v22 = *(_QWORD *)iOperand;
        }
        if ( v25 )
        {
          v40 = 0LL;
          v41 = 0LL;
          *a3 = v25;
          *(_OWORD *)v25 = v17;
          *(_OWORD *)(v25 + 16) = v18;
          *(__m128i *)(v25 + 32) = v19;
          *(_OWORD *)(v25 + 48) = v21;
          *(_QWORD *)(v25 + 64) = v22;
          if ( v20 )
          {
            ProbeForRead(Address[0], v20, 1u);
            memmove((void *)(v25 + 72), (const void *)Address[0], v20);
          }
          if ( iOperand[0] )
          {
            v26 = iOperand[0];
            ProbeForRead(v46[1], iOperand[0], 1u);
            memmove((void *)(v25 + v20 + 72LL), (const void *)v46[1], v26);
          }
          PushW32ThreadLock(v25, &v40, (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v25, v27, v28, v29);
          v42.m128i_i64[0] = (__int64)KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(v42.m128i_i64[0]);
          *(_QWORD *)(ThreadWin32Thread + 16) = v40;
        }
        else
        {
          return 3LL;
        }
      }
    }
  }
  return (unsigned int)v55;
}
