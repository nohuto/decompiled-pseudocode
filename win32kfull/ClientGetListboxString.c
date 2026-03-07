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
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r13
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int8 *result; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 *v29; // rdi
  ULONG64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  ULONG64 v34; // rcx
  __int64 v35; // xmm0_8
  __int64 v36; // rcx
  int v37; // r14d
  int v38; // r8d
  unsigned int v39; // r8d
  unsigned int v40; // eax
  _BYTE v41[4]; // [rsp+30h] [rbp-368h] BYREF
  int v42; // [rsp+34h] [rbp-364h] BYREF
  int v43; // [rsp+38h] [rbp-360h]
  unsigned __int8 *v44; // [rsp+40h] [rbp-358h]
  unsigned __int64 v45; // [rsp+48h] [rbp-350h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-348h] BYREF
  int v47; // [rsp+58h] [rbp-340h]
  __int128 v48; // [rsp+70h] [rbp-328h] BYREF
  __int64 v49; // [rsp+80h] [rbp-318h]
  __int128 v50; // [rsp+90h] [rbp-308h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-2F8h]
  __int128 v52; // [rsp+D0h] [rbp-2C8h]
  __int128 v53; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-2A8h]
  unsigned __int8 v55[96]; // [rsp+100h] [rbp-298h] BYREF
  unsigned __int8 v56[512]; // [rsp+160h] [rbp-238h] BYREF

  v47 = a2;
  v43 = a7 & 1;
  memset_0(v55, 0, sizeof(v55));
  v12 = v55;
  v45 = 0LL;
  v42 = 0;
  RegionSize = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v14 = PtiCurrentShared(v13);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 59);
  else
    v16 = 0LL;
  v17 = a4[1] & 0x7FFFFFFF;
  v18 = v17 + 2;
  if ( (unsigned int)v18 >= v17 )
  {
    if ( a4[1] >= 0 || v43 || (v18 *= 2LL, v18 <= 0xFFFFFFFF) )
    {
      result = AllocCallbackMessage(96, 1u, (unsigned int)v18, v56, 0, 0x200uLL);
      v12 = result;
      v44 = result;
      if ( !result )
        return result;
      PtiCurrentShared(v20);
      v50 = 0LL;
      v51 = 0LL;
      if ( v12 != v55 && v12 != v56 )
        PushW32ThreadLock((__int64)v12, &v50, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 5) = v16;
      *((_DWORD *)v12 + 12) = v47;
      *((_QWORD *)v12 + 7) = a3;
      *((_QWORD *)v12 + 8) = a5;
      *((_QWORD *)v12 + 9) = a6;
      if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v18, (void **)v12 + 10) >= 0 )
      {
        *((_DWORD *)v12 + 22) = v18;
        ThreadLock(a1, &v53);
        v21 = *((_QWORD *)v15 + 60);
        v52 = *(_OWORD *)(v21 + 64);
        v48 = v52;
        v49 = *(_QWORD *)(v21 + 80);
        *(_QWORD *)(v21 + 72) = v16;
        v22 = a1 ? *a1 : 0LL;
        *(_QWORD *)(*((_QWORD *)v15 + 60) + 64LL) = v22;
        v23 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
        *(_QWORD *)(*((_QWORD *)v15 + 60) + 80LL) = v23;
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v41);
        EtwTraceBeginCallback(72LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v24 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &v45, &v42);
        EtwTraceEndCallback(72LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v41);
        ThreadUnlock1(v26, v25, v27);
        v28 = *((_QWORD *)v15 + 60);
        *(_OWORD *)(v28 + 64) = v52;
        *(_QWORD *)(v28 + 80) = v49;
        if ( v24 >= 0 && v42 == 24 )
        {
          v29 = (unsigned __int64 *)v45;
          v30 = v45 + 8;
          if ( v45 + 8 < v45 || v30 > MmUserProbeAddress )
            v29 = (unsigned __int64 *)MmUserProbeAddress;
          v31 = *v29;
          RegionSize = v31;
          if ( (v31 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
            goto LABEL_53;
          if ( a8 )
          {
            v32 = *((_QWORD *)PtiCurrentShared(v30) + 64);
            if ( !v32 || (*(_DWORD *)(v32 + 84) & 1) == 0 || *(_QWORD *)(v32 + 96) != *((_QWORD *)a4 + 1) )
            {
              v33 = *(_QWORD **)(v45 + 16);
              if ( v33 + 1 < v33 || (unsigned __int64)(v33 + 1) > MmUserProbeAddress )
                v33 = (_QWORD *)MmUserProbeAddress;
              **((_QWORD **)a4 + 1) = *v33;
              goto LABEL_46;
            }
          }
          else
          {
            v34 = v45;
            if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
              v34 = MmUserProbeAddress;
            v35 = *(_QWORD *)(v34 + 16);
            v48 = *(_OWORD *)v34;
            v49 = v35;
            v36 = *((_QWORD *)PtiCurrentShared(v34) + 64);
            if ( !v36 || (*(_DWORD *)(v36 + 84) & 1) == 0 || *(int **)(v36 + 96) != a4 )
            {
              v37 = v43;
              v31 = (unsigned int)CalcOutputStringSize(
                                    (struct _CALLBACKSTATUS *)&v48,
                                    v31,
                                    (unsigned int)a4[1] >> 31,
                                    v43);
              RegionSize = v31;
              v38 = a4[1];
              if ( v38 >= 0 )
                v39 = ((unsigned int)v38 >> 1) & 0x3FFFFFFF;
              else
                v39 = v38 & 0x7FFFFFFF;
              CopyOutputString((struct _CALLBACKSTATUS *)&v48, (struct _LARGE_STRING *)a4, v39, v37);
LABEL_46:
              if ( !a8 && v31 != -1LL )
              {
                v40 = (unsigned int)*a4 >> 1;
                if ( a4[1] < 0 )
                  v40 = *a4;
                if ( v31 > v40 )
                  LODWORD(v31) = v40;
              }
              goto LABEL_53;
            }
          }
        }
      }
    }
  }
  LODWORD(v31) = 0;
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
  return (unsigned __int8 *)(unsigned int)v31;
}
