PRTL_BITMAP __fastcall KiTpBuildExcludedKernelTracepointBitmap(PRTL_BITMAP BitMapHeader)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rbx
  unsigned int *Pool2; // rax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  struct _KSEMAPHORE *v8; // rax
  unsigned int LockNV; // ebx
  unsigned int StateSemaphore; // eax
  unsigned int v11; // ebx
  _BYTE *v12; // r14
  unsigned __int64 v13; // r15
  unsigned int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // rbp
  struct _KSEMAPHORE *v17; // rsi
  unsigned int v18; // eax
  ULONG v19; // edx
  unsigned int v20; // eax
  ULONG v21; // edx
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v1 = PsNtosImageEnd;
  v25 = 0LL;
  *BitMapHeader = 0LL;
  v3 = (((v1 - PsNtosImageBase + 15) >> 4) + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v3 >> 3, 1886549062LL);
  if ( Pool2 )
  {
    BitMapHeader->SizeOfBitMap = v3;
    v5 = (unsigned __int64 *)KiTpExcludedRoutines;
    BitMapHeader->Buffer = Pool2;
    v6 = 201LL;
    do
    {
      v7 = *v5;
      v8 = (struct _KSEMAPHORE *)RtlLookupFunctionEntry(*v5, &v25, 0LL);
      if ( v8 )
      {
        LockNV = v8->Header.LockNV;
        StateSemaphore = KeReadStateSemaphore(v8);
      }
      else
      {
        LockNV = v7 - PsNtosImageBase;
        StateSemaphore = LockNV + 1;
      }
      RtlSetBits(BitMapHeader, LockNV >> 4, (((unsigned __int64)StateSemaphore + 15) >> 4) - (LockNV >> 4));
      ++v5;
      --v6;
    }
    while ( v6 );
    v11 = 0;
    v24 = 0LL;
    v23 = 0LL;
    if ( PsNtosImageBase < *((_QWORD *)&xmmword_140E00030 + 1)
      || PsNtosImageBase >= *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
    {
      v12 = RtlpxLookupFunctionTable(PsNtosImageBase, (__int64)&v23);
    }
    else
    {
      v12 = (_BYTE *)xmmword_140E00030;
      v23 = xmmword_140E00030;
      v24 = qword_140E00040;
    }
    if ( v12 )
    {
      v13 = *((_QWORD *)&v23 + 1);
      v11 = HIDWORD(v24);
    }
    else
    {
      v13 = v25;
    }
    v14 = v11 / 0xC;
    if ( v11 / 0xC )
    {
      v15 = 0LL;
      v16 = v14;
      do
      {
        v17 = (struct _KSEMAPHORE *)RtlLookupPrimaryFunctionEntry(&v12[12 * v15], v13);
        if ( (unsigned int)RtlIsSpecialUnwind((__int64)v17, v13) )
        {
          v18 = KeReadStateSemaphore(v17);
          RtlSetBits(BitMapHeader, v19, (((unsigned __int64)v18 + 15) >> 4) - v19);
        }
        if ( v17 != (struct _KSEMAPHORE *)&v12[12 * v15]
          && ((*((char *)BitMapHeader->Buffer + ((unsigned __int64)((unsigned int)v17->Header.LockNV >> 4) >> 3)) >> (((unsigned int)v17->Header.LockNV >> 4) & 7)) & 1) != 0 )
        {
          v20 = KeReadStateSemaphore((PRKSEMAPHORE)&v12[12 * v15]);
          RtlSetBits(BitMapHeader, v21, (((unsigned __int64)v20 + 15) >> 4) - v21);
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    *BitMapHeader = 0LL;
  }
  return BitMapHeader;
}
