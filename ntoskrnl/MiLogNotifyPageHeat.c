/*
 * XREFs of MiLogNotifyPageHeat @ 0x14065193C
 * Callers:
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char MiLogNotifyPageHeat()
{
  _UNKNOWN **v0; // rax
  _DWORD *v1; // r9
  unsigned __int64 *v2; // rsi
  __int64 v3; // r11
  _QWORD *v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38[17]; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  char v41; // [rsp+118h] [rbp+10h] BYREF
  int *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  int *v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  int *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  int *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v54; // [rsp+198h] [rbp+90h]
  int v55; // [rsp+1A0h] [rbp+98h]
  int v56; // [rsp+1A4h] [rbp+9Ch]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v0 = &retaddr;
  if ( !*(_QWORD *)&qword_140C69568 )
    return (char)v0;
  if ( !**(_DWORD **)&qword_140C69568 )
    return (char)v0;
  LOBYTE(v0) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 64LL);
  if ( !(_BYTE)v0 )
    return (char)v0;
  v2 = (unsigned __int64 *)(v1 + 4);
  v3 = 0LL;
  v4 = v1 + 4;
  v5 = (unsigned __int64)&v1[2 * v1[1] + 4];
  if ( (unsigned __int64)(v1 + 4) < v5 )
  {
    do
    {
      v6 = (*v4 & 0x3FFLL) + 1;
      v7 = (*v4 >> 10) & 3LL;
      if ( ((*v4 >> 10) & 3) != 0 )
      {
        do
        {
          v6 <<= 9;
          LODWORD(v7) = v7 - 1;
        }
        while ( (_DWORD)v7 );
      }
      v3 += v6;
      ++v4;
    }
    while ( (unsigned __int64)v4 < v5 );
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v10) = 0x8000;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v10;
  }
  if ( *v1 )
  {
    if ( **(_DWORD **)&qword_140C69568 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C69568, 64LL) )
      goto LABEL_23;
    v19 = *v2;
    v15 = (unsigned __int8 *)&byte_140039267;
    v31 = *(_DWORD *)(v17 + 4);
    v42 = &v31;
    v44 = &v36;
    v37 = v19 >> 12;
    v46 = &v37;
    v43 = 4LL;
    v32 = (v19 & 0x3FF) + 1;
    v33 = (v19 >> 10) & 3;
    v48 = &v32;
    v36 = v18;
    v50 = &v33;
    LOWORD(v27) = *(_WORD *)(v17 + 4);
    v55 = 8 * (unsigned __int16)v27;
    v16 = (struct _EVENT_DATA_DESCRIPTOR *)&v41;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 4LL;
    v51 = 4LL;
    v52 = &v27;
    v53 = 2LL;
    v54 = v2;
    v56 = 0;
  }
  else
  {
    if ( **(_DWORD **)&qword_140C69568 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C69568, 64LL) )
      goto LABEL_23;
    v14 = *v2;
    v15 = (unsigned __int8 *)&unk_1400391E0;
    v28 = *(_DWORD *)(v11 + 4);
    v38[4] = (__int64)&v28;
    v38[6] = (__int64)&v34;
    v35 = v14 >> 12;
    v38[8] = (__int64)&v35;
    v38[5] = 4LL;
    v29 = (v14 & 0x3FF) + 1;
    v30 = (v14 >> 10) & 3;
    v38[10] = (__int64)&v29;
    v34 = v13;
    v38[12] = (__int64)&v30;
    LOWORD(v26) = *(_WORD *)(v11 + 4);
    v39 = 8 * (unsigned __int16)v26;
    v16 = (struct _EVENT_DATA_DESCRIPTOR *)v38;
    v38[7] = 8LL;
    v38[9] = 8LL;
    v38[11] = 4LL;
    v38[13] = 4LL;
    v38[14] = (__int64)&v26;
    v38[15] = 2LL;
    v38[16] = (__int64)v2;
    v40 = 0;
  }
  tlgWriteEx_EtwWriteEx(v12, v15, 0LL, 1u, 0, 0, 9u, v16);
LABEL_23:
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  LOBYTE(v0) = CurrentIrql;
  __writecr8(CurrentIrql);
  return (char)v0;
}
