/*
 * XREFs of CmQueryMultipleValueKey @ 0x1406E2464
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     CmpLockTwoKcbsShared @ 0x1405F38C0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmpGetValueData @ 0x1405F8410 (CmpGetValueData.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInList @ 0x1406E23E8 (CmpFindNameInList.c)
 *     CmpFindValueByName @ 0x1406E242C (CmpFindValueByName.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C598 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v8; // r12d
  ULONG_PTR v11; // r14
  ULONG_PTR v12; // rsi
  __int64 v13; // r12
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  unsigned __int16 i; // dx
  unsigned int ValueByName; // r15d
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // r15
  unsigned int MultipleValueForLayeredKey; // ebx
  int v38; // ebx
  int v39; // eax
  int v40; // r12d
  int v41; // eax
  char v42; // [rsp+40h] [rbp-E8h]
  unsigned int v43; // [rsp+44h] [rbp-E4h]
  int v44; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-DCh]
  unsigned int v46; // [rsp+50h] [rbp-D8h]
  __int64 v47; // [rsp+58h] [rbp-D0h]
  int v48; // [rsp+60h] [rbp-C8h]
  __int64 v49; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int Size; // [rsp+70h] [rbp-B8h] BYREF
  int Size_4; // [rsp+74h] [rbp-B4h]
  __int64 v52; // [rsp+78h] [rbp-B0h]
  void *Src; // [rsp+80h] [rbp-A8h] BYREF
  _DWORD v54[2]; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+90h] [rbp-98h]
  _DWORD v56[2]; // [rsp+98h] [rbp-90h] BYREF
  _DWORD v57[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-80h]
  _DWORD v59[2]; // [rsp+B0h] [rbp-78h] BYREF
  ULONG_PTR v60; // [rsp+B8h] [rbp-70h]
  __int64 v61; // [rsp+C0h] [rbp-68h]
  __int64 v62; // [rsp+C8h] [rbp-60h]
  __int64 v63; // [rsp+D0h] [rbp-58h]
  __int64 v64; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v65; // [rsp+E0h] [rbp-48h]
  char v66; // [rsp+130h] [rbp+8h] BYREF
  __int64 v67; // [rsp+140h] [rbp+18h]
  unsigned int v68; // [rsp+148h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v8 = a3;
  v58 = 0LL;
  v47 = 0LL;
  v54[0] = -1;
  v54[1] = 0;
  v45 = 0;
  v43 = 0;
  v42 = 0;
  v56[0] = -1;
  v56[1] = 0;
  v55 = 0LL;
  v59[0] = -1;
  v59[1] = 0;
  v11 = 0LL;
  v60 = 0LL;
  v49 = 0LL;
  LOBYTE(v48) = 0;
  LOBYTE(v46) = 0;
  Src = 0LL;
  v66 = 0;
  v57[0] = -1;
  v57[1] = 0;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v65 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v8, a4, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 48, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 56), 1u);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v38 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_51:
      CmpUnlockRegistry();
      return (unsigned int)(v38 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v40 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v49);
    if ( v40 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v40;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v60 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( CmpIsKeyDeletedForKeyBody(a1, v49) )
  {
    v39 = *(_DWORD *)(a1 + 48);
LABEL_50:
    v38 = (v39 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_51;
  }
  if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v49) )
  {
    v39 = *(_DWORD *)(a2 + 48);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v52 = v13;
  v64 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 40), v56);
  v62 = v15;
  if ( !v15 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    KeAbPostRelease(v13 + 72);
    goto LABEL_60;
  }
  CmpUpdateKeyNodeAccessBits(v13, v15, *(_DWORD *)(v12 + 40));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  KeAbPostRelease(v13 + 72);
  v16 = v49;
  if ( v49 )
  {
    v41 = (unsigned __int8)v48;
    if ( *(_QWORD *)(v12 + 288) == v49 )
      v41 = 1;
    v48 = v41;
  }
  if ( !v11 )
  {
    v17 = 0LL;
    v18 = v46;
    goto LABEL_14;
  }
  v58 = *(_QWORD *)(v11 + 32);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v58 + 8))(v58, *(unsigned int *)(v11 + 40), v59);
  v55 = v17;
  if ( !v17 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(v13 + 16))(v13, v56);
LABEL_60:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
  v18 = v46;
  if ( v16 )
  {
    v18 = (unsigned __int8)v46;
    if ( *(_QWORD *)(v11 + 288) == v16 )
      v18 = 1LL;
    v46 = v18;
  }
LABEL_14:
  v19 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    Size_4 = v20;
    v21 = 0LL;
    if ( (unsigned int)v20 >= v68 )
      goto LABEL_35;
    v63 = 3 * v20;
    v22 = *(_QWORD *)(v67 + 24 * v20);
    for ( i = *(_WORD *)v22; i && !*(_WORD *)(*(_QWORD *)(v22 + 8) + 2 * ((unsigned __int64)i >> 1) - 2); *(_WORD *)v22 = i )
      i -= 2;
    ValueByName = -1;
    v44 = -1;
    if ( v11 )
    {
      v47 = v58;
      if ( (_BYTE)v18 )
      {
        CmpFindNameInList(v58, (unsigned int *)(v11 + 280), v22, 0, 0LL, (__int64)&v44);
        ValueByName = v44;
      }
      else
      {
        ValueByName = CmpFindValueByName(v58, v17, v22);
        v44 = ValueByName;
      }
    }
    if ( ValueByName == -1 )
    {
      v47 = v13;
      if ( (_BYTE)v48 )
      {
        CmpFindNameInList(v13, (unsigned int *)(v12 + 280), v22, 0, 0LL, (__int64)&v44);
        ValueByName = v44;
      }
      else
      {
        ValueByName = CmpFindValueByName(v13, v62, v22);
      }
      if ( ValueByName == -1 )
      {
        v19 = -1073741772;
        v21 = 0LL;
LABEL_35:
        v34 = v45;
        v35 = v52;
        if ( v19 >= 0 )
        {
          if ( v42 )
            v19 = -2147483643;
          *a6 = v43;
          if ( a7 )
            *a7 = v34;
        }
LABEL_40:
        v25 = v47;
        goto LABEL_41;
      }
    }
    v25 = v47;
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(v47 + 8))(v47, ValueByName, v54, v17);
    v21 = v26;
    v61 = v26;
    if ( !v26 )
      break;
    v27 = *(_DWORD *)(v26 + 4);
    if ( v27 >= 0x80000000 )
      v27 += 0x80000000;
    Size = v27;
    v28 = (v43 + 3) & 0xFFFFFFFC;
    v43 = v28;
    LODWORD(v49) = v28;
    v29 = (v45 + 3) & 0xFFFFFFFC;
    v45 = v29;
    v44 = v29;
    if ( v27 + v28 > *a6 || v27 + v28 < v28 || v42 )
    {
      v42 = 1;
      v31 = v47;
    }
    else
    {
      v30 = ValueByName;
      v31 = v47;
      if ( !CmpGetValueData(v47, v30, v26, &Size, (__int64)&Src, (__int64)&v66, (__int64)v57) )
      {
        v19 = -1073741670;
        v35 = v52;
        goto LABEL_40;
      }
      v27 = Size;
      memmove((void *)(a5 + v43), Src, Size);
      v32 = v63;
      v33 = v67;
      *(_DWORD *)(v67 + 8 * v63 + 16) = *(_DWORD *)(v21 + 12);
      *(_DWORD *)(v33 + 8 * v32 + 8) = v27;
      *(_DWORD *)(v33 + 8 * v32 + 12) = v43;
      if ( v66 )
      {
        ExFreePoolWithTag(Src, 0);
        v66 = 0;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(v31 + 16))(v31, v57);
      }
      Src = 0LL;
      v43 += v27;
      v29 = v45;
    }
    v45 = v27 + v29;
    (*(void (__fastcall **)(__int64, _DWORD *))(v31 + 16))(v31, v54);
    v20 = (unsigned int)(Size_4 + 1);
    v13 = v52;
    v17 = v55;
    v18 = v46;
  }
  v19 = -1073741670;
  v35 = v52;
LABEL_41:
  if ( v21 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v25 + 16))(v25, v54, v18, v17);
  if ( v55 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v58 + 16))(v58, v59, v18, v17);
  (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v35 + 16))(v35, v56, v18, v17);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry();
  return (unsigned int)v19;
}
