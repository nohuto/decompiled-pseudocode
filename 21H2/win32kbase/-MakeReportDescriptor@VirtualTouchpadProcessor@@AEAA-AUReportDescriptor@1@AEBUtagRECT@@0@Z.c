/*
 * XREFs of ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x1C01F3AA4
 * Callers:
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C01F3340 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::MakeReportDescriptor(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  PVOID v5; // rdi
  __int64 v6; // rax
  __int64 Pool2; // rbx
  _WORD *v8; // rsi
  _WORD *v9; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-E0h]
  __int128 v13; // [rsp+38h] [rbp-D0h]
  __int128 v14; // [rsp+48h] [rbp-C0h]
  _BYTE v15[50]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+98h] [rbp-70h]
  __int128 v17; // [rsp+A8h] [rbp-60h]
  __int128 v18; // [rsp+B8h] [rbp-50h]
  __int128 v19; // [rsp+D8h] [rbp-30h]
  PVOID BackTrace[20]; // [rsp+F8h] [rbp-10h] BYREF

  v15[8] = BYTE2(*a3);
  v15[13] = BYTE2(a3[2]);
  v15[20] = BYTE2(*(_DWORD *)(a4 + 8));
  *(_WORD *)&v15[6] = *a3;
  *(_WORD *)&v15[11] = a3[2];
  *(_WORD *)&v15[18] = *(_DWORD *)(a4 + 8);
  *(_WORD *)&v15[31] = a3[1];
  v15[34] = HIBYTE(a3[1]);
  *(_QWORD *)&v16 = 0x18501A105090D05LL;
  *((_QWORD *)&v16 + 1) = 0xFFFF470000FFFF27uLL;
  *(_QWORD *)&v17 = 0x951001660C550000uLL;
  *((_QWORD *)&v17 + 1) = 0x8156090D05107501uLL;
  *(_QWORD *)&v18 = 0x9500450525540902uLL;
  *((_QWORD *)&v18 + 1) = 0x909050281107501LL;
  *(_QWORD *)&v12 = 0x150D0502A12209LL;
  *((_QWORD *)&v12 + 1) = 0x55004500350125LL;
  *(_QWORD *)&v13 = 0x295470942090065LL;
  *((_QWORD *)&v13 + 1) = 0x675019502810175LL;
  *(_QWORD *)&v14 = 0xFF27107501950381uLL;
  *((_QWORD *)&v14 + 1) = 0x5028151090000FFLL;
  *(_DWORD *)v15 = 1963037953;
  *(_WORD *)&v15[4] = 5920;
  v15[9] = HIBYTE(*a3);
  v15[10] = 39;
  v15[14] = HIBYTE(a3[2]);
  strcpy(&v15[15], "5");
  v15[17] = 71;
  v15[21] = HIBYTE(*(_DWORD *)(a4 + 8));
  *(_QWORD *)&v15[22] = 0x281300911650D55LL;
  v15[30] = 23;
  v15[33] = BYTE2(a3[1]);
  v15[35] = 39;
  *(_WORD *)&v15[36] = a3[3];
  v5 = gpLeakTrackingAllocator;
  v15[38] = BYTE2(a3[3]);
  *(_WORD *)&v15[41] = *(_DWORD *)(a4 + 12);
  v15[43] = BYTE2(*(_DWORD *)(a4 + 12));
  v15[44] = HIBYTE(*(_DWORD *)(a4 + 12));
  v15[39] = HIBYTE(a3[3]);
  v15[40] = 71;
  *(_DWORD *)&v15[45] = 42021129;
  v15[49] = -64;
  *(_QWORD *)&v19 = 0x15550902850D05LL;
  *((_QWORD *)&v19 + 1) = 0x55014500350525LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747655) != 0x70747655
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 576LL);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1886680661 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(260LL, 592LL);
  if ( !Pool2 )
    goto LABEL_13;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v5,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_16;
    Pool2 += 16LL;
LABEL_6:
    if ( !Pool2 )
      goto LABEL_11;
    goto LABEL_7;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v5,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_16:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
    Pool2 = 0LL;
    goto LABEL_11;
  }
LABEL_7:
  v8 = (_WORD *)(Pool2 + 61);
  v9 = (_WORD *)(Pool2 + 159);
  v10 = 196LL;
  *(_OWORD *)Pool2 = v16;
  *(_OWORD *)(Pool2 + 16) = v17;
  *(_OWORD *)(Pool2 + 32) = v18;
  *(_QWORD *)(Pool2 + 48) = 0x8101950175012501uLL;
  *(_DWORD *)(Pool2 + 56) = -2130209534;
  *(_BYTE *)(Pool2 + 60) = 3;
  *(_OWORD *)(Pool2 + 61) = v12;
  *(_OWORD *)(Pool2 + 77) = v13;
  *(_OWORD *)(Pool2 + 93) = v14;
  *(_OWORD *)(Pool2 + 109) = *(_OWORD *)v15;
  *(_OWORD *)(Pool2 + 125) = *(_OWORD *)&v15[16];
  *(_OWORD *)(Pool2 + 141) = *(_OWORD *)&v15[32];
  *(_WORD *)(Pool2 + 157) = *(_WORD *)&v15[48];
  while ( v10 )
  {
    *v9++ = *v8++;
    --v10;
  }
  *(_OWORD *)(Pool2 + 551) = v19;
  *(_QWORD *)(Pool2 + 567) = 0x2B1087501950065LL;
  *(_BYTE *)(Pool2 + 575) = -64;
LABEL_11:
  *(_QWORD *)a2 = Pool2;
  result = a2;
  *(_WORD *)(a2 + 8) = 576;
  return result;
}
