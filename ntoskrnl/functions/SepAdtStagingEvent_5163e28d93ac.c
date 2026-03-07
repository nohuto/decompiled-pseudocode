bool __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        __int64 *a3,
        const UNICODE_STRING *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // r13
  __int64 v15; // rbx
  void *v16; // rsi
  void *v17; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r9d
  int v24; // r15d
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  size_t v35; // r15
  unsigned int v36; // r12d
  char *Pool2; // rax
  char *v38; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v43; // [rsp+28h] [rbp-E0h] BYREF
  size_t Size; // [rsp+2Ch] [rbp-DCh] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  void *v46; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  const UNICODE_STRING *v48; // [rsp+50h] [rbp-B8h]
  __int64 *v49; // [rsp+58h] [rbp-B0h]
  _QWORD v50[132]; // [rsp+68h] [rbp-A0h] BYREF

  v49 = a3;
  v48 = a4;
  memset(v50, 0, 0x418uLL);
  v14 = *(_QWORD *)(a12 + 72);
  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Size = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v46 = 0LL;
  LOWORD(v43) = 0;
  if ( !v14 || !*(_BYTE *)(v14 + 216) || a1 != 116 && a1 != 128 && RtlCompareUnicodeString(a4, &SepFileTypeName, 0) )
    return 1;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
    {
      v15 = *(_QWORD *)(a6 + 24);
      v20 = *(__int64 **)(a6 + 152);
    }
    else
    {
      v20 = *(__int64 **)(a7 + 152);
    }
    v21 = *v20;
    v22 = *(_QWORD *)(a7 + 24);
    v50[0] = 0x12D200000003LL;
    LOWORD(v50[2]) = 129;
    v23 = 16;
    v24 = 8;
    if ( (a8 & 0x2000000) != 0 || (WORD1(v50[2]) = 8, !a10) )
      WORD1(v50[2]) = 16;
    LODWORD(v50[3]) = 4;
    v25 = *(unsigned __int8 *)(v21 + 1);
    v50[6] = v21;
    v50[7] = 0x2000000001LL;
    v50[10] = &SeSubsystemName;
    v50[11] = 0x800000005LL;
    HIDWORD(v50[3]) = 4 * v25 + 8;
    v50[12] = v15;
    if ( !a6 )
      v50[12] = v22;
    v50[15] = 0x2000000001LL;
    v50[18] = &SeSubsystemName;
    LODWORD(v50[1]) = 4;
    if ( v48 )
    {
      v26 = v48->Length + 16;
      v50[22] = v48;
      LODWORD(v50[19]) = 1;
      HIDWORD(v50[19]) = v26;
      if ( a5 )
      {
        if ( a1 == 116 || (LODWORD(v50[23]) = 1, a1 == 128) )
          LODWORD(v50[23]) = 2;
        v27 = *a5;
        v50[26] = a5;
        HIDWORD(v50[23]) = v27 + 16;
      }
      v50[27] = 0x80000000BLL;
      if ( v49 )
      {
        IsKernelHandle = ObpIsKernelHandle(*v49, 0);
        v31 = v30 ^ 0xFFFFFFFF80000000uLL;
        if ( !IsKernelHandle )
          v31 = v29;
        v50[28] = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v50[28] = 0LL;
      }
      v50[32] = a11;
      v50[31] = 0x80000000BLL;
      LODWORD(v50[35]) = 2;
      v32 = v23 + *(unsigned __int16 *)P;
      v50[38] = P;
      HIDWORD(v50[35]) = v32;
      LODWORD(v50[1]) = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v14 + 56),
                                        &Src,
                                        (ULONG *)&Size + 1,
                                        &v43);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v16 = Src;
      }
      else
      {
        v33 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v14 + 64), &v46, (ULONG *)&Size, (_BYTE *)&v43 + 1);
        v17 = v46;
        AllocatedFullProcessImageName = v33;
        v16 = Src;
        if ( v33 >= 0 )
        {
          if ( !Src && !v46 )
            v24 = 0;
          v34 = Size - v24;
          v35 = HIDWORD(Size);
          v36 = v34 + HIDWORD(Size) + 152;
          Pool2 = (char *)ExAllocatePool2(256LL, v36, 1883333971LL);
          v38 = Pool2;
          if ( Pool2 )
          {
            memset(Pool2, 0, v36);
            *((_DWORD *)v38 + 34) = a10;
            if ( !a10 )
              a9 = a8;
            *((_DWORD *)v38 + 33) = 4;
            *(_DWORD *)v38 = a9 & 0xFDFFFFFF;
            *(_OWORD *)(v38 + 4) = *(_OWORD *)(v14 + 88);
            *(_OWORD *)(v38 + 20) = *(_OWORD *)(v14 + 104);
            *(_OWORD *)(v38 + 36) = *(_OWORD *)(v14 + 120);
            *(_OWORD *)(v38 + 52) = *(_OWORD *)(v14 + 136);
            *(_OWORD *)(v38 + 68) = *(_OWORD *)(v14 + 152);
            *(_OWORD *)(v38 + 84) = *(_OWORD *)(v14 + 168);
            *(_OWORD *)(v38 + 100) = *(_OWORD *)(v14 + 184);
            *(_OWORD *)(v38 + 116) = *(_OWORD *)(v14 + 200);
            if ( v16 )
              memmove(v38 + 144, v16, v35);
            if ( v17 )
              memmove(&v38[v35 + 144], v17, (unsigned int)Size);
            LODWORD(v50[4 * LODWORD(v50[1]) + 3]) = 29;
            HIDWORD(v50[4 * LODWORD(v50[1]) + 3]) = v36;
            v50[4 * LODWORD(v50[1]) + 6] = v38;
            ++LODWORD(v50[1]);
            LODWORD(v50[4 * LODWORD(v50[1]) + 3]) = 30;
            HIDWORD(v50[4 * LODWORD(v50[1]) + 3]) = v36;
            v40 = 0LL;
            v50[4 * LODWORD(v50[1]) + 6] = v38;
            do
            {
              v41 = v40 + 4LL * LODWORD(v50[1]);
              ++v40;
              v50[v41 + 4] = 0LL;
            }
            while ( v40 < 2 );
            ++LODWORD(v50[1]);
            SepAdtLogAuditRecord(v50);
            ExFreePoolWithTag(v38, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v43 && v16 )
    ExFreePoolWithTag(v16, 0);
  if ( BYTE1(v43) && v17 )
    ExFreePoolWithTag(v17, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
