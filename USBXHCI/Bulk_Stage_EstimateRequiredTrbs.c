/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C00125B8
 * Callers:
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 * Callees:
 *     TR_IsUrbUsingChainedMdl @ 0x1C0007484 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0041E20 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C0047ABC (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  int v1; // r11d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 *v11; // r14
  int v12; // edx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // r10
  unsigned int v21; // ebp
  unsigned __int64 v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  int v25; // edx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-88h]
  unsigned int v30; // [rsp+B0h] [rbp+8h]
  int v31; // [rsp+B0h] [rbp+8h]
  int v32; // [rsp+B8h] [rbp+10h]

  v1 = 0;
  v3 = *a1;
  v4 = 2;
  v5 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) > 2u )
  {
    v8 = *((unsigned int *)a1 + 10);
    v9 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL);
    if ( v9 > (unsigned int)v8 )
      v9 = *((_DWORD *)a1 + 10);
    v30 = v9;
    *((_DWORD *)a1 + 20) = (((unsigned __int64)v9 + 8190) >> 12) + 1;
    v10 = *(_QWORD *)(v3 + 48);
    if ( *(_WORD *)(v10 + 2) != 8
      && *(_WORD *)(v10 + 2) != 9
      && *(_WORD *)(v10 + 2) != 10
      && *(_WORD *)(v10 + 2) != 50
      && *(_WORD *)(v10 + 2) != 55
      && *(_WORD *)(v10 + 2) != 56
      && (unsigned int)*(unsigned __int16 *)(v10 + 2) - 57 <= 1 )
    {
      *((_DWORD *)a1 + 21) = ((unsigned __int64)(v8 + 4095) >> 12) + 1;
LABEL_42:
      v4 = ++*((_DWORD *)a1 + 21) + 1;
      goto LABEL_3;
    }
    v11 = (__int64 *)a1[6];
    if ( !TR_IsUrbUsingChainedMdl(v10) )
    {
      *((_DWORD *)a1 + 21) = (v8 + 4095 + (unsigned __int64)((*((_DWORD *)v11 + 8) + *((_DWORD *)v11 + 11)) & 0xFFF)) >> 12;
      goto LABEL_42;
    }
    v12 = v1;
    v13 = v1;
    if ( !(_DWORD)v8 )
      goto LABEL_42;
    v14 = v30;
    while ( 1 )
    {
      v15 = *((_DWORD *)v11 + 10);
      v16 = v8;
      LODWORD(v8) = v8 - v15;
      if ( v16 < v15 )
        LODWORD(v8) = v1;
      v32 = v8;
      if ( v16 < v15 )
        v15 = v16;
      if ( v15 )
        break;
LABEL_41:
      v11 = (__int64 *)*v11;
      if ( !(_DWORD)v8 )
        goto LABEL_42;
    }
    v17 = v15;
    while ( 1 )
    {
      v18 = v11[4] + *((unsigned int *)v11 + 11) + (unsigned __int64)(v17 - v15);
      v19 = (*((_WORD *)v11 + 16) + (unsigned __int16)*((_DWORD *)v11 + 11) + (_WORD)v17 - (_WORD)v15) & 0xFFF;
      if ( v15 + v13 < v14 )
      {
        v13 = v15;
        v22 = ((unsigned __int64)v15 + v19 + 4095) >> 12;
        v15 = v1;
        v21 = v22;
        v31 = v22;
        v20 = v22;
      }
      else
      {
        v31 = v1;
        v20 = v1;
        v21 = v12 + (((unsigned __int64)(v14 - v13) + v19 + 4095) >> 12);
        v15 += v13 - v14;
        v13 = v1;
      }
      v23 = v21 + *((_DWORD *)a1 + 21);
      *((_DWORD *)a1 + 21) = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
      {
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v18,
          v23,
          v29,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v18,
          v21,
          v15,
          v20,
          v13,
          v23);
      }
      v24 = *(_DWORD *)(v5 + 196);
      if ( v21 >= v24 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        LOBYTE(v25) = 3;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v25,
          v24,
          30,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v21,
          *(_DWORD *)(v5 + 196));
      }
      if ( v21 > *((_DWORD *)a1 + 20) )
      {
        *((_DWORD *)a1 + 20) = v21;
        v1 = 0;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          goto LABEL_39;
        }
        v26 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v26,
          14,
          31,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v21);
      }
      v1 = 0;
LABEL_39:
      v12 = v31;
      if ( !v15 )
      {
        LODWORD(v8) = v32;
        goto LABEL_41;
      }
    }
  }
  *((_DWORD *)a1 + 20) = 2;
LABEL_3:
  *((_DWORD *)a1 + 21) = v4;
  result = *(_QWORD *)(v5 + 40);
  v7 = *((_DWORD *)a1 + 10);
  if ( _bittest64((const signed __int64 *)(result + 336), 0x22u) )
  {
    v27 = *(_QWORD *)(v5 + 48);
    if ( *(_DWORD *)(v27 + 40) != v1 )
    {
      v28 = *(_QWORD *)(v5 + 56);
      if ( *(char *)(v28 + 98) < 0 && *(_DWORD *)(v27 + 20) <= 1u )
      {
        result = v7 / (*(_WORD *)(v28 + 100) & 0x7FFu);
        if ( v7 % (*(_WORD *)(v28 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
