/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C000DB28
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 * Callees:
 *     TR_IsUrbUsingChainedMdl @ 0x1C000D330 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003F810 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C0045044 (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r10d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 *v14; // r14
  unsigned int v15; // edx
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  unsigned int v20; // edi
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // ebp
  unsigned __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  int v27; // edx
  int v28; // edx
  __int64 v29; // r8
  int v30; // [rsp+20h] [rbp-88h]
  unsigned int v31; // [rsp+B0h] [rbp+8h]
  int v32; // [rsp+B8h] [rbp+10h]
  unsigned int v33; // [rsp+C0h] [rbp+18h]

  v1 = 0;
  v3 = *a1;
  v4 = 2;
  v5 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) > 2u )
  {
    v9 = *((unsigned int *)a1 + 10);
    v10 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL);
    v11 = v9;
    if ( v10 <= (unsigned int)v9 )
      v11 = v10;
    v33 = v11;
    *((_DWORD *)a1 + 20) = ((unsigned __int64)(v11 + 8190) >> 12) + 1;
    v12 = *(_QWORD *)(v3 + 48);
    v13 = *(_WORD *)(v12 + 2);
    if ( v13 > 0x38u && v13 <= 0x3Au )
    {
      *((_DWORD *)a1 + 21) = ((unsigned __int64)(v9 + 4095) >> 12) + 1;
LABEL_37:
      v4 = *((_DWORD *)a1 + 21) + 2;
      goto LABEL_3;
    }
    v14 = (__int64 *)a1[6];
    if ( !TR_IsUrbUsingChainedMdl(v12) )
    {
      *((_DWORD *)a1 + 21) = (v9 + 4095 + (unsigned __int64)((*((_DWORD *)v14 + 8) + *((_DWORD *)v14 + 11)) & 0xFFF)) >> 12;
      goto LABEL_37;
    }
    v31 = v1;
    v16 = v1;
    if ( !(_DWORD)v9 )
      goto LABEL_37;
    while ( 1 )
    {
      v17 = *((_DWORD *)v14 + 10);
      v18 = v9;
      LODWORD(v9) = v9 - v17;
      if ( v18 < v17 )
        LODWORD(v9) = v1;
      v32 = v9;
      if ( v18 < v17 )
        v17 = v18;
      v19 = v17;
      if ( v17 )
        break;
LABEL_36:
      v14 = (__int64 *)*v14;
      if ( !(_DWORD)v9 )
        goto LABEL_37;
    }
    v20 = v31;
    while ( 1 )
    {
      v21 = v14[4] + *((unsigned int *)v14 + 11) + (unsigned __int64)(v17 - v19);
      v22 = (*((_WORD *)v14 + 16) + (unsigned __int16)*((_DWORD *)v14 + 11) + (_WORD)v17 - (_WORD)v19) & 0xFFF;
      if ( v16 + v19 < v15 )
      {
        v16 = v19;
        v24 = ((unsigned __int64)v19 + v22 + 4095) >> 12;
        v19 = v1;
        v23 = v24;
        v20 = v24;
      }
      else
      {
        v23 = v20 + (((unsigned __int64)(v15 - v16) + v22 + 4095) >> 12);
        v20 = v1;
        v19 += v16 - v15;
        v16 = v1;
      }
      v25 = v23 + *((_DWORD *)a1 + 21);
      *((_DWORD *)a1 + 21) = v25;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
      {
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v21,
          v25,
          v30,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v21,
          v23,
          v19,
          v20,
          v16,
          v25);
      }
      v26 = *(_DWORD *)(v5 + 196);
      if ( v23 >= v26 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v27,
          v26,
          30,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v23,
          *(_DWORD *)(v5 + 196));
      }
      if ( v23 > *((_DWORD *)a1 + 20) )
      {
        *((_DWORD *)a1 + 20) = v23;
        v1 = 0;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          goto LABEL_34;
        }
        v28 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        LOBYTE(v28) = 5;
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v28,
          14,
          31,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v23);
      }
      v1 = 0;
LABEL_34:
      v15 = v33;
      if ( !v19 )
      {
        v31 = v20;
        LODWORD(v9) = v32;
        goto LABEL_36;
      }
    }
  }
  *((_DWORD *)a1 + 20) = 2;
LABEL_3:
  *((_DWORD *)a1 + 21) = v4;
  v6 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 336LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v8 = *(_QWORD *)(v5 + 48);
    if ( *(_DWORD *)(v8 + 40) != v1 )
    {
      v29 = *(_QWORD *)(v5 + 56);
      if ( *(char *)(v29 + 98) < 0 && *(_DWORD *)(v8 + 20) <= 1u )
      {
        result = v6 / (*(_WORD *)(v29 + 100) & 0x7FFu);
        if ( v6 % (*(_WORD *)(v29 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
