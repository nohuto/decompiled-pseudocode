/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0094F38
 * Callers:
 *     DCompositionProcessCallout @ 0x1C0094EF0 (DCompositionProcessCallout.c)
 * Callees:
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0094FE4 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00950E4 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C009516C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  unsigned int v4; // edx
  int v5; // edi
  __int64 v7; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64704344) != 0x64704344
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, 56LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_16:
      v5 = -1073741801;
LABEL_17:
      Pool2 = 0LL;
      goto LABEL_7;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1685078852 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(261LL, 72LL);
  if ( !Pool2 )
    goto LABEL_16;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_16;
  }
LABEL_4:
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  v5 = DirectComposition::CConnection::OnProcessCreation((struct DirectComposition::CProcessData *)Pool2);
  if ( v5 >= 0 )
    v5 = DirectComposition::CChannel::OnProcessCreation((struct DirectComposition::CProcessData *)Pool2);
  if ( v5 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'((DirectComposition::CProcessData *)Pool2, v4);
    goto LABEL_17;
  }
LABEL_7:
  *((_QWORD *)a1 + 32) = Pool2;
  return (unsigned int)v5;
}
