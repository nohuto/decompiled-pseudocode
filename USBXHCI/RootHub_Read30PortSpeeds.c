/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C001C170
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C001BF70 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  unsigned int v7; // edi
  int v12; // r14d
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // bx
  __int64 Ulong; // rax
  int v17; // edx
  unsigned int v18; // ebp
  int v19; // r8d
  int v20; // r15d
  unsigned __int16 v21; // bx
  __int64 v22; // r8
  int v23; // edx
  unsigned int v24; // eax
  unsigned __int16 v25; // cx
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  int v29; // r10d
  int v30; // edx
  int v31; // edx
  int v32; // r9d
  unsigned __int16 v33; // bx
  unsigned __int16 v34; // bx
  __int64 v35; // [rsp+50h] [rbp-48h]
  unsigned __int16 v36; // [rsp+A0h] [rbp+8h]

  v7 = 0;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v14 = 0;
  *a3 = 0;
  v15 = 0;
  v36 = 0;
  v35 = v13;
  if ( a6 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(v13, (unsigned int *)(a5 + 4LL * v14));
      v18 = Ulong & 0xF;
      if ( _bittest(&v12, v18) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = 196;
LABEL_54:
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v17,
            11,
            v32,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v18);
        }
        return (unsigned int)-1073741811;
      }
      v12 |= 1 << v18;
      v17 = v15;
      if ( v15 < a4 )
      {
        if ( !a7 || (v19 = 0x4000, v18 <= 4) )
          v19 = 0;
        *(_DWORD *)(a2 + 4LL * v15) = v19 | Ulong & 0x30;
        *(_WORD *)(a2 + 4LL * v15 + 2) = WORD1(Ulong);
        *(_DWORD *)(a2 + 4LL * v15) = v18 | *(_DWORD *)(a2 + 4LL * v15) & 0xFFFFFFF0;
      }
      v20 = (unsigned __int8)Ulong >> 6;
      if ( v20 == 2 )
        break;
      if ( !((unsigned __int8)Ulong >> 6) )
      {
        if ( v15 < a4 )
          *(_DWORD *)(a2 + 4LL * v15) &= 0xFFFFFF3F;
        v21 = v15 + 1;
        if ( v21 < a4 )
        {
          v22 = v21;
          if ( !a7 || (v23 = 0x4000, v18 <= 4) )
            v23 = 0;
          *(_DWORD *)(a2 + 4LL * v21) = v23 | Ulong & 0x30;
          *(_WORD *)(a2 + 4LL * v21 + 2) = WORD1(Ulong);
          v24 = Ulong & 0xF | *(_DWORD *)(a2 + 4LL * v21) & 0xFFFFFFB0 | 0x80;
          goto LABEL_15;
        }
        goto LABEL_16;
      }
      if ( v20 == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = 199;
          goto LABEL_54;
        }
        return (unsigned int)-1073741811;
      }
LABEL_17:
      v14 = v36 + 1;
      v25 = v15;
      v36 = v14;
      if ( v14 >= a6 )
      {
        if ( (v12 & 4) != 0 )
        {
          if ( v15 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v15) = 52;
            *(_WORD *)(a2 + 4LL * v15 + 2) = 5;
          }
          v33 = v15 + 1;
          if ( (unsigned __int16)(v25 + 1) < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v33) = 180;
            *(_WORD *)(a2 + 4LL * v33 + 2) = 5;
          }
          v15 = v25 + 2;
        }
        if ( (v12 & 5) == 5 )
        {
          if ( v15 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v15) = (a7 != 0 ? 0x4000 : 0) | 0x35;
            *(_WORD *)(a2 + 4LL * v15 + 2) = 10;
          }
          v34 = v15 + 1;
          if ( v34 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v34) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
            *(_WORD *)(a2 + 4LL * v34 + 2) = 10;
          }
          v15 = v34 + 1;
        }
        goto LABEL_23;
      }
      v13 = v35;
    }
    if ( v15 < a4 )
      *(_DWORD *)(a2 + 4LL * v15) = *(_DWORD *)(a2 + 4LL * v15) & 0xFFFFFF3F | 0x40;
    v21 = v15 + 1;
    v27 = v36 + 1;
    v36 = v27;
    if ( v27 >= a6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = 197;
        goto LABEL_54;
      }
      return (unsigned int)-1073741811;
    }
    v28 = XilRegister_ReadUlong(v35, (unsigned int *)(a5 + 4LL * v27));
    v29 = v28 & 0xF;
    v30 = (unsigned __int8)v28 >> 6;
    if ( v29 != v18 || v30 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = 2;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v30,
          11,
          198,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v18,
          2,
          v29,
          (unsigned __int8)v28 >> 6);
      }
      return (unsigned int)-1073741811;
    }
    if ( v21 < a4 )
    {
      v22 = v21;
      if ( !a7 || (v31 = 0x4000, v18 <= 4) )
        v31 = 0;
      *(_DWORD *)(a2 + 4LL * v21) = v31 | v28 & 0x30;
      *(_WORD *)(a2 + 4LL * v21 + 2) = WORD1(v28);
      v24 = v29 | *(_DWORD *)(a2 + 4LL * v21) & 0xFFFFFFF0 | 0xC0;
LABEL_15:
      *(_DWORD *)(a2 + 4 * v22) = v24;
    }
LABEL_16:
    v15 = v21 + 1;
    goto LABEL_17;
  }
LABEL_23:
  *a3 = v15;
  return v7;
}
