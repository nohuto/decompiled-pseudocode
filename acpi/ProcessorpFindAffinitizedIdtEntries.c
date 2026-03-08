/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C009B1A8
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_DDqDss @ 0x1C005E1C8 (WPP_RECORDER_SF_DDqDss.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C005E404 (WPP_RECORDER_SF_qDss.c)
 *     IcCheckIrqConflict @ 0x1C009ECDC (IcCheckIrqConflict.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009F45C (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  __int64 *v9; // r15
  unsigned __int8 v10; // di
  char IsInterruptTypeSecondary; // al
  __int64 v12; // r9
  unsigned __int8 v13; // dl
  int *v14; // rax
  int v15; // r10d
  unsigned int v16; // r13d
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int8 v21; // r15
  unsigned int v22; // edi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v24; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v27; // al
  unsigned int v28; // r14d
  char v29; // al
  bool v30; // zf
  int v31; // r14d
  const char *v32; // rax
  const char *v33; // rdx
  const char *v34; // rax
  const char *v35; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Available; // [rsp+60h] [rbp-79h] BYREF
  char v38; // [rsp+61h] [rbp-78h]
  char v39[2]; // [rsp+62h] [rbp-77h] BYREF
  struct _PROCESSOR_NUMBER v40; // [rsp+64h] [rbp-75h]
  int v41; // [rsp+68h] [rbp-71h]
  unsigned int v42; // [rsp+6Ch] [rbp-6Dh]
  int v43; // [rsp+70h] [rbp-69h]
  int v44; // [rsp+74h] [rbp-65h]
  int v45; // [rsp+78h] [rbp-61h]
  unsigned int v46; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v47; // [rsp+80h] [rbp-59h]
  __int64 *v48; // [rsp+88h] [rbp-51h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp-49h] BYREF
  int v50; // [rsp+98h] [rbp-41h]
  __int128 Context; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD *v52; // [rsp+B0h] [rbp-29h]
  __int64 v53; // [rsp+B8h] [rbp-21h]
  unsigned int *v54; // [rsp+C0h] [rbp-19h]
  _DWORD v55[4]; // [rsp+C8h] [rbp-11h] BYREF

  v54 = a9;
  v9 = a2;
  v38 = a4;
  v48 = a2;
  v10 = ~(a5 - 1);
  v53 = a1;
  v40 = 0;
  v44 = ~(a5 - 1);
  Context = 0LL;
  if ( a5 != (a5 & v44) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v55[0] = 2;
  v55[1] = 1;
  v12 = 0LL;
  if ( IsInterruptTypeSecondary )
    v12 = 256LL;
  v47 = 3;
  v55[2] = 3;
  v42 = v12;
  if ( IsInterruptTypeSecondary )
  {
    v55[3] = 0;
    v47 = 4;
  }
  v13 = 0;
  v43 = 0;
  Available = 0;
  while ( 2 )
  {
    v14 = v55;
    v46 = 0;
    v52 = v55;
    do
    {
      v15 = *v14;
      v16 = 0;
      v45 = *v14;
      while ( 2 )
      {
        v17 = 16;
        v41 = 16;
        v18 = v10 & (unsigned __int8)(a5 + v16 + ProcessorVectorColumnBias - 1) & 0xF;
        v50 = v18;
        do
        {
          v19 = ((_BYTE)v17 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v19] == v15 )
          {
            v20 = *v9;
            v21 = 0;
            v22 = v12 + (v18 | (16 * v19));
            if ( v20 )
            {
              while ( 1 )
              {
                if ( _bittest64(&v20, v21) )
                {
                  *(_WORD *)&v40.Number = v21;
                  v40.Group = *((_WORD *)v48 + 4);
                  ProcNumber = v40;
                  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                  if ( ProcessorIndexFromNumber == -1 )
                    return -1073741811;
                  if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                    return -1073741811;
                  v24 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                  if ( !v24 )
                    return -1073741811;
                  if ( v43 == 1 )
                  {
                    Callback = ProcessorpRangeConflictCallback;
                    *(_QWORD *)&Context = v53;
                    DWORD2(Context) = a6;
                    WORD6(Context) = (a7 & 1) != 0;
                    BYTE14(Context) = v38;
                  }
                  else
                  {
                    Callback = 0LL;
                    Context = 0LL;
                  }
                  if ( a8 == 1 )
                    ++v24;
                  result = RtlIsRangeAvailable(v24, v22, v22 + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                  if ( result < 0 )
                    return result;
                  v13 = Available;
                  if ( !Available )
                    goto LABEL_37;
                }
                v27 = v21++;
                v20 &= ~(1LL << v27);
                if ( !v20 )
                {
                  v17 = v41;
                  break;
                }
              }
            }
            if ( v13 )
            {
              v39[0] = 0;
              if ( a6 >= 0xFFF00000 )
                goto LABEL_45;
              v28 = v22;
              if ( v22 >= v22 + a5 )
                goto LABEL_45;
              while ( (int)IcCheckIrqConflict(a6, v28, a7, v39) >= 0 )
              {
                if ( ++v28 >= v22 + a5 )
                {
                  v29 = v39[0];
                  goto LABEL_35;
                }
              }
              v29 = 1;
LABEL_35:
              if ( !v29 )
              {
LABEL_45:
                v31 = 0;
                if ( v54 )
                  *v54 = v22;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v32 = "edge";
                  if ( (a7 & 1) == 0 )
                    v32 = "level";
                  v33 = "share";
                  if ( !v38 )
                    v33 = "noshare";
                  WPP_RECORDER_SF_DDqDss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    (__int64)v33,
                    (__int64)"noshare",
                    v12,
                    AttributeAvailableMask,
                    v22,
                    v22 + a5 - 1,
                    *v48,
                    a6,
                    v33,
                    v32);
                }
                return v31;
              }
              v13 = Available;
LABEL_37:
              v17 = v41;
            }
            v9 = v48;
          }
          v18 = v50;
          v30 = v17-- == 1;
          v12 = v42;
          v15 = v45;
          v41 = v17;
        }
        while ( !v30 );
        v10 = v44;
        v16 += a5;
        if ( v16 < 0x10 )
          continue;
        break;
      }
      v14 = v52 + 1;
      ++v46;
      ++v52;
    }
    while ( v46 < v47 );
    if ( ++v43 <= 1 )
      continue;
    break;
  }
  v31 = -1073741275;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = "edge";
    if ( (a7 & 1) == 0 )
      v34 = "level";
    v35 = "share";
    if ( !v38 )
      v35 = "noshare";
    WPP_RECORDER_SF_qDss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v35,
      (__int64)"noshare",
      v42,
      AttributeAvailableMask,
      *v9,
      a6,
      v35,
      v34);
  }
  return v31;
}
