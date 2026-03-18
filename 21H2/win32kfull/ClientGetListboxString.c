/*
 * XREFs of ClientGetListboxString @ 0x1C02224D0
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C016E2C0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C023CC90 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00D4FCC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00D57F4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall ClientGetListboxString(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r13
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int8 *result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  ULONG64 v31; // rcx
  __int64 v32; // xmm0_8
  __int64 v33; // rcx
  int v34; // r15d
  int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // eax
  _BYTE v38[4]; // [rsp+30h] [rbp-388h] BYREF
  int v39; // [rsp+34h] [rbp-384h] BYREF
  int v40; // [rsp+38h] [rbp-380h]
  unsigned __int8 *v41; // [rsp+40h] [rbp-378h]
  unsigned __int64 v42; // [rsp+48h] [rbp-370h] BYREF
  int v43; // [rsp+50h] [rbp-368h]
  unsigned __int64 v44; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  __int128 v46; // [rsp+80h] [rbp-338h]
  __int64 v47; // [rsp+90h] [rbp-328h]
  __int128 v48; // [rsp+98h] [rbp-320h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-310h]
  __int128 v50; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-2F8h]
  __int128 v52; // [rsp+F0h] [rbp-2C8h]
  __int128 v53; // [rsp+100h] [rbp-2B8h] BYREF
  __int64 v54; // [rsp+110h] [rbp-2A8h]
  unsigned __int8 v55[96]; // [rsp+120h] [rbp-298h] BYREF
  unsigned __int8 v56[512]; // [rsp+180h] [rbp-238h] BYREF

  v43 = a2;
  v40 = a7 & 1;
  memset(v55, 0, sizeof(v55));
  v12 = v55;
  v42 = 0LL;
  v39 = 0;
  v44 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v15 = 0LL;
  v16 = a4[1] & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 >= v16 )
  {
    if ( a4[1] >= 0 || v40 || (v17 *= 2LL, v17 <= 0xFFFFFFFF) )
    {
      result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v56, 0, 0x200uLL);
      v12 = result;
      v41 = result;
      if ( !result )
        return result;
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v50 = 0LL;
      v51 = 0LL;
      if ( v12 != v55 && v12 != v56 )
        PushW32ThreadLock((__int64)v12, &v50, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 5) = v15;
      *((_DWORD *)v12 + 12) = v43;
      *((_QWORD *)v12 + 7) = a3;
      *((_QWORD *)v12 + 8) = a5;
      *((_QWORD *)v12 + 9) = a6;
      if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v17, (void **)v12 + 10) >= 0 )
      {
        *((_DWORD *)v12 + 22) = v17;
        ThreadLock((__int64)a1, (__int64 *)&v53);
        v19 = *(_QWORD *)(v14 + 480);
        v52 = *(_OWORD *)(v19 + 64);
        v46 = v52;
        v47 = *(_QWORD *)(v19 + 80);
        *(_QWORD *)(v19 + 72) = v15;
        v20 = a1 ? *a1 : 0LL;
        *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v20;
        v21 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
        *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v21;
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v38);
        EtwTraceBeginCallback(72LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v22 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &v42, &v39);
        EtwTraceEndCallback(72LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v38);
        ThreadUnlock1(v24, v23, v25);
        v26 = *(_QWORD *)(v14 + 480);
        *(_OWORD *)(v26 + 64) = v52;
        *(_QWORD *)(v26 + 80) = v47;
        if ( v22 >= 0 && v39 == 24 )
        {
          v27 = (unsigned __int64 *)v42;
          if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
            v27 = (unsigned __int64 *)MmUserProbeAddress;
          v28 = *v27;
          v44 = v28;
          if ( (v28 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
            goto LABEL_53;
          if ( a8 )
          {
            v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
            if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(_QWORD *)(v29 + 96) != *((_QWORD *)a4 + 1) )
            {
              v30 = *(_QWORD **)(v42 + 16);
              if ( v30 + 1 < v30 || (unsigned __int64)(v30 + 1) > MmUserProbeAddress )
                v30 = (_QWORD *)MmUserProbeAddress;
              **((_QWORD **)a4 + 1) = *v30;
              v28 = v44;
              goto LABEL_46;
            }
          }
          else
          {
            v31 = v42;
            if ( v42 + 24 < v42 || v42 + 24 > MmUserProbeAddress )
              v31 = MmUserProbeAddress;
            v32 = *(_QWORD *)(v31 + 16);
            v48 = *(_OWORD *)v31;
            v49 = v32;
            v33 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
            if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(int **)(v33 + 96) != a4 )
            {
              v34 = v40;
              v28 = (unsigned int)CalcOutputStringSize(
                                    (struct _CALLBACKSTATUS *)&v48,
                                    v28,
                                    (unsigned int)a4[1] >> 31,
                                    v40);
              v44 = v28;
              v35 = a4[1];
              if ( v35 >= 0 )
                v36 = ((unsigned int)v35 >> 1) & 0x3FFFFFFF;
              else
                v36 = v35 & 0x7FFFFFFF;
              CopyOutputString((volatile void **)&v48, (struct _LARGE_STRING *)a4, v36, v34);
LABEL_46:
              if ( !a8 && v28 != -1LL )
              {
                v37 = (unsigned int)*a4 >> 1;
                if ( a4[1] < 0 )
                  v37 = *a4;
                if ( v28 > v37 )
                  LODWORD(v28) = v37;
              }
              goto LABEL_53;
            }
          }
        }
      }
    }
  }
  LODWORD(v28) = 0;
LABEL_53:
  if ( v12 != v55 && v12 != v56 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v50);
  }
  return (unsigned __int8 *)(unsigned int)v28;
}
