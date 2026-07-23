/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x140315000
 * Callers:
 *     RtlpHpSegLfhVsDecommit @ 0x140312A30 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140312B20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x140314F10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpMetadataCommit @ 0x1403CB264 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x1403158E0 (RtlpHpSegPageRangeHandleCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  int v8; // r13d
  unsigned int v9; // r15d
  int v10; // r8d
  unsigned int v11; // r14d
  int v13; // eax
  char v14; // r9
  unsigned int v15; // r11d
  unsigned int v16; // ebp
  int v17; // ebx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  int v20; // r8d
  unsigned int v21; // edx
  unsigned __int64 v22; // r11
  int v23; // ecx
  int v24; // r9d
  int v25; // ebp
  unsigned int v26; // r8d
  int v27; // edx
  unsigned int v28; // r11d
  __int64 result; // rax
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // r8d
  unsigned int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // ebx
  int v42; // [rsp+40h] [rbp-58h]
  unsigned int v43; // [rsp+48h] [rbp-50h]
  int v44; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v45; // [rsp+A0h] [rbp+8h]
  __int64 v46; // [rsp+A8h] [rbp+10h]
  int v47; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+20h] BYREF

  v46 = a2;
  v6 = a3;
  v8 = (a5 >> 22) & 2;
  v9 = a3 + a4;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v44 = v10;
  v11 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v9 = v6 - a4;
  v13 = 0;
  v42 = 0;
  if ( v6 >= v9 )
    goto LABEL_17;
  while ( 2 )
  {
    v14 = *(_BYTE *)(a1 + 9);
    v15 = v10 - (v10 & (v6 + v11)) + 1;
    if ( v15 >= v9 - v6 )
      v15 = v9 - v6;
    v16 = 1 << v14;
    v43 = v15;
    v17 = 0;
    v18 = (unsigned __int64)v6 >> v14 << v14;
    v19 = a2 + 32 * ((unsigned __int64)v6 >> v14);
    v48 = v6 & ((1 << v14) - 1);
    v20 = (v15 - 1 + v48) & ((1 << v14) - 1);
    v21 = v48;
    v22 = v19 + 32 * ((unsigned __int64)(v15 - 1 + v48) >> v14);
    v45 = v20 + 1;
    v23 = -1;
    v47 = -1;
    v24 = -1;
    if ( !v48 )
      goto LABEL_9;
    v38 = v16;
    if ( v19 == v22 )
      v38 = v45;
    v48 = v38;
    v39 = *(unsigned __int8 *)(v19 + 25);
    if ( a4 <= 0 )
    {
      if ( v39 > v21 )
      {
        v41 = v21;
        v40 = *(unsigned __int8 *)(v19 + 25);
        goto LABEL_60;
      }
    }
    else if ( v39 < v48 )
    {
      v40 = v48;
      v21 = *(unsigned __int8 *)(v19 + 25);
      v41 = v48;
LABEL_60:
      v23 = v18 + v40;
      v17 = v41 - v39;
      v47 = v23;
      v24 = v18 + v21;
      if ( v17 )
      {
        v47 = v23;
        if ( a4 <= 0 )
        {
          v47 = v23;
          *(_BYTE *)(v19 + 25) = v17 + v39;
        }
      }
    }
    v19 += 32LL;
    LODWORD(v18) = v16 + v18;
LABEL_9:
    if ( v19 >= v22 )
      goto LABEL_10;
    do
    {
      v31 = *(unsigned __int8 *)(v19 + 25);
      v32 = 0;
      v33 = v24;
      if ( a4 <= 0 )
      {
        if ( !*(_BYTE *)(v19 + 25) )
          goto LABEL_30;
        v34 = v18;
        v32 = -v31;
        if ( v24 != -1 )
          v34 = v24;
        v24 = v34;
        v35 = *(unsigned __int8 *)(v19 + 25);
      }
      else
      {
        if ( v31 >= v16 )
          goto LABEL_30;
        v24 = v31 + v18;
        v32 = v16 - v31;
        if ( v33 != -1 )
          v24 = v33;
        v35 = v16;
      }
      v36 = v18 + v35;
      v47 = v36;
      if ( v32 )
      {
        v47 = v36;
        if ( a4 <= 0 )
        {
          v47 = v36;
          *(_BYTE *)(v19 + 25) = v32 + v31;
        }
      }
LABEL_30:
      v17 += v32;
      v19 += 32LL;
      LODWORD(v18) = v16 + v18;
    }
    while ( v19 < v22 );
    v23 = v47;
LABEL_10:
    v25 = v24;
    if ( v19 == v22 )
    {
      v26 = *(unsigned __int8 *)(v19 + 25);
      v27 = 0;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v19 + 25) )
        {
          v37 = v18;
          v27 = -v26;
          v28 = *(unsigned __int8 *)(v19 + 25);
          if ( v24 != -1 )
            v37 = v24;
          v24 = v37;
          goto LABEL_44;
        }
      }
      else
      {
        v28 = v45;
        if ( v26 >= v45 )
          goto LABEL_13;
        v24 = v18 + v26;
        v27 = v45 - v26;
        if ( v25 != -1 )
          v24 = v25;
LABEL_44:
        v23 = v18 + v28;
        if ( v27 && a4 <= 0 )
          *(_BYTE *)(v19 + 25) = v27 + v26;
      }
LABEL_13:
      v17 += v27;
    }
    if ( v17 )
    {
      v47 = v24;
      v48 = v23 - v24;
      if ( v17 <= 0 )
      {
        v30 = 0x4000;
      }
      else
      {
        v30 = 4096;
        if ( (a5 & 2) != 0 )
          v30 = 1073745920;
      }
      result = RtlpHpSegMgrCommit(a1, v17, v30, v8);
      if ( (int)result >= 0 )
      {
        if ( v17 > 0 )
          RtlpHpSegPageRangeHandleCommit(a1, v46, (unsigned int)&v47, (unsigned int)&v48, 1);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v17);
        a2 = v46;
        *(_WORD *)(v46 + 28) = ~(v17 + ~*(_WORD *)(v46 + 28));
        goto LABEL_16;
      }
    }
    else
    {
      a2 = v46;
LABEL_16:
      v6 += v43;
      v13 = v17 + v42;
      v42 += v17;
      if ( v6 < v9 )
      {
        v10 = v44;
        continue;
      }
LABEL_17:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    return result;
  }
}
