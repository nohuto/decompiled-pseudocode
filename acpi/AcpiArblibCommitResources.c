/*
 * XREFs of AcpiArblibCommitResources @ 0x1C007CE1C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00814F0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiArblibCommitResources(__int64 a1, __int64 a2)
{
  PRTL_RANGE_LIST *v2; // r14
  bool v3; // zf
  int v5; // r13d
  int v7; // r12d
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // r15
  int v10; // eax
  unsigned __int8 *v11; // rax
  NTSTATUS v12; // esi
  struct _RTL_RANGE_LIST RangeList; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  ULONGLONG Start; // [rsp+A8h] [rbp+48h] BYREF

  Start = 0LL;
  v2 = (PRTL_RANGE_LIST *)(a1 + 176);
  v15 = 0LL;
  v3 = *(_BYTE *)(a1 + 129) == 0;
  v5 = *(_DWORD *)(a1 + 168);
  memset(&RangeList, 0, sizeof(RangeList));
  if ( !v3 )
  {
    RtlFreeRangeList(*v2);
    *(_BYTE *)(a1 + 131) = 0;
    *(_BYTE *)(a1 + 129) = 0;
  }
  v7 = 0;
  RtlInitializeRangeList(&RangeList);
  if ( a2 )
  {
    v8 = (unsigned __int8 *)(a2 + 20);
    v9 = a2 + 20 + 20LL * *(unsigned int *)(a2 + 16);
    if ( a2 + 20 < v9 )
    {
      do
      {
LABEL_5:
        v10 = *v8;
        if ( v10 == v5 || (_BYTE)v10 == 7 && v5 == 3 )
        {
          v11 = v8 + 20;
          if ( (unsigned __int64)(v8 + 20) < v9 )
          {
            while ( *v11 == 0x81 )
            {
              if ( *((_WORD *)v11 + 1) == 1 )
              {
                v12 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 272))(
                        v8,
                        &Start,
                        &v15);
                if ( v12 < 0 )
                  goto LABEL_21;
                if ( !v15 )
                  break;
                v12 = RtlAddRange(&RangeList, Start, Start + v15 - 1, 0, 3u, 0LL, 0LL);
                if ( v12 < 0 )
                  goto LABEL_21;
                ++v7;
                v8 += 20;
                goto LABEL_5;
              }
              v11 += 20;
              if ( (unsigned __int64)v11 >= v9 )
              {
                v8 += 20;
                goto LABEL_5;
              }
            }
          }
        }
        v8 += 20;
      }
      while ( (unsigned __int64)v8 < v9 );
    }
  }
  v12 = RtlInvertRangeList(*v2, &RangeList);
  if ( v12 >= 0 )
  {
    *(_BYTE *)(a1 + 129) = 1;
    if ( !v7 )
      *(_BYTE *)(a1 + 131) = 1;
  }
LABEL_21:
  RtlFreeRangeList(&RangeList);
  return (unsigned int)v12;
}
