NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        __m128i *a10,
        unsigned __int64 a11,
        char a12)
{
  __m128i *v14; // r9
  KPROCESSOR_MODE PreviousMode; // al
  unsigned int v16; // edx
  __int64 v17; // rcx
  char v18; // r10
  _BYTE *v19; // rax
  _DWORD *v20; // rax
  __m128i *v21; // rax
  NTSTATUS result; // eax
  __m128i *v23; // rcx
  void ***v24; // r15
  void ***v25; // r13
  int inserted; // esi
  ULONG_PTR v27; // r14
  int v28; // edx
  void ***v29; // r8
  int v30; // ecx
  bool v31; // si
  _KPROCESS *Process; // rcx
  __int64 v33; // r13
  _DWORD *v34; // rbx
  bool v35; // cf
  ULONG_PTR v36; // rsi
  volatile signed __int64 *v37; // rsi
  _QWORD *v38; // rbx
  ULONG_PTR v39; // rax
  int v40; // ecx
  unsigned int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rcx
  HANDLE v44; // rcx
  __m128i *v45; // rax
  _OWORD *v46; // rax
  int v47; // ebx
  HANDLE v48; // rax
  __int64 v49; // r13
  PVOID *v50; // rsi
  signed __int64 *v51; // rbx
  void **v52; // rax
  int v53; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-248h]
  void ***v55; // [rsp+48h] [rbp-240h]
  ULONG_PTR v56; // [rsp+50h] [rbp-238h] BYREF
  PVOID v57; // [rsp+58h] [rbp-230h] BYREF
  int v58; // [rsp+60h] [rbp-228h]
  int v59; // [rsp+64h] [rbp-224h]
  int v60; // [rsp+68h] [rbp-220h]
  HANDLE Handle; // [rsp+70h] [rbp-218h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-210h]
  PVOID v63; // [rsp+88h] [rbp-200h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1F8h]
  PVOID Object; // [rsp+98h] [rbp-1F0h] BYREF
  _DWORD *v66; // [rsp+A0h] [rbp-1E8h]
  __m128i *v67; // [rsp+A8h] [rbp-1E0h]
  __int128 v68; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-1C8h]
  __int64 v70; // [rsp+D0h] [rbp-1B8h]
  __int64 v71; // [rsp+D8h] [rbp-1B0h]
  __int128 *v72; // [rsp+E0h] [rbp-1A8h]
  __int64 v73; // [rsp+E8h] [rbp-1A0h]
  _OWORD *v74; // [rsp+F0h] [rbp-198h]
  __m128i v75; // [rsp+F8h] [rbp-190h]
  __m128i v76; // [rsp+108h] [rbp-180h]
  __m128i v77; // [rsp+118h] [rbp-170h]
  __int128 v78; // [rsp+128h] [rbp-160h]
  __int64 v79; // [rsp+138h] [rbp-150h]
  __int128 v80; // [rsp+140h] [rbp-148h]
  __int64 v81; // [rsp+150h] [rbp-138h]
  _OWORD v82[5]; // [rsp+160h] [rbp-128h] BYREF
  _QWORD v83[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _OWORD v84[5]; // [rsp+1F0h] [rbp-98h] BYREF

  v71 = a4;
  v58 = a2;
  v66 = (_DWORD *)a1;
  v74 = (_OWORD *)a11;
  v67 = a10;
  v62 = a5;
  v72 = a7;
  v73 = a8;
  memset(v83, 0, sizeof(v83));
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  memset(v84, 0, 0x48uLL);
  memset(v82, 0, 0x48uLL);
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v57 = 0LL;
  v59 = 0;
  v60 = 0;
  v56 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    if ( a12 || a9 )
    {
      v16 = v58;
      v17 = 0x7FFFFFFF0000LL;
      if ( v58 < 0 )
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v17 = a1;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
      else
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v17 = a1;
        *(_QWORD *)v17 = *(_QWORD *)v17;
      }
    }
    else
    {
      v16 = v58;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, &v68, v16);
    if ( a5 )
    {
      v19 = v14;
      if ( a5 < (unsigned __int64)v14 )
        v19 = (_BYTE *)a5;
      v84[0] = *(_OWORD *)v19;
      v84[1] = *((_OWORD *)v19 + 1);
      v84[2] = *((_OWORD *)v19 + 2);
      v84[3] = *((_OWORD *)v19 + 3);
      *(_QWORD *)&v84[4] = *((_QWORD *)v19 + 8);
    }
    if ( a10 )
    {
      v21 = v14;
      if ( a10 < v14 )
        v21 = a10;
      v75 = *v21;
      v76 = v21[1];
      v77 = v21[2];
      if ( _mm_cvtsi128_si32(v75) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        goto LABEL_34;
      v23 = v14;
      if ( a10 < v14 )
        v23 = a10;
      v23->m128i_i8[0] = v23->m128i_i8[0];
      v23[2].m128i_i8[15] = v23[2].m128i_i8[15];
    }
    if ( !a11 )
    {
LABEL_35:
      PreviousMode = AccessMode;
      goto LABEL_36;
    }
    v20 = v14;
    if ( a11 < (unsigned __int64)v14 )
      v20 = (_DWORD *)a11;
    if ( *v20 != 24 )
      return -1073741811;
    if ( (a11 & 3) == 0 )
    {
      if ( a11 < (unsigned __int64)v14 )
        v14 = (__m128i *)a11;
      v14->m128i_i8[0] = v14->m128i_i8[0];
      v14[1].m128i_i8[7] = v14[1].m128i_i8[7];
      goto LABEL_35;
    }
LABEL_34:
    ExRaiseDatatypeMisalignment();
  }
  if ( a5 )
  {
    v84[0] = *(_OWORD *)a5;
    v84[1] = *(_OWORD *)(a5 + 16);
    v84[2] = *(_OWORD *)(a5 + 32);
    v84[3] = *(_OWORD *)(a5 + 48);
    *(_QWORD *)&v84[4] = *(_QWORD *)(a5 + 64);
  }
  v68 = *a7;
  v69 = a7[1];
  v70 = *((_QWORD *)a7 + 4);
  v18 = a12;
