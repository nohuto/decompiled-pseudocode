/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C0002000
 * Callers:
 *     ProcessCompletionQueues @ 0x1C0001AD0 (ProcessCompletionQueues.c)
 *     NVMeIoPollingDpcRoutine @ 0x1C00235E0 (NVMeIoPollingDpcRoutine.c)
 * Callees:
 *     NVMeMapError @ 0x1C0001D84 (NVMeMapError.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     IsNVMeControllerOnFatalError @ 0x1C0005834 (IsNVMeControllerOnFatalError.c)
 *     GetLocalCommand @ 0x1C000A538 (GetLocalCommand.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00106A0 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerAsyncReset @ 0x1C001892C (NVMeControllerAsyncReset.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 *     RecordCommandTimingHistory @ 0x1C0025214 (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  unsigned __int16 v6; // dx
  char v7; // cl
  unsigned int *v9; // r14
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // r11
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  _WORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rbp
  char v20; // cl
  __int64 v21; // r15
  unsigned __int8 v22; // cl
  __int16 v23; // ax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  unsigned __int64 v28; // rbx
  unsigned int v29; // r8d
  __int64 v30; // r12
  void (__fastcall *v31)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  volatile signed __int16 *v42; // rax
  int v43; // ecx
  unsigned __int16 v44; // cx
  __int16 v45; // dx
  bool v46; // zf
  bool v47; // dl
  __int128 v48; // xmm0
  int v49; // ecx
  __int64 LocalCommand; // rax
  __int64 v51; // rbx
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // r11
  unsigned __int8 v56; // al
  __int64 v57; // rdx
  unsigned __int64 v58; // r8
  __int64 v59; // r10
  __int64 v60; // rcx
  const wchar_t *v61; // rax
  unsigned __int64 v62; // rax
  signed __int32 v63[8]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v64; // [rsp+20h] [rbp-148h]
  const wchar_t *v65; // [rsp+28h] [rbp-140h]
  __int64 v66; // [rsp+30h] [rbp-138h]
  int v67; // [rsp+38h] [rbp-130h]
  int v68; // [rsp+40h] [rbp-128h]
  __int64 v69; // [rsp+48h] [rbp-120h]
  const wchar_t *v70; // [rsp+50h] [rbp-118h]
  __int64 v71; // [rsp+58h] [rbp-110h]
  const wchar_t *v72; // [rsp+60h] [rbp-108h]
  __int64 v73; // [rsp+68h] [rbp-100h]
  const wchar_t *v74; // [rsp+70h] [rbp-F8h]
  __int64 v75; // [rsp+78h] [rbp-F0h]
  const wchar_t *v76; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v77; // [rsp+88h] [rbp-E0h]
  const wchar_t *v78; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v79; // [rsp+98h] [rbp-D0h]
  const wchar_t *v80; // [rsp+A0h] [rbp-C8h]
  __int64 v81; // [rsp+A8h] [rbp-C0h]
  __int64 v82; // [rsp+B0h] [rbp-B8h]
  __int64 v83; // [rsp+B8h] [rbp-B0h]
  __int64 v84; // [rsp+C0h] [rbp-A8h]
  __int64 v85; // [rsp+C8h] [rbp-A0h]
  char v86; // [rsp+D0h] [rbp-98h]
  __int16 v87; // [rsp+D2h] [rbp-96h]
  bool v88; // [rsp+D4h] [rbp-94h]
  char v89; // [rsp+D5h] [rbp-93h]
  _BYTE v90[2]; // [rsp+D6h] [rbp-92h] BYREF
  unsigned __int16 v91; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v92; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v93; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-78h] BYREF
  _DWORD *v95; // [rsp+F8h] [rbp-70h]
  __int64 v96; // [rsp+100h] [rbp-68h]
  __int128 v97; // [rsp+108h] [rbp-60h] BYREF
  int v98; // [rsp+118h] [rbp-50h]

  v5 = 0;
  v6 = 0;
  v7 = 1;
  v9 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v87 = 0;
  v93 = 0LL;
  v92 = 0LL;
  v94 = 0LL;
  v86 = 1;
  v89 = 0;
  v88 = 0;
  if ( a4 )
  {
    v5 = (a4 & 2) != 0;
    v89 = a4 & 1;
    v88 = v5;
  }
  if ( *(_BYTE *)(a2 + 21) || (*(_DWORD *)(a2 + 116) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v92, &v94);
    v6 = 0;
    v7 = 1;
  }
  if ( (*((_WORD *)v9 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( v7 )
    {
      v10 = *(unsigned __int16 *)(a3 + 168);
      v11 = *((unsigned __int16 *)v9 + 5);
      v12 = *((unsigned __int16 *)v9 + 6);
      v13 = *((_WORD *)v9 + 4);
      if ( (_WORD)v10 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_76;
      }
      if ( (_WORD)v11 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_76;
        v15 = *(_QWORD *)(a2 + 792);
        v16 = *(_WORD *)(a2 + 302);
        v95 = (_DWORD *)(136 * v11 + v15 - 4);
        v96 = 136 * v11 + v15 - 8;
        v17 = (_WORD *)(136 * v11 + v15 - 90);
        v18 = (_QWORD *)(v15 + 136 * v11 - 104);
      }
      else
      {
        v16 = *(_WORD *)(a2 + 300);
        v96 = a2 + 440;
        v18 = (_QWORD *)(a2 + 344);
        v95 = (_DWORD *)(a2 + 444);
        v17 = (_WORD *)(a2 + 358);
      }
      v91 = v16;
      if ( (unsigned __int16)v12 >= v16 )
      {
        if ( *(_BYTE *)(a2 + 22) )
        {
          v62 = *((unsigned __int16 *)v9 + 7);
          v85 = 0LL;
          v84 = 0LL;
          v83 = 0LL;
          v82 = 0LL;
          v81 = 0LL;
          v80 = 0LL;
          v79 = ((unsigned __int64)(unsigned int)v62 >> 9) & 7;
          v78 = L"Status.SCT";
          v77 = (unsigned __int8)(v62 >> 1);
          v76 = L"Status.SC";
          v75 = v10;
          v74 = L"CQId";
          v73 = v11;
          v72 = L"SQId";
          v71 = v12;
          v70 = L"CID";
          v69 = 0LL;
          v68 = 0;
          v67 = 2;
          v66 = 1LL;
          v65 = L"NVMe Invalid Command Id";
          LODWORD(v64) = 6;
          StorPortExtendedFunction(87LL, a2, 0LL, 1LL);
        }
        result = IsNVMeControllerOnFatalError(a2);
        if ( (_BYTE)result )
        {
          if ( *(_QWORD *)(a2 + 4008) )
            result = NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
          else
            result = NVMeControllerAsyncReset(a2, 0LL, 0LL, 0LL);
        }
        goto LABEL_76;
      }
      result = *v18 + 16 * v12;
      v19 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
      if ( !v19 )
        goto LABEL_76;
      v20 = *(_BYTE *)(v19 + 2);
      if ( v20 == 40 )
        v21 = *(_QWORD *)(v19 + 104);
      else
        v21 = *(_QWORD *)(v19 + 56);
      result = v21 & 0xFFF;
      if ( (v21 & 0xFFF) != 0 )
        v21 = v21 - result + 4096;
      if ( !v21 )
        goto LABEL_76;
      if ( v20 == 40 && *(_DWORD *)(v19 + 20) == 10 )
      {
        v54 = v19 + *(unsigned int *)(v19 + 120);
        if ( v54 )
        {
          *(_DWORD *)(v54 + 84) = *v9;
          *(_WORD *)(v54 + 74) = *((_WORD *)v9 + 7);
        }
      }
      *v17 = v13;
      if ( *(_BYTE *)(v19 + 2) == 40 )
        v22 = *(_BYTE *)(*(unsigned int *)(v19 + 52) + v19 + 10);
      else
        v22 = *(_BYTE *)(v19 + 7);
      v23 = *((_WORD *)v9 + 7);
      v24 = v22;
      *(_WORD *)(v21 + 4250) = v23;
      if ( (v23 & 0xE00) == 0 && (v23 & 0x1FE) == 0 )
      {
        *(_BYTE *)(v19 + 3) = 1;
        if ( *(_DWORD *)(a2 + 224) > (unsigned int)v22 )
        {
          v25 = *(_QWORD *)(a2 + 8LL * v22 + 1752);
          if ( v25 )
            ++*(_QWORD *)(v25 + 24);
        }
      }
      else
      {
        NVMeMapError(a2, v19, 0, 0);
        if ( *(_DWORD *)(a2 + 224) > (unsigned int)v24 )
        {
          v53 = *(_QWORD *)(a2 + 8 * v24 + 1752);
          if ( v53 )
            ++*(_DWORD *)(v53 + 32);
        }
        if ( (unsigned __int8)IsNVMeControllerOnFatalError(a2) )
        {
          if ( *(_QWORD *)(a2 + 4008) )
            NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem);
          else
            NVMeControllerAsyncReset(a2, 0LL, 0LL, 0LL);
        }
      }
      if ( *(_BYTE *)(v19 + 2) == 40 )
        v26 = *(_QWORD *)(v19 + 104);
      else
        v26 = *(_QWORD *)(v19 + 56);
      if ( (v26 & 0xFFF) != 0 )
        v26 = v26 - (v26 & 0xFFF) + 4096;
      v27 = *(_DWORD *)(v26 + 4100);
      v28 = 0LL;
      if ( v27 == -1 || (v12 = *(unsigned int *)(a2 + 224), v29 = 0, !(_DWORD)v12) )
      {
LABEL_82:
        v30 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(a2 + 8LL * v29 + 1752);
          if ( v30 )
          {
            if ( *(_DWORD *)(v30 + 16) == v27 )
              break;
          }
          if ( ++v29 >= (unsigned int)v12 )
            goto LABEL_82;
        }
      }
      if ( *(_BYTE *)(a2 + 24) )
      {
        v55 = *((unsigned __int16 *)v9 + 7);
        v56 = *(_BYTE *)(v26 + 4253) & 1;
        v57 = v9[2];
        v58 = *v9;
        v59 = *((unsigned __int16 *)v9 + 6);
        v85 = 0LL;
        v84 = 0LL;
        v83 = 0LL;
        v82 = 0LL;
        v81 = v57;
        v60 = v56;
        v61 = L"Admin Command Completion";
        if ( !(_BYTE)v60 )
          v61 = L"NVM Command Completion";
        v80 = L"DW2";
        v79 = v58;
        v78 = L"DW0";
        v77 = v55;
        v76 = L"Complete Status";
        v75 = (v55 >> 9) & 7;
        v28 = 0LL;
        v74 = L"Status.SCT";
        v73 = (unsigned __int8)((unsigned __int64)(unsigned int)v55 >> 1);
        v72 = L"Status.SC";
        v71 = v59;
        v70 = L"CID";
        v69 = v19;
        v68 = 0;
        v67 = 4;
        v66 = ((v60 + 1) << 7) | 0x10;
        v65 = v61;
        LODWORD(v64) = 4;
        StorPortExtendedFunction(87LL, a2, v30, 0LL);
        v5 = v88;
      }
      v31 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v21 + 4224);
      if ( v31 )
        v31(a2, v19, v9);
      else
        *(_BYTE *)(v21 + 4253) |= 8u;
      if ( *(_QWORD *)(v21 + 4160) )
      {
        StorPortExtendedFunction(47LL, a2, &v92, &v93);
        if ( *(_BYTE *)(a2 + 21) )
        {
          v32 = *(_QWORD *)(v21 + 4160);
          if ( v93 >= v32 )
          {
            v28 = 0LL;
            if ( v92 )
            {
              v33 = v93 - v32;
              if ( v92 == 10000000 )
              {
                v34 = v33 / 0x989680;
                v35 = v33 % 0x989680;
              }
              else
              {
                v35 = v33 % v92;
                v34 = (v93 - v32) / v92;
              }
              v36 = 1000 * v35;
              if ( v92 == 10000000 )
              {
                v37 = v36 / 0x989680;
                v38 = v36 % 0x989680;
              }
              else
              {
                v38 = v36 % v92;
                v37 = 1000 * v35 / v92;
              }
              v39 = 10000 * v38;
              if ( v92 == 10000000 )
                v40 = v39 / 0x989680;
              else
                v40 = v39 / v92;
              v28 = v40 + 10000 * (v37 + 1000 * v34);
            }
          }
          StorPortNotification(4102LL, a2, v28, v19, v64, v65);
        }
        if ( (*(_DWORD *)(a2 + 116) & 2) != 0 )
        {
          *(_QWORD *)(v21 + 4184) = v94;
          *(_QWORD *)(v21 + 4192) = v93;
          RecordCommandTimingHistory(a2, v19, v92);
        }
      }
      if ( (*(_BYTE *)(v21 + 4253) & 8) != 0 )
      {
        if ( *(_DWORD *)(v19 + 12) != 251658240 && v19 != a2 + 864 )
        {
          v41 = 0;
          while ( v19 != 112LL * v41 + a2 + 976 )
          {
            if ( ++v41 >= 6 )
            {
              if ( v89 )
                StorPortNotification(4104LL, a2, v19, v12, v64, v65);
              else
                StorPortNotification(0LL, a2, v19, v12, v64, v65);
              goto LABEL_60;
            }
          }
        }
        LocalCommand = GetLocalCommand(a2, v19);
        v51 = LocalCommand;
        if ( LocalCommand )
        {
          *(_DWORD *)LocalCommand = 0;
          if ( *(_DWORD *)(v19 + 12) == 251658240 )
          {
            NVMeFreeDmaBuffer(a2, 0x2000LL, v19 + 56, *(_QWORD *)(LocalCommand + 104));
            StorPortExtendedFunction(1LL, a2, v51, v52);
          }
        }
      }
LABEL_60:
      v42 = (volatile signed __int16 *)v96;
      ++*v95;
      _InterlockedDecrement16(v42);
      v43 = *(unsigned __int16 *)(a3 + 170);
      if ( v43 >= v91 - 1 )
      {
        v44 = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        v44 = v43 + 1;
      }
      v45 = v87;
      *(_WORD *)(a3 + 170) = v44;
      v6 = v45 + 1;
      v9 = (unsigned int *)(*(_QWORD *)a3 + 16LL * v44);
      v46 = *(_BYTE *)(a3 + 200) == 0;
      v87 = v6;
      if ( v46 || (unsigned int)v6 < *(_DWORD *)(a2 + 80) )
      {
        if ( !v5 )
        {
          v90[0] = 0;
          StorPortExtendedFunction(109LL, a2, v90, v12);
          if ( v90[0] != 2 )
            goto LABEL_71;
        }
        v98 = 0;
        v97 = 0LL;
        if ( (unsigned int)StorPortExtendedFunction(106LL, a2, &v97, v12) )
          goto LABEL_71;
        v47 = 1;
        if ( DWORD2(v97) )
          v47 = 100 * HIDWORD(v97) >= (unsigned int)(5 * DWORD2(v97));
        if ( (_DWORD)v97 && 100 * DWORD1(v97) < (unsigned int)(5 * v97) || !v47 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 4080));
          v7 = 0;
          v86 = 0;
        }
        else
        {
LABEL_71:
          v7 = v86;
        }
        v6 = v87;
      }
      else
      {
        v7 = 0;
        v86 = 0;
      }
      if ( (*((_WORD *)v9 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 308) = result;
  v48 = *(_OWORD *)v9;
  *(_WORD *)(a3 + 304) = v6;
  *(_OWORD *)(a3 + 328) = v48;
  if ( v6 )
  {
    v49 = result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v49;
    _InterlockedOr(v63, 0);
  }
LABEL_76:
  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 176);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(a3 + 168);
      _InterlockedOr(v63, 0);
      *(_BYTE *)(a2 + 25) = 0;
    }
  }
  return result;
}
