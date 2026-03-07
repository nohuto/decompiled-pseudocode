__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  __int64 v12; // rcx
  unsigned int v13; // r13d
  unsigned int v14; // edi
  unsigned int v15; // r15d
  unsigned int v16; // esi
  __int64 v17; // rcx
  PVOID v18; // rax
  unsigned int v19; // r10d
  NSInstrumentation::CLeakTrackingAllocator *v20; // r13
  int v21; // eax
  __int64 Pool2; // rcx
  _DWORD *v23; // r8
  int i; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // edx
  unsigned int v29; // eax
  _DWORD *v30; // r9
  int j; // ecx
  int v32; // eax
  int v33; // r8d
  unsigned int v34; // eax
  int v35; // ecx
  _DWORD *v36; // r8
  int k; // r9d
  int v38; // eax
  int v39; // edx
  unsigned int v40; // eax
  int v41; // r9d
  int v42; // r10d
  __int64 v43; // rax
  int v44; // ecx
  _DWORD *v45; // rdx
  int v46; // ecx
  __int64 v47; // rdi
  unsigned int v48; // edx
  int v50; // r12d
  int v51; // r12d
  _DWORD *v52; // rcx
  const unsigned int *v53; // r8
  unsigned int m; // eax
  unsigned int n; // edx
  _QWORD *v56; // rax
  unsigned int v57; // edx
  unsigned __int64 v58; // r10
  PVOID Buffer; // [rsp+20h] [rbp-138h]
  __int64 Buffera; // [rsp+20h] [rbp-138h]
  unsigned int v61; // [rsp+28h] [rbp-130h]
  unsigned int v62; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-120h] BYREF
  int v64; // [rsp+40h] [rbp-118h]
  unsigned __int64 v65; // [rsp+48h] [rbp-110h] BYREF
  __int64 v66; // [rsp+50h] [rbp-108h] BYREF
  _DWORD *v67; // [rsp+58h] [rbp-100h]
  __int64 v68; // [rsp+60h] [rbp-F8h]
  _QWORD v69[2]; // [rsp+70h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+80h] [rbp-D8h] BYREF
  int v71; // [rsp+168h] [rbp+10h]
  char v72; // [rsp+168h] [rbp+10h]
  unsigned int v73; // [rsp+170h] [rbp+18h]

  v73 = a3;
  v64 = a9;
  v12 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v68 = v12;
  v13 = 4;
  switch ( a2 )
  {
    case 2:
      v61 = a8 & 0x3100300;
      v73 = 0;
      v14 = a5;
      if ( !a5 )
        return 0LL;
      v15 = a7;
      if ( !a7 )
        return 0LL;
      v16 = a6;
      if ( !a6 )
        return 0LL;
      goto LABEL_5;
    case 1:
      v13 = 4 * a3 + 4;
      v61 = a8 & 0x3102F00;
      if ( !a3 )
        return 0LL;
      break;
    case 4:
    case 8:
    case 16:
      v61 = a8 & 0x3100100 | 0x200;
      v73 = 0;
      if ( a2 != 16 )
      {
        if ( a2 == 4 )
        {
          v14 = 255;
          v16 = 65280;
          v15 = 16711680;
        }
        else
        {
          v14 = 16711680;
          v16 = 65280;
          v15 = 255;
        }
LABEL_5:
        v13 = 52;
        goto LABEL_6;
      }
      break;
    default:
      return 0LL;
  }
  v15 = a7;
  v16 = a6;
  v14 = a5;
LABEL_6:
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 24) + 6504LL) + 8LL);
  if ( v17 )
    v18 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v17 + 48));
  else
    v18 = 0LL;
  *(_QWORD *)this = v18;
  if ( !v18 )
    return 0LL;
  if ( !v13 )
    goto LABEL_78;
  v62 = 1819304263;
  v66 = 260LL;
  v19 = v13;
  v65 = v13;
  v20 = gpLeakTrackingAllocator;
  v21 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, v19, 1819304263LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
    goto LABEL_13;
  }
  if ( v21 != 1 )
  {
    if ( v21 == 2 )
    {
      v63 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6C706147u, &v63) )
      {
        v69[0] = &v66;
        v69[1] = &v62;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v20,
                  v69,
                  &v65);
        goto LABEL_13;
      }
      v72 = 0;
      if ( v58 < 0x1000 || (v58 & 0xFFF) != 0 )
      {
        v72 = 1;
        v58 += 16LL;
        v65 = v58;
      }
      Buffera = ExAllocatePool2(260LL, v58, v57);
      if ( Buffera )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v72 && (unsigned __int64)(Buffera & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v20,
                                  Buffera,
                                  v63,
                                  BackTrace) )
          {
            Pool2 = Buffera + 16;
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v20,
                                     Buffera,
                                     v63,
                                     BackTrace) )
        {
          Pool2 = Buffera;
          goto LABEL_13;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Buffera);
      }
    }
