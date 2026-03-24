/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C00030F0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0005EC0 (NVMeHwMSIInterrupt.c)
 *     NVMeIoPollingDpcRoutine @ 0x1C0019CA0 (NVMeIoPollingDpcRoutine.c)
 *     ProcessCompletionQueues @ 0x1C001C2B0 (ProcessCompletionQueues.c)
 * Callees:
 *     NVMeMapError @ 0x1C00010FC (NVMeMapError.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     IsNVMeControllerOnFatalError @ 0x1C0005E98 (IsNVMeControllerOnFatalError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007D70 (_guard_dispatch_icall_nop.c)
 *     GetLocalCommand @ 0x1C000B8A8 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000D560 (NVMeControllerAsyncReset.c)
 *     NVMeQueueWorkItem @ 0x1C001522C (NVMeQueueWorkItem.c)
 *     RecordCommandTimingHistory @ 0x1C001C8A4 (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned __int16 v7; // r13
  char v8; // cl
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  __int16 v12; // r15
  __int64 result; // rax
  __int64 v14; // rax
  unsigned __int16 v15; // r12
  _WORD *v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned __int8 v19; // cl
  __int16 v20; // ax
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // ecx
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // r12
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  const wchar_t *v32; // rax
  void (__fastcall *v33)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // rax
  unsigned int v44; // eax
  volatile signed __int16 *v45; // rax
  int v46; // ecx
  unsigned __int16 v47; // cx
  __int64 v48; // rdi
  __int128 v49; // xmm0
  int v50; // ecx
  __int64 v51; // rcx
  __int64 LocalCommand; // rax
  __int64 v53; // rdi
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  signed __int32 v56[8]; // [rsp+0h] [rbp-138h] BYREF
  int v57; // [rsp+20h] [rbp-118h]
  const wchar_t *v58; // [rsp+28h] [rbp-110h]
  __int64 v59; // [rsp+30h] [rbp-108h]
  int v60; // [rsp+38h] [rbp-100h]
  int v61; // [rsp+40h] [rbp-F8h]
  __int64 v62; // [rsp+48h] [rbp-F0h]
  const wchar_t *v63; // [rsp+50h] [rbp-E8h]
  __int64 v64; // [rsp+58h] [rbp-E0h]
  const wchar_t *v65; // [rsp+60h] [rbp-D8h]
  __int64 v66; // [rsp+68h] [rbp-D0h]
  const wchar_t *v67; // [rsp+70h] [rbp-C8h]
  __int64 v68; // [rsp+78h] [rbp-C0h]
  const wchar_t *v69; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+88h] [rbp-B0h]
  const wchar_t *v71; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v72; // [rsp+98h] [rbp-A0h]
  const wchar_t *v73; // [rsp+A0h] [rbp-98h]
  __int64 v74; // [rsp+A8h] [rbp-90h]
  __int64 v75; // [rsp+B0h] [rbp-88h]
  __int64 v76; // [rsp+B8h] [rbp-80h]
  __int64 v77; // [rsp+C0h] [rbp-78h]
  __int64 v78; // [rsp+C8h] [rbp-70h]
  int v79; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v80; // [rsp+D8h] [rbp-60h] BYREF
  unsigned __int64 v81; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+E8h] [rbp-50h] BYREF
  _DWORD *v83; // [rsp+F0h] [rbp-48h]
  __int64 v84; // [rsp+F8h] [rbp-40h]
  bool v85; // [rsp+148h] [rbp+10h]
  unsigned __int16 v86; // [rsp+150h] [rbp+18h]
  char v87; // [rsp+158h] [rbp+20h]

  v6 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v81 = 0LL;
  v7 = 0;
  v80 = 0LL;
  v82 = 0LL;
  v85 = a4 == 1;
  v8 = 1;
  v87 = 1;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 108) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v80, &v82);
    v8 = 1;
  }
  if ( (*((_WORD *)v6 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( v8 )
    {
      v9 = *(unsigned __int16 *)(a3 + 168);
      v10 = *((unsigned __int16 *)v6 + 5);
      v11 = *((unsigned __int16 *)v6 + 6);
      v12 = *((_WORD *)v6 + 4);
      if ( (_WORD)v9 )
      {
        result = *(unsigned int *)(a2 + 24);
        if ( (result & 1) == 0 )
          goto LABEL_63;
      }
      if ( (_WORD)v10 )
      {
        v14 = *(_QWORD *)(a2 + 776);
        v15 = *(_WORD *)(a2 + 286);
        v83 = (_DWORD *)(136 * v10 + v14 - 4);
        v16 = (_WORD *)(136 * v10 + v14 - 90);
        v84 = 136 * v10 + v14 - 8;
        result = 136 * v10 + v14 - 104;
      }
      else
      {
        v15 = *(_WORD *)(a2 + 284);
        v83 = (_DWORD *)(a2 + 428);
        result = a2 + 328;
        v84 = a2 + 424;
        v16 = (_WORD *)(a2 + 342);
      }
      v86 = v15;
      if ( (unsigned __int16)v11 >= v15 )
      {
        v55 = *((unsigned __int16 *)v6 + 7);
        v78 = 0LL;
        v77 = 0LL;
        v76 = 0LL;
        v75 = 0LL;
        v74 = 0LL;
        v73 = 0LL;
        v72 = ((unsigned __int64)(unsigned int)v55 >> 9) & 7;
        v71 = L"Status.SCT";
        v70 = (unsigned __int8)(v55 >> 1);
        v69 = L"Status.SC";
        v68 = v9;
        v67 = L"CQId";
        v66 = v10;
        v65 = L"SQId";
        v64 = v11;
        v63 = L"CID";
        v62 = 0LL;
        v61 = 0;
        v60 = 2;
        v59 = 1LL;
        v58 = L"NVMe Invalid Command Id";
        v57 = 6;
        StorPortExtendedFunction(87LL, a2, 0LL, 1LL);
        result = IsNVMeControllerOnFatalError(a2);
        if ( (_BYTE)result )
        {
          if ( *(_QWORD *)(a2 + 3992) )
            result = NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
          else
            result = NVMeControllerAsyncReset(
                       a2,
                       0LL,
                       0LL,
                       0LL,
                       v57,
                       v58,
                       v59,
                       v60,
                       v61,
                       v62,
                       v63,
                       v64,
                       v65,
                       v66,
                       v67,
                       v68,
                       v69,
                       v70,
                       v71,
                       v72,
                       v73,
                       v74,
                       v75,
                       v76,
                       v77,
                       v78,
                       v79);
        }
        goto LABEL_63;
      }
      v17 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)result + 16 * v11), 0LL);
      if ( !v17 )
        goto LABEL_63;
      if ( *(_BYTE *)(v17 + 2) == 40 )
        v18 = *(_QWORD *)(v17 + 104);
      else
        v18 = *(_QWORD *)(v17 + 56);
      if ( (v18 & 0xFFF) != 0 )
        v18 = v18 - (v18 & 0xFFF) + 4096;
      *v16 = v12;
      if ( *(_BYTE *)(v17 + 2) == 40 )
        v19 = *(_BYTE *)(*(unsigned int *)(v17 + 52) + v17 + 10);
      else
        v19 = *(_BYTE *)(v17 + 7);
      v20 = *((_WORD *)v6 + 7);
      v21 = v19;
      *(_WORD *)(v18 + 4250) = v20;
      v79 = v19;
      if ( (v20 & 0xE00) == 0 && (v20 & 0x1FE) == 0 )
      {
        *(_BYTE *)(v17 + 3) = 1;
        if ( *(_DWORD *)(a2 + 208) > (unsigned int)v19 )
        {
          v22 = *(_QWORD *)(a2 + 8LL * v19 + 1736);
          if ( v22 )
            ++*(_QWORD *)(v22 + 24);
        }
      }
      else
      {
        NVMeMapError(a2, v17, 0, 0);
        if ( *(_DWORD *)(a2 + 208) > (unsigned int)v21 )
        {
          v51 = *(_QWORD *)(a2 + 8 * v21 + 1736);
          if ( v51 )
            ++*(_DWORD *)(v51 + 32);
        }
        if ( (unsigned __int8)IsNVMeControllerOnFatalError(a2) )
        {
          if ( *(_QWORD *)(a2 + 3992) )
            NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
          else
            NVMeControllerAsyncReset(
              a2,
              0LL,
              0LL,
              0LL,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78,
              v79);
        }
      }
      if ( *(_BYTE *)(a2 + 17) )
      {
        if ( *(_BYTE *)(v17 + 2) == 40 )
          v23 = *(_QWORD *)(v17 + 104);
        else
          v23 = *(_QWORD *)(v17 + 56);
        if ( (v23 & 0xFFF) != 0 )
          v23 = v23 - (v23 & 0xFFF) + 4096;
        v24 = *(_DWORD *)(v23 + 4100);
        if ( v24 == -1 || (v25 = *(_DWORD *)(a2 + 208), v26 = 0, !v25) )
        {
LABEL_69:
          v27 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(a2 + 8LL * v26 + 1736);
            if ( v27 )
            {
              if ( *(_DWORD *)(v27 + 16) == v24 )
                break;
            }
            if ( ++v26 >= v25 )
              goto LABEL_69;
          }
        }
        v28 = *((unsigned __int16 *)v6 + 7);
        v29 = v6[2];
        v30 = *v6;
        v31 = *((unsigned __int16 *)v6 + 6);
        v32 = L"Admin Command Completion";
        if ( (*(_BYTE *)(v23 + 4253) & 1) == 0 )
          v32 = L"NVM Command Completion";
        v78 = 0LL;
        v77 = 0LL;
        v76 = 0LL;
        v75 = 0LL;
        v74 = v29;
        v73 = L"DW2";
        v72 = v30;
        v71 = L"DW0";
        v70 = v28;
        v69 = L"Complete Status";
        v68 = (v28 >> 9) & 7;
        v67 = L"Status.SCT";
        v66 = (unsigned __int8)(v28 >> 1);
        v65 = L"Status.SC";
        v64 = v31;
        v63 = L"CID";
        v62 = v17;
        v61 = 0;
        v60 = 4;
        v59 = 16LL;
        v58 = v32;
        v57 = 4;
        StorPortExtendedFunction(87LL, a2, v27, 0LL);
        v15 = v86;
      }
      v33 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v18 + 4224);
      if ( v33 )
        v33(a2, v17, v6);
      else
        *(_BYTE *)(v18 + 4253) |= 8u;
      if ( *(_QWORD *)(v18 + 4160) )
      {
        v34 = 0LL;
        StorPortExtendedFunction(47LL, a2, &v80, &v81);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v35 = *(_QWORD *)(v18 + 4160);
          if ( v81 >= v35 && v80 )
          {
            v36 = v81 - v35;
            if ( v80 == 10000000 )
            {
              v37 = v36 / 0x989680;
              v38 = v36 % 0x989680;
            }
            else
            {
              v38 = v36 % v80;
              v37 = (v81 - v35) / v80;
            }
            v39 = 1000 * v38;
            if ( v80 == 10000000 )
            {
              v40 = v39 / 0x989680;
              v41 = v39 % 0x989680;
            }
            else
            {
              v41 = v39 % v80;
              v40 = 1000 * v38 / v80;
            }
            v42 = 10000 * v41;
            if ( v80 == 10000000 )
              v43 = v42 / 0x989680;
            else
              v43 = v42 / v80;
            v34 = v43 + 10000 * (v40 + 1000 * v37);
          }
          StorPortNotification(4102LL, a2, v34);
        }
        if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
        {
          *(_QWORD *)(v18 + 4184) = v82;
          *(_QWORD *)(v18 + 4192) = v81;
          RecordCommandTimingHistory(a2, v17, v80);
        }
      }
      if ( (*(_BYTE *)(v18 + 4253) & 8) != 0 )
      {
        if ( *(_DWORD *)(v17 + 12) != 251658240 && v17 != a2 + 848 )
        {
          v44 = 0;
          while ( v17 != 112LL * v44 + a2 + 960 )
          {
            if ( ++v44 >= 6 )
            {
              if ( v85 )
                StorPortNotification(4104LL, a2, v17);
              else
                StorPortNotification(0LL, a2, v17);
              goto LABEL_57;
            }
          }
        }
        LocalCommand = GetLocalCommand(a2, v17);
        v53 = LocalCommand;
        if ( LocalCommand )
        {
          *(_DWORD *)LocalCommand = 0;
          if ( *(_DWORD *)(v17 + 12) == 251658240 )
          {
            NVMeFreeDmaBuffer(a2, 0x2000LL, v17 + 56, *(_QWORD *)(LocalCommand + 104));
            StorPortExtendedFunction(1LL, a2, v53, v54);
          }
        }
      }
LABEL_57:
      v45 = (volatile signed __int16 *)v84;
      ++*v83;
      _InterlockedDecrement16(v45);
      v46 = *(unsigned __int16 *)(a3 + 170);
      if ( v46 >= v15 - 1 )
      {
        v47 = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        v47 = v46 + 1;
      }
      *(_WORD *)(a3 + 170) = v47;
      ++v7;
      v48 = v47;
      v8 = v87;
      v6 = (unsigned int *)(*(_QWORD *)a3 + 16 * v48);
      if ( *(_BYTE *)(a3 + 200) )
      {
        v8 = v87;
        if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 72) )
          v8 = 0;
        v87 = v8;
      }
      if ( (*((_WORD *)v6 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 308) = result;
  v49 = *(_OWORD *)v6;
  *(_WORD *)(a3 + 304) = v7;
  *(_OWORD *)(a3 + 328) = v49;
  if ( v7 )
  {
    v50 = result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v50;
    _InterlockedOr(v56, 0);
  }
LABEL_63:
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 160);
      *(_DWORD *)(result + 16) = 1 << *(_BYTE *)(a3 + 168);
      _InterlockedOr(v56, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
