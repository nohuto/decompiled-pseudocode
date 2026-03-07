__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HIDP_DEVICE_DESC *a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // r14d
  struct tagUSAGE_PROPERTIES *v8; // r13
  unsigned int v9; // esi
  char v10; // r15
  __int128 v11; // xmm1
  unsigned __int64 v12; // rcx
  int v13; // r12d
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // eax
  NSInstrumentation::CLeakTrackingAllocator *v17; // rdi
  unsigned __int64 v18; // rbx
  int v19; // eax
  __int64 Pool2; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // r10d
  char v23; // r11
  unsigned int v24; // eax
  struct tagUSAGE_PROPERTIES *v25; // rdi
  __int128 v26; // xmm1
  unsigned int v27; // r14d
  unsigned int v28; // edi
  unsigned int v29; // r12d
  char v30; // r15
  unsigned int v31; // edi
  unsigned int v32; // eax
  __int128 v33; // xmm1
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // edx
  struct _HIDP_DEVICE_DESC *v39; // r9
  __int64 v41; // [rsp+28h] [rbp-D8h]
  unsigned int v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v49[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h]
  _OWORD v51[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BackTrace[28]; // [rsp+D0h] [rbp-30h] BYREF
  char v55; // [rsp+1C8h] [rbp+C8h]

  v55 = a2;
  v6 = a5;
  v7 = 0;
  a5 = 0;
  v8 = a3;
  v43 = 0;
  v9 = 0;
  v10 = 0;
  v46 = 1;
  v11 = *((_OWORD *)a3 + 1);
  v51[0] = *(_OWORD *)a3;
  v51[1] = v11;
  if ( v6 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v13 = 1;
    if ( v6 )
      v13 = v6;
    v45 = v13;
    v12 = 35LL * a4 * v13;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v14 = v13 + 13;
  }
  else
  {
    v12 = 35LL * a4;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v13 = 1;
    v45 = 1;
    v14 = 23;
  }
  v15 = (_DWORD)v12 + v14 == 0;
  v16 = v12 + v14;
  v42 = v16;
  if ( !v15 )
  {
    v17 = gpLeakTrackingAllocator;
    v18 = v16;
    v44 = 2020635477;
    v47 = 260LL;
    v19 = *(_DWORD *)gpLeakTrackingAllocator;
    v48 = v18;
    if ( !v19 )
    {
      Pool2 = ExAllocatePool2(260LL, (unsigned int)v18, 2020635477LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
LABEL_31:
      if ( Pool2 )
        goto LABEL_34;
      return v9;
    }
    if ( v19 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707355u)
        || v18 + 16 < v18 )
      {
        return v9;
      }
      v21 = (_QWORD *)ExAllocatePool2(v47 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v44);
      Pool2 = (__int64)v21;
      if ( !v21
        || (_InterlockedIncrement64((volatile signed __int64 *)v17 + 14),
            *v21 = 2020635477LL,
            Pool2 = (__int64)(v21 + 2),
            v21 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v17 + 1),
          0x78707355uLL);
      }
      goto LABEL_31;
    }
    if ( v19 != 2 )
      return v9;
    v49[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020635477, v49) )
    {
      v49[0] = (unsigned __int64)&v47;
      v49[1] = (unsigned __int64)&v44;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v17,
                (__int64)v49,
                &v48);
      goto LABEL_31;
    }
    if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
    {
      v18 += 16LL;
      LOBYTE(v7) = v23;
      v48 = v18;
    }
    Pool2 = ExAllocatePool2(260LL, v18, v22);
    if ( !Pool2 )
      return v9;
    _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (_BYTE)v7 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      v7 = 0;
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v17,
             (const void *)Pool2,
             v49[0],
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_31;
      }
    }
    else
    {
      v7 = 0;
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v17,
             Pool2,
             v49[0],
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_34:
        BuildDeviceHeader((unsigned __int8 *)Pool2, v42, &a5, a1, v55);
        v24 = a4;
        if ( a4 )
        {
          v25 = v8;
          do
          {
            if ( *(_WORD *)v25 == 1 )
            {
              v26 = *((_OWORD *)v25 + 1);
              *(_OWORD *)v49 = *(_OWORD *)v25;
              v50 = v26;
              v9 = BuildMainItem((unsigned __int8 *)Pool2, v42, &a5, v49, (__int64)v51, v41, &v46, &v43);
              if ( !v9 )
                goto LABEL_55;
              v10 += v43;
              v24 = a4;
            }
            ++v7;
            v25 = (struct tagUSAGE_PROPERTIES *)((char *)v25 + 32);
          }
          while ( v7 < v24 );
          if ( v9 )
          {
            v27 = a5;
            v28 = 0;
            *(_BYTE *)(a5 + Pool2) = -64;
            a5 = v27 + 1;
            v29 = v13 - 1;
            if ( v29 )
            {
              do
              {
                if ( !v9 )
                  break;
                v9 = CloneLogicalCollection((unsigned __int8 *)Pool2, v42, &a5, v27);
                ++v28;
              }
              while ( v28 < v29 );
              v8 = a3;
            }
            v30 = v45 * v10;
            v31 = 0;
            v32 = a4;
            do
            {
              if ( !*(_WORD *)v8 )
              {
                v33 = *((_OWORD *)v8 + 1);
                v52[0] = *(_OWORD *)v8;
                v52[1] = v33;
                v9 = BuildMainItem((unsigned __int8 *)Pool2, v42, &a5, v52, (__int64)v51, v41, &v46, &v43);
                if ( !v9 )
                  goto LABEL_55;
                v30 += v43;
                v32 = a4;
              }
              ++v31;
              v8 = (struct tagUSAGE_PROPERTIES *)((char *)v8 + 32);
            }
            while ( v31 < v32 );
            if ( v9 )
            {
              if ( (v30 & 7) != 0 )
              {
                v34 = a5;
                *(_BYTE *)(a5 + Pool2) = 117;
                *(_BYTE *)(v34 + 1 + Pool2) = 8 - (v30 & 7);
                v35 = v34 + 2;
                *(_BYTE *)(v35 + Pool2) = -107;
                v36 = (unsigned int)(v35 + 1);
                *(_BYTE *)(v36 + Pool2) = 1;
                v37 = (unsigned int)(v36 + 1);
                *(_BYTE *)(v37 + Pool2) = -127;
                LODWORD(v37) = v37 + 1;
                *(_BYTE *)((unsigned int)v37 + Pool2) = 3;
                v38 = v37 + 1;
              }
              else
              {
                v38 = a5;
              }
              v39 = a6;
              *(_BYTE *)(v38 + Pool2) = -64;
              v9 = (int)rimHidP_GetCollectionDescription(Pool2, v38 + 1, 1LL, (__int64)v39) >= 0;
            }
          }
        }
LABEL_55:
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        return v9;
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)v17 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return v9;
  }
  return 0LL;
}
