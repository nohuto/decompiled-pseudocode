__int64 __fastcall CmpParseKey(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        __m128i *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  struct _ACCESS_STATE *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __m128i v15; // xmm0
  POBJECT_TYPE *v16; // r10
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  _WORD *v19; // rcx
  __int16 v20; // ax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // eax
  int v26; // ebx
  struct _ACCESS_STATE *v27; // rsi
  int v28; // eax
  __int64 v29; // r8
  struct _ACCESS_STATE *v30; // rdx
  __int64 v31; // rdi
  ACCESS_MASK PreviouslyGrantedAccess; // ecx
  unsigned int v33; // ecx
  struct _KTHREAD *v34; // rcx
  bool v35; // zf
  struct _PRIVILEGE_SET *v36; // rdi
  __int64 i; // rbx
  int v39; // ebx
  struct _PRIVILEGE_SET *Pool; // rax
  struct _PRIVILEGE_SET *v41; // rsi
  struct _ACCESS_STATE *v42; // rsi
  int v43; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+28h] [rbp-D8h]
  __m128i v46; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v48; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A8h] [rbp-58h]
  __int128 v54; // [rsp+ACh] [rbp-54h]
  __int64 v55; // [rsp+BCh] [rbp-44h]
  int v56; // [rsp+C4h] [rbp-3Ch]
  PPRIVILEGE_SET Privileges; // [rsp+C8h] [rbp-38h]
  __int128 v58; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v59[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v60; // [rsp+E4h] [rbp-1Ch]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int128 v62; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v63; // [rsp+100h] [rbp+0h]
  __int128 v64; // [rsp+110h] [rbp+10h]
  __int128 v65; // [rsp+120h] [rbp+20h]
  __int128 v66; // [rsp+130h] [rbp+30h]
  __int128 v67; // [rsp+140h] [rbp+40h]
  __int128 v68; // [rsp+150h] [rbp+50h]
  __int128 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  __m128i v71; // [rsp+180h] [rbp+80h] BYREF
  __int128 v72; // [rsp+190h] [rbp+90h] BYREF
  char v73; // [rsp+1F0h] [rbp+F0h]
  int v74; // [rsp+1F8h] [rbp+F8h] BYREF
  struct _ACCESS_STATE *v75; // [rsp+200h] [rbp+100h]
  KPROCESSOR_MODE v76; // [rsp+208h] [rbp+108h]

  v76 = a4;
  v75 = a3;
  v12 = a3;
  v72 = 0LL;
  v46 = 0LL;
  v71 = 0LL;
  CmpInitializeThreadInfo((__int64)&v72);
  v13 = (__int64)a11;
  v14 = a8;
  v73 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v70 = 0LL;
  v50 = 0LL;
  v47[1] = v47;
  v46 = v15;
  v47[0] = v47;
  v48 = 0LL;
  Privileges = 0LL;
  v62 = 0LL;
  LODWORD(a7) = 0;
  v63 = 0LL;
  v74 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v49 = 0LL;
  if ( v16 != CmKeyObjectType )
  {
    v26 = -1073741788;
    goto LABEL_46;
  }
  v17 = a10;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
    }
    v13 = (__int64)a11;
    v12 = v75;
  }
  v18 = v46.m128i_i16[0];
  if ( v46.m128i_i16[0] )
  {
    v19 = (_WORD *)v46.m128i_i64[1];
    while ( *(_WORD *)(v46.m128i_i64[1] + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v35 = v18 == 2;
      v18 -= 2;
      v46.m128i_i16[0] = v18;
      if ( v35 )
        goto LABEL_9;
    }
    if ( v18 )
    {
      v20 = v46.m128i_i16[1];
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        v46.m128i_i64[1] = (__int64)v19;
        v46.m128i_i16[0] = v18;
        v46.m128i_i16[1] = v20;
      }
      while ( v18 );
    }
  }