LABEL_36:
  if ( !DWORD2(v69) )
    return -1073741281;
  v24 = 0LL;
  v63 = 0LL;
  if ( a3 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v24 = (void ***)Object;
    v63 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v18 )
      return -1073741504;
    LODWORD(v70) = 0;
  }
  v25 = v24;
  v55 = v24;
  inserted = AlpcpLookupMessage((_DWORD)v24, DWORD2(v69), v70, (_DWORD)v14, (__int64)&v56);
  v27 = v56;
  if ( inserted < 0 )
    goto LABEL_111;
  if ( !v24 )
  {
    v24 = *(void ****)(v56 + 16);
    v63 = v24;
  }
  v28 = *(_DWORD *)(v56 + 40);
  if ( (v28 & 0x80u) != 0 )
  {
    v47 = 1;
    inserted = -1073740029;
    goto LABEL_87;
  }
  if ( (*(unsigned __int16 *)(v56 + 244) & 0xFFFF00FF) != 0xA )
  {
    inserted = -1073741281;
    goto LABEL_111;
  }
  v29 = *(void ****)(v56 + 16);
  if ( v29 != *(void ****)(v56 + 192) )
    goto LABEL_126;
  if ( v29 == v24 )
  {
    v30 = *(_DWORD *)(v56 + 40) & 7;
LABEL_47:
    if ( v30 != 3 || (v28 & 0x2000) != 0 )
      goto LABEL_126;
    v31 = 1;
    goto LABEL_50;
  }
  v30 = *(_DWORD *)(v56 + 40) & 7;
  if ( (v28 & 7) != 0 )
  {
    if ( ((_BYTE)v24[52] & 6) != 6 )
      goto LABEL_126;
    v52 = v24[2];
    if ( !v52 || *v52 != v29 )
      goto LABEL_126;
    goto LABEL_47;
  }
  v49 = *(_QWORD *)(v56 + 24);
  if ( !v49 )
    goto LABEL_126;
  v50 = *(PVOID **)(v49 + 16);
  v51 = (signed __int64 *)(v50 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v50 - 2), 0LL);
  if ( ((*(_DWORD *)(v49 + 416) >> 1) & 3) == 2 )
    v31 = *v50 == v24 || v50[1] == v24;
  else
    v31 = v50[2] == v24;
  if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v51);
  KeAbPostRelease((ULONG_PTR)v51);
  v27 = v56;
