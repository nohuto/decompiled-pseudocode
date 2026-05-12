/*
 * XREFs of StorEtwMiniportEvent @ 0x1C00504F0
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C003862C (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C0012468 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     StorEtwMiniportGetKeyword @ 0x1C0050D50 (StorEtwMiniportGetKeyword.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C005618C (StorpTelemetryMiniportEventWStr.c)
 */

__int64 __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // r14
  EVENT_DESCRIPTOR v16; // xmm0
  unsigned __int64 Keyword; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  const wchar_t *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned int v25; // edi
  __int64 Unit; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  void *v30; // r9
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ecx
  void *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  ULONG v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rax
  ULONG v44; // edi
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r9d
  __int64 v48; // r11
  const wchar_t **v49; // r10
  const wchar_t *v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // r8d
  const wchar_t *v53; // rdx
  __int64 v54; // rax
  ULONG v55; // edi
  __int64 *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // edi
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  int v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h]
  __int128 v68; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  int v77; // [rsp+FCh] [rbp-4h]
  __int64 v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int64 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  int *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  char *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int128 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  void *v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]
  void *v93; // [rsp+170h] [rbp+70h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]
  void *v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+188h] [rbp+88h]
  int v98; // [rsp+18Ch] [rbp+8Ch]

  v64 = a11;
  v60 = a4;
  v67 = a5;
  v15 = 0LL;
  v61 = a9;
  v65 = a12;
  v66 = 0LL;
  v59 = 0;
  v63 = 0LL;
  v68 = 0LL;
  EventDescriptor = 0LL;
  ActivityId = 0LL;
  v70 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a9 && (byte_1C0069844 & 4) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
          }
          goto LABEL_98;
        }
        if ( a2 )
        {
          if ( (byte_1C0069844 & 4) != 0 )
          {
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
            }
            goto LABEL_98;
          }
        }
        else if ( (byte_1C0069844 & 4) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
          }
          goto LABEL_98;
        }
      }
      else
      {
        if ( a7 != 3 )
          goto LABEL_99;
        if ( a9 && byte_1C0069844 < 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
          }
          goto LABEL_98;
        }
        if ( a2 )
        {
          if ( byte_1C0069844 < 0 )
          {
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
            }
            goto LABEL_98;
          }
        }
        else if ( byte_1C0069844 < 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
          }
          goto LABEL_98;
        }
      }
    }
    else
    {
      if ( a3 != 2 )
        return 3221225485LL;
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a2 )
        {
          if ( (byte_1C0069845 & 2) != 0 )
          {
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
            }
            goto LABEL_98;
          }
        }
        else if ( (byte_1C0069845 & 2) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
          }
          goto LABEL_98;
        }
      }
      else
      {
        if ( a7 != 3 )
          goto LABEL_99;
        if ( a2 )
        {
          if ( (byte_1C0069845 & 4) != 0 )
          {
            if ( a10 > 2 )
            {
              if ( a10 > 4 )
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
              else
                v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
            }
            else
            {
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
            }
            goto LABEL_98;
          }
        }
        else if ( (byte_1C0069845 & 4) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
          }
          goto LABEL_98;
        }
      }
    }
    return 0LL;
  }
  if ( !a9 || !StorEtwLoggingEnabled || (byte_1C0069843 & 0x10) == 0 )
  {
    if ( a2 )
    {
      if ( !StorEtwLoggingEnabled )
        return 0LL;
      if ( (byte_1C0069843 & 0x10) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
        }
        goto LABEL_98;
      }
    }
    if ( StorEtwLoggingEnabled && (byte_1C0069843 & 0x10) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniport8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniport4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniport2;
      }
      goto LABEL_98;
    }
    return 0LL;
  }
  if ( a10 > 2 )
  {
    if ( a10 > 4 )
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
    else
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
  }
  else
  {
    v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
  }
LABEL_98:
  EventDescriptor = v16;
