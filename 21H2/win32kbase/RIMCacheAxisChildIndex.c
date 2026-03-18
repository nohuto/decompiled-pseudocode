/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C018FDAC
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C0195468 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3, int a4)
{
  __int64 v6; // r13
  char v7; // r12
  _DWORD *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  char *Pool2; // rbx
  __int64 v15; // rcx
  unsigned __int16 v16; // dx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r12
  unsigned __int16 v20; // di
  __int64 v21; // r12
  __int64 v22; // rbx
  USHORT v23; // cx
  __int16 v24; // cx
  unsigned __int16 v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT ReportCount; // [rsp+44h] [rbp-BCh]
  __int16 v28; // [rsp+46h] [rbp-BAh]
  int v29; // [rsp+48h] [rbp-B8h]
  char *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  struct _HIDP_PREPARSED_DATA *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  struct _HIDP_VALUE_CAPS v37; // [rsp+120h] [rbp+20h] BYREF

  v32 = a2;
  v33 = a1;
  v29 = a4;
  memset(&v37, 0, sizeof(v37));
  v6 = *(_QWORD *)(a1 + 760);
  v7 = 0;
  v8 = gpLeakTrackingAllocator;
  v31 = v6;
  v26[0] = 1;
  v9 = *(unsigned __int16 *)(v6 + 4);
  v10 = 0;
  v11 = *(_QWORD *)(v6 + 16);
  v12 = 8LL * a3;
  ReportCount = *(_WORD *)(v11 + 24 * v9 + 4);
  *(_WORD *)(v6 + 8) = 0;
  if ( (v8[10] & 0x77637352) != 0x77637352 || (v13 = 0LL, !v8[11]) )
  {
LABEL_5:
    Pool2 = (char *)ExAllocatePool2(260LL, v12);
    goto LABEL_6;
  }
  while ( v8[v13] != 2003006290 )
  {
    if ( ++v13 >= (unsigned __int64)(unsigned int)v8[11] )
      goto LABEL_5;
  }
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v7 = 1;
    v12 += 16LL;
  }
  v30 = (char *)ExAllocatePool2(260LL, v12);
  Pool2 = v30;
  if ( v30 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v7 && (unsigned __int64)((unsigned __int16)v30 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v8,
             v30,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 = v30 + 16;
LABEL_6:
        v30 = Pool2;
        if ( !Pool2 )
          return v10;
        goto LABEL_7;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v8,
                (__int64)v30,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_7:
      v15 = ReportCount;
      v16 = 0;
      *(_QWORD *)(v6 + 24) = Pool2;
      v28 = 0;
      v17 = 3 * v15;
      v35 = 3 * v15;
      if ( *(_WORD *)(v11 + 24 * v15 + 6) )
      {
        v18 = v6;
        do
        {
          if ( !(_WORD)v9 )
            break;
          v19 = 3LL * (unsigned __int16)v9;
          v34 = v19;
          if ( *(_WORD *)(v11 + 24LL * (unsigned __int16)v9 + 6) )
          {
            if ( v29 )
            {
              v20 = *(_WORD *)(v11 + 24LL * (unsigned __int16)v9 + 10);
              if ( v20 )
              {
                v21 = v31;
                v22 = v33;
                do
                {
                  v26[0] = 1;
                  if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v20, 0x30u, &v37, v26, v32) == 1114112 )
                  {
                    ReportCount = v37.ReportCount;
                    v26[0] = 1;
                    if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v20, 0x31u, &v37, v26, v32) == 1114112 )
                    {
                      v23 = v37.ReportCount;
                      if ( (_WORD)v9 == *(_WORD *)(v21 + 4) )
                      {
                        *(_WORD *)(v21 + 8) = v20;
                        v10 = 1;
                      }
                      *(_WORD *)(*(_QWORD *)(v21 + 24) + 8LL * (unsigned __int16)v9 + 2) = v20;
                      if ( v23 == ReportCount && ReportCount == 2 )
                        *(_DWORD *)(v22 + 360) |= 0x200u;
                    }
                  }
                  v20 = *(_WORD *)(v11 + 24LL * v20 + 8);
                }
                while ( v20 );
                Pool2 = v30;
                v19 = v34;
                v16 = v28;
                v18 = v31;
                v17 = v35;
              }
            }
          }
          v24 = v9;
          v9 = *(unsigned __int16 *)(v11 + 8 * v19 + 8);
          if ( (_WORD)v9 )
            *(_WORD *)&Pool2[8 * v9 + 4] = v24;
          else
            *(_WORD *)(v18 + 6) = v24;
          v28 = ++v16;
        }
        while ( v16 < *(_WORD *)(v11 + 8 * v17 + 6) );
      }
      if ( !v29 )
        return 1;
      return v10;
    }
    ExFreePoolWithTag(v30, 0);
  }
  return v10;
}
