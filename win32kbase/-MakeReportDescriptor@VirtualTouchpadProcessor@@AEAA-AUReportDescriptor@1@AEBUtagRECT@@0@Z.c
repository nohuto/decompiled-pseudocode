__int64 __fastcall VirtualTouchpadProcessor::MakeReportDescriptor(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  _WORD *v10; // rsi
  _WORD *v11; // rdi
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-E0h]
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int128 v16; // [rsp+40h] [rbp-C0h]
  _BYTE v17[50]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+90h] [rbp-70h]
  __int128 v19; // [rsp+A0h] [rbp-60h]
  __int128 v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+D0h] [rbp-30h]
  _QWORD v22[2]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID BackTrace[26]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v24; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v25; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v26; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v27; // [rsp+1F8h] [rbp+F8h] BYREF

  v24 = a1;
  v17[8] = BYTE2(*a3);
  v17[13] = BYTE2(a3[2]);
  v17[20] = BYTE2(*(_DWORD *)(a4 + 8));
  *(_WORD *)&v17[6] = *a3;
  *(_WORD *)&v17[11] = a3[2];
  *(_WORD *)&v17[18] = *(_DWORD *)(a4 + 8);
  *(_WORD *)&v17[31] = a3[1];
  v17[34] = HIBYTE(a3[1]);
  *(_QWORD *)&v18 = 0x18501A105090D05LL;
  *((_QWORD *)&v18 + 1) = 0xFFFF470000FFFF27uLL;
  *(_QWORD *)&v19 = 0x951001660C550000uLL;
  *((_QWORD *)&v19 + 1) = 0x8156090D05107501uLL;
  *(_QWORD *)&v20 = 0x9500450525540902uLL;
  *((_QWORD *)&v20 + 1) = 0x909050281107501LL;
  *(_QWORD *)&v14 = 0x150D0502A12209LL;
  *((_QWORD *)&v14 + 1) = 0x55004500350125LL;
  *(_QWORD *)&v15 = 0x295470942090065LL;
  *((_QWORD *)&v15 + 1) = 0x675019502810175LL;
  *(_QWORD *)&v16 = 0xFF27107501950381uLL;
  *((_QWORD *)&v16 + 1) = 0x5028151090000FFLL;
  *(_DWORD *)v17 = 1963037953;
  *(_WORD *)&v17[4] = 5920;
  v17[9] = HIBYTE(*a3);
  v17[10] = 39;
  v17[14] = HIBYTE(a3[2]);
  strcpy(&v17[15], "5");
  v17[17] = 71;
  v17[21] = HIBYTE(*(_DWORD *)(a4 + 8));
  *(_QWORD *)&v17[22] = 0x281300911650D55LL;
  v17[30] = 23;
  v17[33] = BYTE2(a3[1]);
  v17[35] = 39;
  *(_WORD *)&v17[36] = a3[3];
  v5 = gpLeakTrackingAllocator;
  *(_WORD *)&v17[41] = *(_DWORD *)(a4 + 12);
  v17[38] = BYTE2(a3[3]);
  v17[43] = BYTE2(*(_DWORD *)(a4 + 12));
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v17[39] = HIBYTE(a3[3]);
  v17[40] = 71;
  v17[44] = HIBYTE(*(_DWORD *)(a4 + 12));
  *(_DWORD *)&v17[45] = 42021129;
  v17[49] = -64;
  *(_QWORD *)&v21 = 0x15550902850D05LL;
  *((_QWORD *)&v21 + 1) = 0x55014500350525LL;
  LODWORD(v24) = 1886680661;
  v26 = 260LL;
  v27 = 576LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, 576LL, 1886680661LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_16;
  }
  if ( v6 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70747655u) )
    {
      v8 = (_QWORD *)ExAllocatePool2(v26 & 0xFFFFFFFFFFFFFFFDuLL, 592LL, (unsigned int)v24);
      Pool2 = (__int64)v8;
      if ( !v8
        || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
            *v8 = 1886680661LL,
            Pool2 = (__int64)(v8 + 2),
            v8 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v5 + 1),
          0x70747655uLL);
      }
LABEL_16:
      if ( !Pool2 )
        goto LABEL_25;
      goto LABEL_19;
    }
LABEL_24:
    Pool2 = 0LL;
    goto LABEL_25;
  }
  if ( v6 != 2 )
    goto LABEL_24;
  v25 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886680661, &v25) )
  {
    v22[0] = &v26;
    v22[1] = &v24;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v5,
              (__int64)v22,
              &v27);
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(v9, 592LL, 1886680661LL);
  if ( !Pool2 )
    goto LABEL_24;
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v5,
           (const void *)Pool2,
           v25,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v5,
          Pool2,
          v25,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_23:
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_24;
  }
LABEL_19:
  v10 = (_WORD *)(Pool2 + 61);
  v11 = (_WORD *)(Pool2 + 159);
  v12 = 196LL;
  *(_OWORD *)Pool2 = v18;
  *(_OWORD *)(Pool2 + 16) = v19;
  *(_OWORD *)(Pool2 + 32) = v20;
  *(_QWORD *)(Pool2 + 48) = 0x8101950175012501uLL;
  *(_DWORD *)(Pool2 + 56) = -2130209534;
  *(_BYTE *)(Pool2 + 60) = 3;
  *(_OWORD *)(Pool2 + 61) = v14;
  *(_OWORD *)(Pool2 + 77) = v15;
  *(_OWORD *)(Pool2 + 93) = v16;
  *(_OWORD *)(Pool2 + 109) = *(_OWORD *)v17;
  *(_OWORD *)(Pool2 + 125) = *(_OWORD *)&v17[16];
  *(_OWORD *)(Pool2 + 141) = *(_OWORD *)&v17[32];
  *(_WORD *)(Pool2 + 157) = *(_WORD *)&v17[48];
  while ( v12 )
  {
    *v11++ = *v10++;
    --v12;
  }
  *(_OWORD *)(Pool2 + 551) = v21;
  *(_QWORD *)(Pool2 + 567) = 0x2B1087501950065LL;
  *(_BYTE *)(Pool2 + 575) = -64;
LABEL_25:
  *(_QWORD *)a2 = Pool2;
  *(_WORD *)(a2 + 8) = 576;
  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  return a2;
}