LABEL_99:
  EventDescriptor.Level = a7;
  EventDescriptor.Opcode = a8;
  Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword, 0LL, 1LL);
  v19 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v19, (__int64)&v68);
  if ( *((_QWORD *)&v68 + 1) )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(*((_QWORD *)&v68 + 1) + 2 * v20) );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  UserData.Size = v21;
  v22 = L"NULL";
  UserData.Reserved = 0;
  if ( *((_QWORD *)&v68 + 1) )
    v22 = (const wchar_t *)*((_QWORD *)&v68 + 1);
  v74 = 4LL;
  UserData.Ptr = (unsigned __int64)v22;
  v73 = &v60;
  if ( !a5 )
    return 3221225485LL;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_WORD *)(a5 + 2 * v23) );
  if ( (unsigned int)(v23 - 1) > 0x3F )
    return 3221225485LL;
  v24 = v61;
  v76 = 2 * v23 + 2;
  v78 = a1 + 56;
  v75 = a5;
  v25 = 5;
  v80 = a1 + 5192;
  v77 = 0;
  v79 = 4LL;
  v81 = 16LL;
  if ( !v61 && !a2 )
    goto LABEL_140;
  LOWORD(v59) = -1;
  BYTE2(v59) = -1;
  if ( a2 )
  {
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v59) = *(_WORD *)(a2 + 8);
      BYTE2(v59) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(a1, v59);
      v24 = v61;
      v15 = Unit;
      if ( Unit )
        v70 = *(_OWORD *)(Unit + 1976);
    }
  }
  v83 = 1LL;
  v82 = &v59;
  v84 = (char *)&v59 + 1;
  v86 = (char *)&v59 + 2;
  v88 = &v70;
  v85 = 1LL;
  v87 = 1LL;
  v89 = 16LL;
  if ( v15 )
  {
    v27 = v15 + 160;
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(v27 + v28) );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 1;
    v27 = 160LL;
  }
  v30 = &unk_1C005B660;
  v91 = v29;
  v92 = 0;
  v31 = &unk_1C005B660;
  if ( v15 )
    v31 = (void *)v27;
  v90 = v31;
  if ( v15 )
  {
    v32 = v15 + 169;
    v33 = -1LL;
    do
      ++v33;
    while ( *(_BYTE *)(v32 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 1;
    v32 = 169LL;
  }
  v94 = v34;
  v35 = &unk_1C005B660;
  v95 = 0;
  if ( v15 )
    v35 = (void *)v32;
  v93 = v35;
  if ( v15 )
  {
    v36 = v15 + 186;
    v37 = -1LL;
    do
      ++v37;
    while ( *(_BYTE *)(v36 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 1;
    v36 = 186LL;
  }
  v97 = v38;
  v98 = 0;
  v25 = 12;
  if ( v15 )
    v30 = (void *)v36;
  v96 = v30;
  if ( v15 )
    v39 = *(_BYTE *)(v15 + 450) & 1;
  else
LABEL_140:
    v39 = *(unsigned __int8 *)(a1 + 104) >> 7;
  v62 = v39;
  v40 = v25;
  v41 = v25 + 1;
  v40 *= 2LL;
  *(&UserData.Ptr + v40) = (unsigned __int64)&v62;
  *((_QWORD *)&UserData.Size + v40) = 4LL;
  if ( v24 )
  {
    if ( *(_BYTE *)(v24 + 2) == 40 )
      v42 = *(_QWORD *)(v24 + 80);
    else
      v42 = *(_QWORD *)(v24 + 48);
    v63 = v42;
    if ( v42 )
      IoGetActivityIdIrp(v42, &ActivityId);
    v43 = 2LL * v41;
    v44 = v41 + 1;
    *(&UserData.Ptr + v43) = (unsigned __int64)&v63;
    *((_QWORD *)&UserData.Size + v43) = 8LL;
    v45 = 2LL * v44;
    v41 = v44 + 1;
    *(&UserData.Ptr + v45) = (unsigned __int64)&v61;
    *((_QWORD *)&UserData.Size + v45) = 8LL;
  }
  if ( 2 * a10 > 31 - (unsigned __int64)v41 )
    return 3221225485LL;
  v46 = v64;
  v47 = 0;
  if ( a10 )
  {
    v48 = v65;
    v49 = (const wchar_t **)v64;
    do
    {
      v50 = *v49;
      if ( !*v49 )
        goto LABEL_156;
      v51 = -1LL;
      do
        ++v51;
      while ( v50[v51] );
      LODWORD(v23) = v51;
      if ( (unsigned int)v51 > 0x20 )
        return 3221225485LL;
      v52 = 2 * v51 + 2;
      if ( !(_DWORD)v51 )
LABEL_156:
        v52 = 10;
      if ( !v50 || (v53 = *v49, !(_DWORD)v23) )
        v53 = L"NULL";
      v54 = v41;
      v55 = v41 + 1;
      v54 *= 2LL;
      *(&UserData.Ptr + v54) = (unsigned __int64)v53;
      *(&UserData.Size + 2 * v54) = v52;
      *(&UserData.Reserved + 2 * v54) = 0;
      if ( v50 && (_DWORD)v23 )
        v56 = (__int64 *)(v48 + 8LL * v47);
      else
        v56 = &v66;
      ++v47;
      v57 = 2LL * v55;
      v41 = v55 + 1;
      ++v49;
      *(&UserData.Ptr + v57) = (unsigned __int64)v56;
      *((_QWORD *)&UserData.Size + v57) = 8LL;
    }
    while ( v47 < a10 );
  }
  v58 = EtwWrite(StorPortEventProvider_Context, &EventDescriptor, &ActivityId, v41, &UserData);
  if ( (unsigned int)(a3 - 1) <= 1 )
    StorpTelemetryMiniportEventWStr(v60, v67, a1, a2, v61, a10, v46, v65);
  return v58;
}