LABEL_9:
  if ( !v14 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 296LL, 875973955LL);
    Privileges = Pool;
    v41 = Pool;
    if ( !Pool )
    {
      v26 = -1073741670;
      goto LABEL_46;
    }
    memset(Pool, 0, 0x128uLL);
    v41[4].Privilege[0].Attributes = -1;
    *(_QWORD *)&v41[7].Privilege[0].Luid.HighPart = (char *)v41 + 144;
    *(_QWORD *)&v41[7].Control = (char *)v41 + 144;
    memset(&v41[10].Privilege[0].Attributes, 0, 0x50uLL);
    v14 = (__int64)v41;
  }
  v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v14 + 96) = v21;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)CmpRegistryRootObject + 1)
    && v46.m128i_i16[0]
    && ((*(_WORD *)v46.m128i_i64[1] - 65) & 0xFFDF) == 0
    && (v46.m128i_i16[0] <= 2u || *(_WORD *)(v46.m128i_i64[1] + 2) == 92)
    && (*(_DWORD *)v14 & 0x40) == 0 )
  {
    v26 = -1073741790;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)v14 & 0x800) == 0 || (unsigned __int8)CmpDoesParseEnterRegistryA(a1, &v46) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v14 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    v23 = a6;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *((_QWORD *)&v68 + 1) = 1LL;
      DWORD2(v69) = *(_DWORD *)(v14 + 28);
      HIDWORD(v69) = a5;
      *(_QWORD *)&v69 = &v46;
      LOBYTE(v70) = v76;
      DWORD2(v63) = *(_DWORD *)(v14 + 24);
      *(_QWORD *)&v63 = CmKeyObjectType;
      DWORD2(v65) = v12->RemainingDesiredAccess;
      *(_QWORD *)&v62 = v23;
      *((_QWORD *)&v62 + 1) = a1;
      *((_QWORD *)&v66 + 1) = v13;
      v24 = *(_QWORD *)(v14 + 72);
      if ( (v24 & 1) != 0 )
        v24 = 0LL;
      *(_QWORD *)&v68 = v24;
      *(_QWORD *)&v49 = &v62;
      DWORD2(v49) = *(_DWORD *)(v14 + 96);
      v50 = v14 + 144;
      if ( (*(_DWORD *)v14 & 1) != 0 )
      {
        v59[0] = *(_WORD *)(v14 + 4);
        v59[1] = v59[0];
        v61 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)&v66 = v14 + 32;
        *(_QWORD *)&v64 = v59;
        *((_QWORD *)&v64 + 1) = v12->SecurityDescriptor;
        *(_QWORD *)&v65 = a9;
        v60 = 0;
        v25 = CmpCallCallBacksEx(0x1Au, &v62, &v49, 1, 0x1Bu, a1, (__int64)v47);
      }
      else
      {
        v25 = CmpCallCallBacksEx(0x1Cu, &v62, &v49, 1, 0x1Du, a1, (__int64)v47);
      }
      v26 = v25;
      if ( v25 < 0 )
      {
        if ( v25 != -1073740541 )
          goto LABEL_43;
        v26 = HIDWORD(v49);
        if ( HIDWORD(v49) != 260 )
        {
          if ( HIDWORD(v49) != 872 )
          {
            v42 = v75;
            v43 = HIDWORD(v65);
            v75->PreviouslyGrantedAccess |= HIDWORD(v65);
            v42->RemainingDesiredAccess &= ~(v43 | 0x2000000);
            v26 = 0;
            goto LABEL_43;
          }
          goto LABEL_73;
        }
        goto LABEL_40;
      }
      a1 = *((_QWORD *)&v62 + 1);
      *(_DWORD *)(v14 + 96) = DWORD2(v49);
      v73 = 1;
    }
    v27 = v75;
    while ( 1 )
    {
      while ( 1 )
      {
        v71 = v46;
        v28 = CmpDoParseKey(a1, v27, v76, a5, v23, &v71, v14, a9, &v48);
        v26 = v28;
        if ( v28 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140C02700 + 184 * *(unsigned int *)(v14 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v14 &= ~0x100u;
      }
      if ( v28 != -1073741267 )
        break;
      v39 = (int)a7;
      if ( (unsigned int)a7 >= 0x40 )
      {
        v26 = -1073741772;
        v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(v14 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v14 + 120), *(_QWORD *)(v14 + 128), v29, &v74);
        *(_DWORD *)(v14 + 100) &= ~4u;
        *(_DWORD *)(v14 + 120) = 0;
        *(_QWORD *)(v14 + 128) = 0LL;
      }
      LODWORD(a7) = v39 + 1;
    }
    v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
    if ( v28 >= 0 )
    {
      *(_QWORD *)v13 = v48;
      v48 = 0LL;
    }
LABEL_27:
    if ( v73 )
    {
      v30 = v75;
      v31 = *(_QWORD *)v13;
      PreviouslyGrantedAccess = v75->PreviouslyGrantedAccess;
      HIDWORD(v65) = PreviouslyGrantedAccess;
      if ( (*(_DWORD *)v14 & 1) != 0 )
      {
        if ( !CmpCallBackCount )
        {
LABEL_35:
          if ( v26 >= 0 && PreviouslyGrantedAccess != v30->PreviouslyGrantedAccess )
          {
            v30->PreviouslyGrantedAccess = PreviouslyGrantedAccess;
            v30->RemainingDesiredAccess = v30->OriginalDesiredAccess & ~(PreviouslyGrantedAccess | 0x2000000);
          }
          if ( *(_QWORD *)v13 )
            *(_DWORD *)(*(_QWORD *)v13 + 96LL) = DWORD2(v49);
          goto LABEL_40;
        }
        if ( CmpIsRegistryLockAcquired() || (_QWORD *)v47[0] == v47 )
        {
LABEL_34:
          PreviouslyGrantedAccess = HIDWORD(v65);
          v30 = v75;
          goto LABEL_35;
        }
        v33 = 27;
        v52 = &v62;
        *(_QWORD *)&v58 = &v51;
        *((_QWORD *)&v58 + 1) = &v49;
        v45 = v31;
        Timeout = 27;
      }
      else
      {
        if ( !CmpCallBackCount )
          goto LABEL_35;
        if ( CmpIsRegistryLockAcquired() || (_QWORD *)v47[0] == v47 )
          goto LABEL_34;
        v33 = 29;
        v52 = &v62;
        *(_QWORD *)&v58 = &v51;
        *((_QWORD *)&v58 + 1) = &v49;
        v45 = v31;
        Timeout = 29;
      }
      v55 = 0LL;
      v56 = 0;
      *(_QWORD *)&v51 = v31;
      v54 = 0LL;
      *((_QWORD *)&v51 + 1) = (unsigned int)v26;
      v53 = v26;
      CmpCallCallBacksEx(v33, &v51, &v58, 0, Timeout, v45, (__int64)v47);
      v26 = v53;
      goto LABEL_34;
    }
LABEL_40:
    if ( v26 != 872 )
    {
      if ( v26 == 260 )
      {
        *(_DWORD *)(v14 + 96) = v21;
        *(_QWORD *)(v17 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_43;
    }
LABEL_73:
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
LABEL_43:
    v34 = KeGetCurrentThread();
    v35 = v34->KernelApcDisable++ == -1;
    if ( v35
      && ($C71981A45BEB2B45F82C232A7085991E *)v34->ApcState.ApcListHead[0].Flink != &v34->152
      && !v34->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_44;
  }
  v26 = -1073741790;
LABEL_44:
  v36 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext(Privileges, 0LL);
    CmSiFreeMemory(v36);
  }
LABEL_46:
  CmCleanupThreadInfo((__int64 *)&v72);
  return (unsigned int)v26;
}
