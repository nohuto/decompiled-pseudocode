__int64 __fastcall NVMeCompletionDpcRoutine(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // r12
  unsigned __int16 v6; // dx
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r10
  __int16 v11; // di
  __int64 result; // rax
  unsigned __int16 v13; // bp
  _DWORD *v14; // rsi
  volatile signed __int16 *v15; // r14
  __int64 v16; // r9
  __int64 *v17; // r8
  _WORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbp
  char v22; // dl
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int8 v26; // cl
  __int16 v27; // ax
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // r14
  unsigned __int64 v35; // r11
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rcx
  const wchar_t *v41; // rax
  void (__fastcall *v42)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned int v45; // ecx
  _BYTE *LocalCommand; // rax
  _BYTE *v47; // rdi
  volatile signed __int16 *v48; // rax
  __int16 v49; // dx
  __int64 v50; // r12
  bool v51; // zf
  bool v52; // dl
  __int128 v53; // xmm0
  int v54; // ecx
  unsigned __int64 v55; // rax
  signed __int32 v56[8]; // [rsp+0h] [rbp-168h] BYREF
  int v57; // [rsp+20h] [rbp-148h]
  const wchar_t *v58; // [rsp+28h] [rbp-140h]
  __int64 v59; // [rsp+30h] [rbp-138h]
  int v60; // [rsp+38h] [rbp-130h]
  int v61; // [rsp+40h] [rbp-128h]
  __int64 v62; // [rsp+48h] [rbp-120h]
  const wchar_t *v63; // [rsp+50h] [rbp-118h]
  __int64 v64; // [rsp+58h] [rbp-110h]
  const wchar_t *v65; // [rsp+60h] [rbp-108h]
  __int64 v66; // [rsp+68h] [rbp-100h]
  const wchar_t *v67; // [rsp+70h] [rbp-F8h]
  __int64 v68; // [rsp+78h] [rbp-F0h]
  const wchar_t *v69; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v70; // [rsp+88h] [rbp-E0h]
  const wchar_t *v71; // [rsp+90h] [rbp-D8h]
  __int64 v72; // [rsp+98h] [rbp-D0h]
  const wchar_t *v73; // [rsp+A0h] [rbp-C8h]
  __int64 v74; // [rsp+A8h] [rbp-C0h]
  __int64 v75; // [rsp+B0h] [rbp-B8h]
  __int64 v76; // [rsp+B8h] [rbp-B0h]
  __int64 v77; // [rsp+C0h] [rbp-A8h]
  __int64 v78; // [rsp+C8h] [rbp-A0h]
  __int16 v79; // [rsp+D0h] [rbp-98h]
  char v80; // [rsp+D2h] [rbp-96h]
  bool v81; // [rsp+D3h] [rbp-95h]
  _BYTE v82[4]; // [rsp+D4h] [rbp-94h] BYREF
  int v83; // [rsp+D8h] [rbp-90h]
  unsigned __int16 v84; // [rsp+DCh] [rbp-8Ch]
  unsigned __int64 v85; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v86; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-78h] BYREF
  _DWORD *v88; // [rsp+F8h] [rbp-70h]
  volatile signed __int16 *v89; // [rsp+100h] [rbp-68h]
  __int128 v90; // [rsp+108h] [rbp-60h] BYREF
  int v91; // [rsp+118h] [rbp-50h]

  LOBYTE(a1) = 1;
  v5 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v6 = 0;
  v79 = 0;
  v86 = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v83 = a1;
  v80 = 0;
  v81 = 0;
  if ( a4 )
  {
    v80 = a4 & 1;
    v81 = (a4 & 2) != 0;
  }
  if ( *(_BYTE *)(a2 + 21) || (*(_DWORD *)(a2 + 116) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v85, &v87);
    LOBYTE(a1) = v83;
    v6 = v79;
  }
  if ( (*((_WORD *)v5 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( (_BYTE)a1 )
    {
      v8 = *(unsigned __int16 *)(a3 + 168);
      v9 = *((unsigned __int16 *)v5 + 5);
      v10 = *((unsigned __int16 *)v5 + 6);
      v11 = *((_WORD *)v5 + 4);
      if ( (_WORD)v8 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_113;
      }
      if ( (_WORD)v9 )
      {
        result = *(unsigned int *)(a2 + 32);
        if ( (result & 1) == 0 )
          goto LABEL_113;
        v19 = *(_QWORD *)(a2 + 872);
        v16 = *((unsigned __int16 *)v5 + 5);
        v13 = *(_WORD *)(a2 + 334);
        v20 = 136 * v9;
        v14 = (_DWORD *)(v20 + v19 - 4);
        v15 = (volatile signed __int16 *)(v20 + v19 - 8);
        v17 = (__int64 *)(v20 + v19 - 104);
        v18 = (_WORD *)(v20 + v19 - 90);
      }
      else
      {
        v13 = *(_WORD *)(a2 + 332);
        v14 = (_DWORD *)(a2 + 476);
        v15 = (volatile signed __int16 *)(a2 + 472);
        v16 = *((unsigned __int16 *)v5 + 5);
        v17 = (__int64 *)(a2 + 376);
        v18 = (_WORD *)(a2 + 390);
      }
      v89 = v15;
      v88 = v14;
      v84 = v13;
      if ( (unsigned __int16)v10 >= v13 )
      {
        if ( *(_BYTE *)(a2 + 22) )
        {
          v55 = *((unsigned __int16 *)v5 + 7);
          v78 = 0LL;
          v77 = 0LL;
          v76 = 0LL;
          v75 = 0LL;
          v74 = 0LL;
          v73 = 0LL;
          v72 = (v55 >> 9) & 7;
          v71 = L"Status.SCT";
          v70 = (unsigned __int8)(v55 >> 1);
          v69 = L"Status.SC";
          v68 = v8;
          v67 = L"CQId";
          v66 = v16;
          v65 = L"SQId";
          v64 = v10;
          v63 = L"CID";
          v62 = 0LL;
          v61 = 0;
          v60 = 2;
          v59 = 1LL;
          v58 = L"NVMe Invalid Command Id";
          v57 = 6;
          StorPortExtendedFunction(87LL, a2, 0LL, 1LL);
        }
        result = IsNVMeControllerOnFatalError(a2);
        if ( (_BYTE)result )
        {
          if ( *(_QWORD *)(a2 + 4208) )
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
                       v78);
        }
        goto LABEL_113;
      }
      result = *v17;
      v21 = _InterlockedExchange64((volatile __int64 *)(16 * v10 + *v17), 0LL);
      if ( !v21 )
        goto LABEL_113;
      *v18 = v11;
      v22 = *(_BYTE *)(v21 + 2);
      if ( v22 == 40 )
        v23 = *(_QWORD *)(v21 + 104);
      else
        v23 = *(_QWORD *)(v21 + 56);
      if ( (v23 & 0xFFF) != 0 )
        v23 = v23 - (v23 & 0xFFF) + 4096;
      v24 = *v17 + 16 * v10;
      if ( (*(_DWORD *)(v24 + 8) & 1) != 0 )
      {
        _InterlockedExchange((volatile __int32 *)(v24 + 8), 0);
        ++*v14;
        _InterlockedDecrement16(v15);
      }
      else if ( v23 )
      {
        if ( v22 == 40 && *(_DWORD *)(v21 + 20) == 10 )
        {
          v25 = v21 + *(unsigned int *)(v21 + 120);
          if ( v25 )
          {
            *(_DWORD *)(v25 + 84) = *v5;
            *(_WORD *)(v25 + 74) = *((_WORD *)v5 + 7);
          }
        }
        if ( *(_BYTE *)(v21 + 2) == 40 )
          v26 = *(_BYTE *)(*(unsigned int *)(v21 + 52) + v21 + 10);
        else
          v26 = *(_BYTE *)(v21 + 7);
        v27 = *((_WORD *)v5 + 7);
        v28 = v26;
        *(_WORD *)(v23 + 4250) = v27;
        if ( (v27 & 0xE00) != 0 || (v27 & 0x1FE) != 0 )
        {
          NVMeMapError(
            a2,
            v21,
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
            v78);
          if ( *(_DWORD *)(a2 + 232) > (unsigned int)v28 )
          {
            v30 = *(_QWORD *)(a2 + 8 * v28 + 1952);
            if ( v30 )
              ++*(_DWORD *)(v30 + 32);
          }
          if ( (unsigned __int8)IsNVMeControllerOnFatalError(a2) )
          {
            if ( *(_QWORD *)(a2 + 4208) )
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
                v78);
          }
        }
        else
        {
          *(_BYTE *)(v21 + 3) = 1;
          if ( *(_DWORD *)(a2 + 232) > (unsigned int)v26 )
          {
            v29 = *(_QWORD *)(a2 + 8LL * v26 + 1952);
            if ( v29 )
              ++*(_QWORD *)(v29 + 24);
          }
        }
        if ( *(_BYTE *)(v21 + 2) == 40 )
          v31 = *(_QWORD *)(v21 + 104);
        else
          v31 = *(_QWORD *)(v21 + 56);
        if ( (v31 & 0xFFF) != 0 )
          v31 = v31 - (v31 & 0xFFF) + 4096;
        v16 = *(unsigned int *)(v31 + 4100);
        if ( (_DWORD)v16 == -1 || (v32 = *(_DWORD *)(a2 + 232), v33 = 0, !v32) )
        {
LABEL_53:
          v34 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v34 = *(_QWORD *)(a2 + 8LL * v33 + 1952);
            if ( v34 )
            {
              if ( *(_DWORD *)(v34 + 16) == (_DWORD)v16 )
                break;
            }
            if ( ++v33 >= v32 )
              goto LABEL_53;
          }
        }
        if ( *(_BYTE *)(a2 + 24) )
        {
          v35 = *((unsigned __int16 *)v5 + 7);
          v36 = *(_BYTE *)(v31 + 4253) & 1;
          v37 = v5[2];
          v38 = *v5;
          v39 = *((unsigned __int16 *)v5 + 6);
          v40 = v36;
          v41 = L"Admin Command Completion";
          if ( !(_BYTE)v40 )
            v41 = L"NVM Command Completion";
          v78 = 0LL;
          v77 = 0LL;
          v76 = 0LL;
          v75 = 0LL;
          v74 = v37;
          v73 = L"DW2";
          v72 = v38;
          v71 = L"DW0";
          v70 = v35;
          v69 = L"Complete Status";
          v68 = (v35 >> 9) & 7;
          v67 = L"Status.SCT";
          v66 = (unsigned __int8)(v35 >> 1);
          v65 = L"Status.SC";
          v64 = v39;
          v63 = L"CID";
          v62 = v21;
          v61 = 0;
          v60 = 4;
          v59 = ((v40 + 1) << 7) | 0x10;
          v58 = v41;
          v57 = 4;
          StorPortExtendedFunction(87LL, a2, v34, 0LL);
        }
        v42 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v23 + 4224);
        if ( v42 )
          v42(a2, v21, v5);
        else
          *(_BYTE *)(v23 + 4253) |= 8u;
        if ( *(_QWORD *)(v23 + 4160) )
        {
          v43 = 0LL;
          StorPortExtendedFunction(47LL, a2, &v85, &v86);
          if ( *(_BYTE *)(a2 + 21) )
          {
            v44 = *(_QWORD *)(v23 + 4160);
            if ( v86 >= v44 && v85 )
              v43 = 10000 * (1000 * ((v86 - v44) % v85) % v85) / v85
                  + 10000 * (1000 * ((v86 - v44) / v85) + 1000 * ((v86 - v44) % v85) / v85);
            StorPortNotification(4102LL, a2, v43);
          }
          if ( (*(_DWORD *)(a2 + 116) & 2) != 0 )
          {
            *(_QWORD *)(v23 + 4184) = v87;
            *(_QWORD *)(v23 + 4192) = v86;
            RecordCommandTimingHistory(a2, v21, v85);
          }
        }
        if ( (*(_BYTE *)(v23 + 4253) & 8) != 0 )
        {
          if ( *(_DWORD *)(v21 + 12) != 251658240 && v21 != a2 + 952 )
          {
            v45 = 0;
            while ( v21 != a2 + ((unsigned __int64)v45 << 7) + 1080 )
            {
              if ( ++v45 >= 6 )
              {
                if ( v80 )
                  StorPortNotification(4104LL, a2, v21);
                else
                  StorPortNotification(0LL, a2, v21);
                goto LABEL_84;
              }
            }
          }
          LocalCommand = (_BYTE *)GetLocalCommand(a2, v21);
          v47 = LocalCommand;
          if ( LocalCommand )
          {
            *LocalCommand = 0;
            if ( *(_DWORD *)(v21 + 12) == 251658240 )
            {
              if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage()
                && (v47[1] & 1) != 0 )
              {
                NVMeControllerReclaimLocalCommand(a2, v47);
              }
              else
              {
                NVMeFreeDmaBuffer(a2, 0x2000LL, v21 + 56, *((_QWORD *)v47 + 13));
                NVMeFreePool(a2, v47);
              }
            }
          }
        }