LABEL_50:
  if ( !v31 )
  {
LABEL_126:
    inserted = -1073740030;
    goto LABEL_104;
  }
  LOBYTE(v29) = a12;
  inserted = AlpcpValidateConnectionMessage(v24, &v68, v29);
  if ( inserted < 0 )
  {
LABEL_104:
    v25 = v55;
LABEL_111:
    v47 = 0;
    goto LABEL_87;
  }
  v33 = *(_QWORD *)(v27 + 24);
  BugCheckParameter2 = *(_QWORD *)(v33 + 16);
  if ( (*(_DWORD *)(v33 + 416) & 0x20) != 0 )
  {
    inserted = -1073741769;
    goto LABEL_129;
  }
  if ( ((_DWORD)v24[32] & 0x100000) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v27 = v56;
    if ( Process != (_KPROCESS *)v24[3] )
    {
      inserted = -1073741281;
      goto LABEL_104;
    }
  }
  if ( a9 )
  {
    LOBYTE(Process) = AccessMode;
    inserted = AlpcpCreatePort((int)Process, v71, &v57);
    if ( inserted >= 0 )
    {
      v34 = v57;
      inserted = AlpcpInitializePort((__int64)v57, 3, 0);
      if ( inserted >= 0 )
      {
        inserted = AlpcpValidateAndSetPortAttributes(
                     (__int64)v34,
                     (_QWORD *)((unsigned __int64)v84 & ((unsigned __int128)-(__int128)v62 >> 64)),
                     (__int64)v24,
                     0LL,
                     0,
                     0,
                     a12);
        if ( inserted >= 0 )
        {
          v35 = v62 != 0;
          v62 = -(__int64)v62;
          AlpcpSetOwnerProcessPort((__int64)v34, (_DWORD *)((unsigned __int64)v84 & -(__int64)v35));
          if ( a12 )
            v34[104] |= 0x1000u;
          v36 = BugCheckParameter2;
          AlpcpReferenceBlob(BugCheckParameter2);
          v37 = (volatile signed __int64 *)(v36 - 16);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v37, 0LL);
          v38 = v57;
          v39 = BugCheckParameter2;
          *((_QWORD *)v57 + 2) = BugCheckParameter2;
          *(_QWORD *)(v39 + 8) = v38;
          *(_QWORD *)(v33 + 424) = v24;
          *(_QWORD *)(v33 + 432) = v38;
          v38[53] = v33;
          v38[54] = v33;
          v40 = *(_DWORD *)(v33 + 416);
          if ( (v40 & 0x1000) != 0 && (v38[52] & 0x1000) != 0 )
          {
            *(_DWORD *)(v33 + 416) = v40 | 0x2000;
            *((_DWORD *)v38 + 104) |= 0x2000u;
          }
          if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v37);
          KeAbPostRelease((ULONG_PTR)v37);
          WORD2(v83[6]) = v68 + 40;
          *(_DWORD *)((char *)&v83[6] + 6) = 11;
          v41 = v58;
          v27 = v56;
          inserted = AlpcpSetupMessageDataForDeferredCopy(v56, (_DWORD)v72, v58, (unsigned __int16)v68, 0, AccessMode);
          if ( inserted >= 0 )
          {
            if ( !a12 || !*(_QWORD *)(v27 + 144) || (inserted = AlpcpMapLegacyPortRemoteView(v57), inserted >= 0) )
            {
              v59 = 1;
              if ( v67 )
              {
                v80 = 0LL;
                LODWORD(v81) = 0;
                inserted = AlpcpMapLegacyPortView(v57);
                if ( inserted >= 0 )
                {
                  inserted = AlpcpMapLegacyPortRemoteView((PVOID)v33);
                  if ( inserted >= 0 )
                    v77.m128i_i64[1] = v81;
                }
              }
              else
              {
                inserted = AlpcpCaptureAttributes(v24, v41, v73, v27, v82);
              }
              if ( inserted >= 0 )
              {
                ObfReferenceObject(v57);
                inserted = ObInsertObjectEx(v57, 0LL, 0, 0LL, (__int64)&Handle);
                if ( inserted >= 0 )
                {
                  AlpcpReleaseAttributes(v27 + 104);
                  *(_OWORD *)(v27 + 104) = v82[0];
                  *(_OWORD *)(v27 + 120) = v82[1];
                  *(_OWORD *)(v27 + 136) = v82[2];
                  *(_OWORD *)(v27 + 152) = v82[3];
                  *(_QWORD *)(v27 + 168) = *(_QWORD *)&v82[4];
                  v59 = 0;
                  v42 = *(_QWORD *)(v27 + 208);
                  if ( v42 )
                  {
                    PsReleaseProcessWakeCounter(v42);
                    *(_QWORD *)(v27 + 208) = 0LL;
                  }
                  v43 = *(_QWORD *)(v27 + 216);
                  if ( v43 )
                  {
                    PsReleaseProcessWakeCounter(v43);
                    *(_QWORD *)(v27 + 216) = 0LL;
                  }
                  if ( v58 < 0 )
                    *v66 = (_DWORD)Handle;
                  else
                    *(_QWORD *)v66 = Handle;
                  v44 = a6;
                  if ( !a6 )
                    v44 = Handle;
                  *((_QWORD *)v57 + 7) = v44;
                  v45 = v67;
                  if ( v67 )
                  {
                    *v67 = v75;
                    v45[1] = v76;
                    v45[2] = v77;
                  }
                  v46 = v74;
                  if ( v74 )
                  {
                    *v74 = v78;
                    *((_QWORD *)v46 + 2) = v79;
                  }
                  v47 = 0;
                  v83[0] = v57;
                  v83[1] = v27;
                  LODWORD(v83[6]) = 0x10000;
                  inserted = AlpcpDispatchMessage(v83);
                  v48 = Handle;
                  if ( inserted >= 0 )
                    v48 = 0LL;
                  Handle = v48;
                  v27 = 0LL;
                  goto LABEL_86;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_104;
  }
  ExAcquirePushLockExclusiveEx(v33 + 352, 0LL);
  v53 = *(_DWORD *)(v33 + 416) | 0x10;
  *(_DWORD *)(v33 + 416) = v53;
  if ( (v53 & 0x100) != 0 )
    *(_QWORD *)(v33 + 56) = a6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v33 + 352));
  KeAbPostRelease(v33 + 352);
  inserted = 0;
  v27 = v56;
LABEL_129:
  v47 = 1;
LABEL_86:
  v25 = v55;
LABEL_87:
  if ( v27 )
  {
    if ( v59 )
    {
      AlpcpReleaseAttributes(v82);
      v60 = 1;
    }
    if ( v47 )
      AlpcpCancelMessage(v24, v27, 0x10000LL);
    else
      AlpcpUnlockMessage(v27);
  }
  if ( v25 )
    ObfDereferenceObject(v25);
  if ( v57 )
  {
    if ( v60 )
      AlpcpFlushResourcesPort(v57);
    ObfDereferenceObject(v57);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