LABEL_78:
    Pool2 = 0LL;
    goto LABEL_13;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6C706147u)
    || v65 + 16 < v65 )
  {
    goto LABEL_78;
  }
  v56 = (_QWORD *)ExAllocatePool2(v66 & 0xFFFFFFFFFFFFFFFDuLL, v65 + 16, v62);
  Buffer = v56;
  if ( !v56
    || (_InterlockedIncrement64((volatile signed __int64 *)v20 + 14),
        *v56 = 1819304263LL,
        Pool2 = (__int64)(v56 + 2),
        Buffer = v56 + 2,
        v56 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v20 + 1),
      (const void *)0x6C706147);
    Pool2 = (__int64)Buffer;
  }
LABEL_13:
  *(_QWORD *)(*(_QWORD *)this + 128LL) = Pool2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 128LL) )
  {
LABEL_122:
    XEPALOBJ::FreePaletteMemory(this);
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 24LL) = v61 | a2;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = v73;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = _InterlockedIncrement((volatile signed __int32 *)(v68 + 3848));
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 56LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this;
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( a2 == 2 )
    goto LABEL_15;
  v50 = a2 - 1;
  if ( v50 )
  {
    v51 = v50 - 3;
    if ( !v51 || v51 == 4 )
    {
LABEL_15:
      **(_DWORD **)(*(_QWORD *)this + 112LL) = v14;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL) = v16;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL) = v15;
      if ( v14 == 255 && v16 == 65280 && v15 == 16711680 )
      {
        *(_DWORD *)(*(_QWORD *)this + 24LL) |= 4u;
      }
      else if ( v14 == 63488 && v16 == 2016 && v15 == 31 )
      {
        *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x400000u;
      }
      else if ( v14 == 31744 && v16 == 992 && v15 == 31 )
      {
        *(_DWORD *)(*(_QWORD *)this + 24LL) |= 0x200000u;
      }
      v23 = *(_DWORD **)(*(_QWORD *)this + 112LL);
      for ( i = 0; (v14 & 1) == 0; ++i )
        v14 >>= 1;
      v25 = i;
      do
      {
        v26 = v25;
        v14 >>= 1;
        ++v25;
      }
      while ( (v14 & 1) != 0 );
      v27 = v25 - i;
      v23[9] = v27;
      if ( v27 > 8 )
        i = v26 - 7;
      v23[6] = i;
      v28 = 8;
      if ( v27 > 8 )
        v29 = 0;
      else
        v29 = 8 - v27;
      v23[3] = v29;
      v30 = *(_DWORD **)(*(_QWORD *)this + 112LL);
      for ( j = 0; (v16 & 1) == 0; ++j )
        v16 >>= 1;
      v32 = j;
      do
      {
        v33 = v32;
        v16 >>= 1;
        ++v32;
      }
      while ( (v16 & 1) != 0 );
      v34 = v32 - j;
      v30[10] = v34;
      if ( v34 > 8 )
        j = v33 - 7;
      v30[7] = j;
      v35 = 16;
      if ( v34 <= 8 )
        v28 = 16 - v34;
      v30[4] = v28;
      v36 = *(_DWORD **)(*(_QWORD *)this + 112LL);
      for ( k = 0; (v15 & 1) == 0; ++k )
        v15 >>= 1;
      v38 = k;
      do
      {
        v39 = v38;
        v15 >>= 1;
        ++v38;
      }
      while ( (v15 & 1) != 0 );
      v40 = v38 - k;
      v36[11] = v40;
      if ( v40 > 8 )
        k = v39 - 7;
      v36[8] = k;
      if ( v40 <= 8 )
        v35 = 24 - v40;
      v36[5] = v35;
    }
LABEL_42:
    v41 = 4;
    v42 = a9;
    goto LABEL_43;
  }
  v52 = *(_DWORD **)(*(_QWORD *)this + 112LL);
  v67 = v52;
  v53 = a4;
  if ( !a4 )
  {
    for ( m = 0; m < v73; ++m )
      *v52++ = 0;
    v67 = v52;
    goto LABEL_42;
  }
  for ( n = 0; n < v73; ++n )
  {
    v71 = *v53++;
    *v52++ = v71;
    v67 = v52;
  }
  v41 = 4;
  v42 = a9;
LABEL_43:
  v43 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) )
  {
    v44 = *(_DWORD *)(v43 + 24);
    if ( (v44 & 2) == 0 )
    {
      if ( (v44 & 8) != 0 )
        v41 = 6;
      else
        v41 = 8 - ((v44 & 0x10) != 0);
      goto LABEL_47;
    }
    v45 = *(_DWORD **)(v43 + 112);
    if ( v45[2] == 31 )
    {
      if ( v45[1] == 2016 && *v45 == 63488 )
      {
        v41 = 3;
        goto LABEL_47;
      }
      if ( v45[1] == 992 && *v45 == 31744 )
        goto LABEL_47;
    }
    v41 = 5;
LABEL_47:
    v46 = v41;
    goto LABEL_48;
  }
  v46 = 2;
  v41 = 1;
LABEL_48:
  *(_DWORD *)(v43 + 100) = v41;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v46;
  v47 = *(_QWORD *)this;
  v48 = 11;
  if ( !v42 )
    v48 = 3;
  if ( !HmgInsertObjectInternal(*(struct OBJECT **)this, v48, 8u) )
    goto LABEL_122;
  if ( v47 )
    _InterlockedDecrement((volatile signed __int32 *)(v47 + 12));
  return 1LL;
}
