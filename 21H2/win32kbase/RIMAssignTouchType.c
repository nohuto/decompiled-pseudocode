/*
 * XREFs of RIMAssignTouchType @ 0x1C018FAFC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     RIMIsParallelDevice @ 0x1C0194800 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0195468 (RIMRetrieveLinkCollection.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v6; // edi
  _DWORD *v7; // r14
  __int64 v8; // rax
  __int64 Pool2; // rbx
  USHORT LinkCollection; // ax
  unsigned __int16 v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[3]; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_VALUE_CAPS v15; // [rsp+F0h] [rbp-10h] BYREF
  struct _HIDP_BUTTON_CAPS v16; // [rsp+140h] [rbp+40h] BYREF

  memset(&v15, 0, sizeof(v15));
  memset(&v16, 0, sizeof(v16));
  v12[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &v16, v12, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 360) |= 4u;
  v12[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x51u, &v15, v12, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v12[0] = 1;
    v6 = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &v15, v12, a2);
    if ( v6 < 0 )
    {
      LinkCollection = v15.LinkCollection;
      *(_DWORD *)(a1 + 360) |= 0x20u;
      *(_WORD *)(a1 + 776) = LinkCollection;
      return (unsigned int)v6;
    }
    v7 = gpLeakTrackingAllocator;
    v13[0] = 0;
    *(_DWORD *)(a1 + 24) = 2;
    if ( (v7[10] & 0x71707352) == 0x71707352 && (v8 = 0LL, v7[11]) )
    {
      while ( v7[v8] != 1903194962 )
      {
        if ( ++v8 >= (unsigned __int64)(unsigned int)v7[11] )
          goto LABEL_11;
      }
      Pool2 = ExAllocatePool2(260LL, 56LL);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v7,
                 (const void *)Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_12;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v7,
                    Pool2,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_12;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
    }
    else
    {
LABEL_11:
      Pool2 = ExAllocatePool2(260LL, 40LL);
    }
LABEL_12:
    *(_QWORD *)(a1 + 760) = Pool2;
    if ( !Pool2
      || (unsigned int)RIMIsParallelDevice(a1, a2, v13) && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v13[0]) )
    {
      return (unsigned int)-1073741668;
    }
  }
  return (unsigned int)v6;
}
