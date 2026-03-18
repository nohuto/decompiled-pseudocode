/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C022BA1C
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021647C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0222268 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0222C44 (IntToULongLong.c)
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
  unsigned __int64 v21; // [rsp+38h] [rbp-180h] BYREF
  __int64 v22; // [rsp+40h] [rbp-178h]
  ULONGLONG v23; // [rsp+48h] [rbp-170h] BYREF
  ULONGLONG pullResult[2]; // [rsp+50h] [rbp-168h] BYREF
  ULONGLONG v25; // [rsp+60h] [rbp-158h]
  __int64 v26; // [rsp+68h] [rbp-150h] BYREF
  int v27; // [rsp+70h] [rbp-148h]
  int v28; // [rsp+74h] [rbp-144h]
  __int128 v29; // [rsp+78h] [rbp-140h] BYREF
  __int64 v30; // [rsp+88h] [rbp-130h]
  __int128 v31; // [rsp+90h] [rbp-128h]
  __int128 v32; // [rsp+A0h] [rbp-118h]
  volatile void *Address[2]; // [rsp+B0h] [rbp-108h]
  volatile void *v34[2]; // [rsp+C0h] [rbp-F8h]
  INT iOperand[2]; // [rsp+D0h] [rbp-E8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-E0h]
  struct _KTHREAD *v37; // [rsp+E0h] [rbp-D8h]
  __m128i v38; // [rsp+100h] [rbp-B8h]
  __int128 v39; // [rsp+110h] [rbp-A8h]
  __int128 v40; // [rsp+120h] [rbp-98h]
  __int128 v41; // [rsp+130h] [rbp-88h]
  _OWORD v42[7]; // [rsp+140h] [rbp-78h] BYREF
  int v43; // [rsp+1C0h] [rbp+8h] BYREF
  char v44; // [rsp+1C8h] [rbp+10h] BYREF
  __int64 *v45; // [rsp+1D0h] [rbp+18h]
  __int64 v46; // [rsp+1D8h] [rbp+20h]

  v45 = a3;
  v22 = 0LL;
  memset(v42, 0, 0x48uLL);
  pullResult[0] = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v43 = 0;
  v28 = 0;
  v46 = 0LL;
  *a3 = 0LL;
  v26 = a1;
  v27 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(60LL);
  LODWORD(a1) = KeUserModeCallback(60LL, &v26, 16LL, &v21, &v43);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  if ( (int)a1 >= 0 && v43 == 24 )
  {
    v6 = (__int64 *)v21;
    if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v46 = *v6;
    if ( v46 == 2 )
    {
      v46 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 512);
      if ( !v7 || (*(_DWORD *)(v7 + 84) & 1) == 0 || *(_OWORD **)(v7 + 96) != v42 )
      {
        v8 = *(_QWORD *)(v21 + 16);
        if ( v8 + 72 < v8 || v8 + 72 > MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        v9 = *(_OWORD *)v8;
        v39 = v9;
        v31 = v9;
        v10 = *(_OWORD *)(v8 + 16);
        v40 = v10;
        v32 = v10;
        v11 = *(__m128i *)(v8 + 32);
        v38 = v11;
        *(__m128i *)Address = v11;
        v41 = *(_OWORD *)(v8 + 48);
        *(_OWORD *)v34 = v41;
        *(_QWORD *)iOperand = *(_QWORD *)(v8 + 64);
        v42[0] = v9;
        v42[1] = v10;
        v42[2] = v11;
        v42[3] = v41;
        *(_QWORD *)&v42[4] = *(_QWORD *)iOperand;
        v46 = 2LL;
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
          v11 = v38;
          v9 = v39;
          v10 = v40;
          v13 = v41;
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
            ProbeForRead(v34[1], iOperand[0], 1u);
            memmove((void *)(v17 + v12 + 72LL), (const void *)v34[1], v18);
          }
          PushW32ThreadLock(v17, &v29, (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v17);
          v37 = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v37);
          *(_QWORD *)(ThreadWin32Thread + 16) = v29;
        }
        else
        {
          return 3LL;
        }
      }
    }
  }
  return (unsigned int)v46;
}
