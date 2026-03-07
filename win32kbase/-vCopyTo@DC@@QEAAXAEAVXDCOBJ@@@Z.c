void __fastcall DC::vCopyTo(DC *this, DC **a2)
{
  DC *v2; // rax
  char *v5; // rdx
  __int64 v6; // rbx
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm1
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  DC *v14; // rcx
  unsigned int v15; // eax
  NSInstrumentation::CLeakTrackingAllocator *v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 Pool2; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r10
  char v22; // r15
  void *v23; // rcx
  _QWORD v24[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v26; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v27; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v29; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = *a2;
  v5 = (char *)*((_QWORD *)*a2 + 37);
  if ( v5 && v5 != (char *)v2 + 264 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  v6 = 3LL;
  v7 = (_OWORD *)*((_QWORD *)this + 122);
  v8 = (_OWORD *)*((_QWORD *)*a2 + 122);
  v9 = 3LL;
  do
  {
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v8[4] = v7[4];
    v8[5] = v7[5];
    v8[6] = v7[6];
    v8 += 8;
    v10 = v7[7];
    v7 += 8;
    *(v8 - 1) = v10;
    --v9;
  }
  while ( v9 );
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  DC::hpath(*a2, *((struct HPATH__ **)this + 25));
  v11 = (_OWORD *)((char *)this + 80);
  v12 = (_OWORD *)((char *)*a2 + 80);
  do
  {
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12 += 8;
    v13 = v11[7];
    v11 += 8;
    *(v12 - 1) = v13;
    --v6;
  }
  while ( v6 );
  *v12 = *v11;
  v12[1] = v11[1];
  v12[2] = v11[2];
  v12[3] = v11[3];
  v12[4] = v11[4];
  v14 = (DC *)*((_QWORD *)this + 37);
  if ( v14 == (DC *)((char *)this + 264) )
  {
    *((_QWORD *)*a2 + 37) = (char *)*a2 + 264;
    return;
  }
  if ( v14 )
  {
    v15 = 8 * *((_DWORD *)this + 76);
    if ( v15 )
    {
      v16 = gpLeakTrackingAllocator;
      v17 = v15;
      v26 = 1684300103;
      v28 = 260LL;
      v18 = *(_DWORD *)gpLeakTrackingAllocator;
      v29 = v17;
      switch ( v18 )
      {
        case 0:
          Pool2 = ExAllocatePool2(260LL, (unsigned int)v17, 1684300103LL);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
          goto LABEL_36;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64646147u)
            && v17 + 16 >= v17 )
          {
            v20 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFDuLL, v17 + 16, v26);
            Pool2 = (__int64)v20;
            if ( !v20
              || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
                  *v20 = 1684300103LL,
                  Pool2 = (__int64)(v20 + 2),
                  v20 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v16 + 1),
                (const void *)0x64646147);
            }
            goto LABEL_36;
          }
          break;
        case 2:
          v27 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64646147u, &v27) )
          {
            v24[0] = &v28;
            v24[1] = &v26;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      v16,
                      v24,
                      &v29);
            goto LABEL_36;
          }
          v22 = 0;
          if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
          {
            v17 += 16LL;
            v22 = 1;
            v29 = v17;
          }
          Pool2 = ExAllocatePool2(v21, v17, 1684300103LL);
          if ( Pool2 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v16,
                                      Pool2,
                                      v27,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_36;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v16,
                                         Pool2,
                                         v27,
                                         BackTrace) )
            {
              goto LABEL_36;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
          }
          break;
      }
    }
    Pool2 = 0LL;
LABEL_36:
    *((_QWORD *)*a2 + 37) = Pool2;
    v23 = (void *)*((_QWORD *)*a2 + 37);
    if ( v23 )
      memmove(v23, *((const void **)this + 37), 8LL * *((unsigned int *)this + 76));
    else
      *((_DWORD *)*a2 + 76) = 0;
  }
}