LABEL_84:
        v48 = v89;
        ++*v88;
        _InterlockedDecrement16(v48);
      }
      a1 = *(unsigned __int16 *)(a3 + 170);
      if ( a1 >= v84 - 1 )
      {
        LOWORD(a1) = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        LOWORD(a1) = a1 + 1;
      }
      v49 = v79;
      *(_WORD *)(a3 + 170) = a1;
      v6 = v49 + 1;
      v50 = (unsigned __int16)a1;
      LOBYTE(a1) = v83;
      v5 = (unsigned int *)(*(_QWORD *)a3 + 16 * v50);
      v51 = *(_BYTE *)(a3 + 248) == 0;
      v79 = v6;
      if ( !v51 )
      {
        a1 = (unsigned __int8)v83;
        if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 80) )
          a1 = 0;
        v83 = a1;
      }
      if ( (_BYTE)a1 )
      {
        if ( !v81 )
        {
          v82[0] = 0;
          StorPortExtendedFunction(109LL, a2, v82, v16);
          if ( v82[0] != 2 )
            goto LABEL_102;
        }
        v91 = 0;
        v90 = 0LL;
        if ( (unsigned int)StorPortExtendedFunction(106LL, a2, &v90, v16) )
          goto LABEL_102;
        v52 = 1;
        if ( DWORD2(v90) )
        {
          a1 = 100 * HIDWORD(v90);
          v52 = 100 * HIDWORD(v90) >= (unsigned int)(5 * DWORD2(v90));
        }
        if ( (_DWORD)v90 && (a1 = 100 * DWORD1(v90), 100 * DWORD1(v90) < (unsigned int)(5 * v90)) || !v52 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 4280));
          LOBYTE(a1) = 0;
          v83 = a1;
        }
        else
        {
LABEL_102:
          LOBYTE(a1) = v83;
        }
        v6 = v79;
      }
      if ( (*((_WORD *)v5 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 356) = result;
  v53 = *(_OWORD *)v5;
  *(_WORD *)(a3 + 352) = v6;
  *(_OWORD *)(a3 + 376) = v53;
  if ( v6 )
  {
    v54 = result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v54;
    _InterlockedOr(v56, 0);
  }
LABEL_113:
  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 184);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(a3 + 176);
      _InterlockedOr(v56, 0);
      *(_BYTE *)(a2 + 25) = 0;
    }
  }
  return result;
}
