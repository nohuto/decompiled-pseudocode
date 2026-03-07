char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  signed __int32 v3; // eax
  signed __int32 v7; // ett
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  int v29; // [rsp+A8h] [rbp-60h] BYREF
  __int16 ProcessSessionId; // [rsp+ACh] [rbp-5Ch]
  __int16 v31; // [rsp+AEh] [rbp-5Ah]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B8h] [rbp-50h] BYREF
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  __int64 *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  __int64 *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  __int64 *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  __int64 *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]

  LOBYTE(v3) = 0;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v3 = *(_DWORD *)(a1 + 2172);
    do
    {
      v7 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v3 | 0x400, v3);
    }
    while ( v7 != v3 );
    if ( (v3 & 0x400) == 0 )
    {
      v29 = *(_DWORD *)(a1 + 1088);
      ProcessSessionId = PsGetProcessSessionId(a1);
      v31 = MEMORY[0xFFFFF780000002C4];
      v32 = *(_QWORD *)(a1 + 1128);
      v8 = *(_QWORD *)(a1 + 1384);
      v9 = *(_QWORD *)(a1 + 1600);
      v10 = *(_QWORD *)(a1 + 1608);
      v11 = *(_QWORD *)(v8 + 320);
      v12 = *(_QWORD *)(v8 + 256);
      PsQueryJobMemoryUsageByProcess(a1, &v17, &v18, &v19, &v20);
      LOBYTE(v3) = MiGetProcessPartition(a1);
      if ( **(_DWORD **)&qword_140C69568 > 5u )
      {
        LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL);
        if ( (_BYTE)v3 )
        {
          v27 = v13;
          v34 = &v29;
          v35 = 16LL;
          v36 = &v22;
          v22 = a2;
          v38 = &v21;
          v37 = 8LL;
          v40 = &v23;
          v42 = &v24;
          v44 = &v25;
          v46 = &v26;
          v48 = &v17;
          v50 = &v18;
          v52 = &v19;
          v54 = &v20;
          v56 = &v27;
          v58 = &v28;
          LODWORD(v21) = a3;
          v39 = 4LL;
          v23 = v11;
          v41 = 8LL;
          v24 = v12;
          v43 = 8LL;
          v25 = v9;
          v45 = 8LL;
          v26 = v10;
          v47 = 8LL;
          v49 = 8LL;
          v51 = 8LL;
          v53 = 8LL;
          v55 = 8LL;
          v57 = 8LL;
          v28 = v15;
          v59 = 8LL;
          LOBYTE(v3) = tlgWriteEx_EtwWriteEx(v14, (unsigned __int8 *)&byte_1400392ED, 0LL, 1u, 0, 0, 0xFu, &v33);
        }
      }
    }
  }
  return v3;
}
