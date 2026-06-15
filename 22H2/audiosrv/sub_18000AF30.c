/*
 * XREFs of sub_18000AF30 @ 0x18000AF30
 * Callers:
 *     sub_180009E60 @ 0x180009E60 (sub_180009E60.c)
 *     sub_18000AB20 @ 0x18000AB20 (sub_18000AB20.c)
 * Callees:
 *     sub_180008A64 @ 0x180008A64 (sub_180008A64.c)
 *     sub_180044BCC @ 0x180044BCC (sub_180044BCC.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000AF30(__int64 a1, WINBOOL a2, _WORD *a3)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r13d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // r14
  size_t v11; // rbx
  _QWORD *v12; // r9
  __int64 *v13; // r12
  __int64 *v14; // rbx
  __int64 *v15; // r10
  __int64 *v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int16 *v18; // rax
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int16 v21; // dx
  unsigned __int16 *v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int16 v25; // dx
  unsigned __int64 v26; // rdx
  __int64 result; // rax
  bool v28; // zf
  unsigned int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 *v32; // rcx
  int v33; // ebx
  __int64 v34; // rcx
  size_t v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-1158h] BYREF
  int v39; // [rsp+34h] [rbp-1154h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-1150h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1148h] BYREF
  _QWORD *v42; // [rsp+48h] [rbp-1140h] BYREF
  __int64 v43; // [rsp+50h] [rbp-1138h] BYREF
  _QWORD *v44; // [rsp+58h] [rbp-1130h] BYREF
  _DWORD v45[2]; // [rsp+60h] [rbp-1128h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1120h]
  __int64 v47; // [rsp+70h] [rbp-1118h]
  __int64 v48; // [rsp+78h] [rbp-1110h]
  __int64 v49; // [rsp+80h] [rbp-1108h]
  __int64 v50; // [rsp+88h] [rbp-1100h]
  __int64 v51; // [rsp+90h] [rbp-10F8h]
  __int64 v52; // [rsp+98h] [rbp-10F0h]
  __int64 v53; // [rsp+A0h] [rbp-10E8h]
  __int64 v54; // [rsp+A8h] [rbp-10E0h]
  __int64 v55; // [rsp+B0h] [rbp-10D8h]
  __int64 v56; // [rsp+B8h] [rbp-10D0h]
  _QWORD *v57; // [rsp+C0h] [rbp-10C8h]
  unsigned __int64 v58; // [rsp+C8h] [rbp-10C0h]
  unsigned __int64 v59; // [rsp+D0h] [rbp-10B8h]
  __int64 *v60; // [rsp+D8h] [rbp-10B0h]
  __int64 *v61; // [rsp+E0h] [rbp-10A8h]
  unsigned __int64 v62; // [rsp+E8h] [rbp-10A0h]
  unsigned __int64 v63; // [rsp+F0h] [rbp-1098h]
  char v64[8]; // [rsp+F8h] [rbp-1090h] BYREF
  _QWORD v65[2]; // [rsp+100h] [rbp-1088h] BYREF
  unsigned __int64 v66; // [rsp+110h] [rbp-1078h]
  unsigned __int64 v67; // [rsp+118h] [rbp-1070h]
  unsigned __int16 *v68; // [rsp+120h] [rbp-1068h]
  int v69; // [rsp+128h] [rbp-1060h]
  int v70; // [rsp+12Ch] [rbp-105Ch]
  void *v71; // [rsp+130h] [rbp-1058h]
  int v72; // [rsp+138h] [rbp-1050h]
  int v73; // [rsp+13Ch] [rbp-104Ch]
  int *v74; // [rsp+140h] [rbp-1048h]
  __int64 v75; // [rsp+148h] [rbp-1040h]
  _DWORD v76[1024]; // [rsp+150h] [rbp-1038h] BYREF

  fPending = a2;
  v66 = 0LL;
  v67 = 7LL;
  LOWORD(v65[0]) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a3[v5] );
  if ( v5 <= 7 )
  {
    v66 = v5;
    v35 = 2 * v5;
    memmove(v65, a3, v35);
    *(_WORD *)((char *)v65 + v35) = 0;
    v6 = 2;
    v10 = (_QWORD *)v65[0];
    goto LABEL_13;
  }
  v47 = 0x7FFFFFFFFFFFFFFFLL;
  v6 = 2;
  v48 = 8LL;
  v7 = 0x7FFFFFFFFFFFFFFELL;
  v49 = 0x7FFFFFFFFFFFFFFELL;
  v50 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v51 = 0x7FFFFFFFFFFFFFFFLL;
  v52 = 8LL;
  v53 = 0x7FFFFFFFFFFFFFFELL;
  v54 = 0x7FFFFFFFFFFFFFFFLL;
  v55 = v5 | 7;
  if ( (v5 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 10LL;
    v56 = 10LL;
    if ( (v5 | 7) >= 0xA )
      v7 = v5 | 7;
  }
  v8 = 2 * (v7 + 1);
  if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = -1LL;
    goto LABEL_69;
  }
  if ( v8 >= 0x1000 )
  {
LABEL_69:
    v36 = v8 + 39;
    if ( v8 + 39 < v8 )
      v36 = -1LL;
    v37 = sub_180055F40(v36);
    if ( v37 )
    {
      v10 = (_QWORD *)((v37 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v37;
      goto LABEL_12;
    }
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
LABEL_74:
    v10 = 0LL;
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_74;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 2 * (v7 + 1));
LABEL_12:
  v57 = v10;
  v66 = v5;
  v67 = v7;
  v11 = 2 * v5;
  memcpy(v10, a3, v11);
  *(_WORD *)((char *)v10 + v11) = 0;
  v65[0] = v10;
LABEL_13:
  v13 = (__int64 *)(a1 + 80);
  v14 = *(__int64 **)(a1 + 80);
  v15 = (__int64 *)v14[1];
  v16 = v14;
  v17 = v67;
  if ( !*((_BYTE *)v15 + 25) )
  {
    v58 = v66;
    do
    {
      v18 = (unsigned __int16 *)v65;
      if ( v67 >= 8 )
        v18 = (unsigned __int16 *)v10;
      v12 = v15 + 4;
      if ( (unsigned __int64)v15[7] >= 8 )
        v12 = (_QWORD *)v15[4];
      v19 = v15[6];
      v59 = v19;
      if ( v66 < v19 )
        v20 = v66;
      else
        v20 = v19;
      if ( v20 )
      {
        v12 = (_QWORD *)((char *)v12 - (__int64)v18);
        while ( 1 )
        {
          v21 = *(_WORD *)((char *)v12 + (_QWORD)v18);
          if ( v21 != *v18 )
            break;
          ++v18;
          if ( !--v20 )
            goto LABEL_25;
        }
        if ( v21 < *v18 )
        {
LABEL_77:
          v15 = (__int64 *)v15[2];
          continue;
        }
      }
      else
      {
LABEL_25:
        if ( v19 < v66 )
          goto LABEL_77;
      }
      v14 = v15;
      v15 = (__int64 *)*v15;
    }
    while ( !*((_BYTE *)v15 + 25) );
  }
  v60 = v14;
  v61 = v16;
  if ( v14 == v16 )
    goto LABEL_64;
  v22 = (unsigned __int16 *)(v14 + 4);
  if ( (unsigned __int64)v14[7] >= 8 )
    v22 = (unsigned __int16 *)v14[4];
  v12 = v65;
  if ( v67 >= 8 )
    v12 = v10;
  v23 = v14[6];
  v62 = v23;
  v63 = v66;
  if ( v23 < v66 )
    v24 = v23;
  else
    v24 = v66;
  if ( !v24 )
  {
LABEL_39:
    if ( v66 >= v23 )
      goto LABEL_40;
    goto LABEL_64;
  }
  v12 = (_QWORD *)((char *)v12 - (__int64)v22);
  while ( 1 )
  {
    v25 = *(_WORD *)((char *)v12 + (_QWORD)v22);
    if ( v25 != *v22 )
      break;
    ++v22;
    if ( !--v24 )
      goto LABEL_39;
  }
  if ( v25 < *v22 )
  {
LABEL_64:
    v44 = v65;
    v14 = *(__int64 **)sub_180008A64(v13, (__int64)v64, (int)v14, (__int64)v12, (__int64 *)&v44);
    v17 = v67;
    v10 = (_QWORD *)v65[0];
  }
LABEL_40:
  if ( v17 >= 8 )
  {
    v26 = 2 * v17 + 2;
    v40 = v26;
    v42 = v10;
    if ( v26 >= 0x1000 )
    {
      sub_1800BB290(&v42, &v40);
      v26 = v40;
      v10 = v42;
    }
    sub_18006A148(v10, v26);
  }
  v66 = 0LL;
  v67 = 7LL;
  LOWORD(v65[0]) = 0;
  result = (unsigned int)fPending;
  if ( fPending )
  {
    if ( fPending != 1 )
      return result;
    result = *((unsigned int *)v14 + 16);
    if ( !(_DWORD)result )
      return result;
    LODWORD(result) = result - 1;
    v28 = (_DWORD)result == 0;
    result = (unsigned int)result;
    *((_DWORD *)v14 + 16) = result;
  }
  else
  {
    v28 = ++*((_DWORD *)v14 + 16) == 1;
  }
  if ( v28 )
  {
    memset(&v76[1], 0, 0xFFCuLL);
    v29 = 0;
    v76[0] = 1;
    v30 = *v13;
    v31 = *(_QWORD *)*v13;
    v43 = v31;
    while ( v31 != v30 )
    {
      v32 = (__int64 *)(v31 + 32);
      if ( *(_DWORD *)(v31 + 64) )
      {
        if ( v29 >= 0x24 )
          break;
        if ( *(_QWORD *)(v31 + 56) >= 8uLL )
          v32 = (__int64 *)*v32;
        *(_OWORD *)&v76[v6] = *(_OWORD *)v32;
        *(_OWORD *)&v76[v6 + 4] = *((_OWORD *)v32 + 1);
        *(_OWORD *)&v76[v6 + 8] = *((_OWORD *)v32 + 2);
        *(_OWORD *)&v76[v6 + 12] = *((_OWORD *)v32 + 3);
        *(_OWORD *)&v76[v6 + 16] = *((_OWORD *)v32 + 4);
        *(_OWORD *)&v76[v6 + 20] = *((_OWORD *)v32 + 5);
        *(_OWORD *)&v76[v6 + 24] = *((_OWORD *)v32 + 6);
        v6 += 28;
      }
      sub_180044BCC(&v43);
      v31 = v43;
    }
    v76[1] = v29;
    v33 = RtlPublishWnfStateData(0x2821B2CA3BC3075LL, 0LL, v76, 4096LL, 0LL);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18019E828;
      qword_18019E828 = (__int64)off_1801462A0;
      qword_18019E840 = (__int64)&unk_18019C388;
      atexit(sub_1800B6240);
      sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
      InitOnceComplete(&InitOnce, 0, &qword_18019E828);
    }
    result = (__int64)Context;
    v34 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v34 > 4u )
    {
      v39 = v33;
      v74 = &v39;
      v75 = 4LL;
      v45[0] = 184549376;
      v45[1] = 4;
      v46 = 0LL;
      v68 = *(unsigned __int16 **)(v34 + 8);
      v69 = *v68;
      v70 = 2;
      v71 = &unk_180168CCF;
      v72 = 57;
      v73 = 1;
      LODWORD(v40) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
      return EtwEventWriteTransfer(*(_QWORD *)(v34 + 32), v45, 0LL);
    }
  }
  return result;
}
