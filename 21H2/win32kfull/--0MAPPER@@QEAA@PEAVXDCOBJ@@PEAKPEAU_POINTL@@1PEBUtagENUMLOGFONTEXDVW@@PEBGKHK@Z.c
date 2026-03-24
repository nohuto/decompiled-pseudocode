/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C005D670
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C005F930 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D0A0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C010007C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C011F6A8 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  int v11; // ebp
  const unsigned __int16 *v13; // rdx
  unsigned int v15; // r14d
  const unsigned __int16 *v16; // rdi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  unsigned int *v23; // rax
  DC **v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  char v27; // di
  __int64 v28; // rcx
  int v29; // eax
  __int16 *v30; // rdx
  __int16 v31; // ax
  int v32; // eax
  int v33; // r15d
  int v34; // r14d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int y; // r12d
  __int64 x; // rcx
  int v45; // eax
  struct _KTHREAD *v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  struct _POINTL *v54; // rax
  int v55; // edx
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  struct _POINTL *v59; // rax
  int v60; // edx
  int v61; // ecx
  int v62; // ebp
  int v63; // ecx
  bool v64; // sf
  int v65; // ecx
  MAPPER *result; // rax
  int v67; // edx
  int v68; // r9d
  unsigned __int16 v69; // cx
  unsigned __int16 *v70; // rdi
  unsigned __int16 j; // ax
  unsigned __int16 v72; // dx
  int v73; // ecx
  int v74; // eax
  __int64 v75; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v78; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rcx
  __int64 v83; // rax
  struct _POINTL *v84; // [rsp+68h] [rbp+20h] BYREF

  v84 = a4;
  v10 = a6;
  v11 = 0;
  *(_QWORD *)this = a2;
  v13 = Src;
  *((_DWORD *)this + 63) = 0;
  v15 = 0;
  *((_QWORD *)this + 32) = 0LL;
  v16 = v13;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v13;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v13; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v13);
  memmove((char *)this + 24, v13, v18);
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v69 = v16[1];
    v70 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v69 - 48) <= 9u )
    {
      do
      {
        for ( j = v69; j; v69 = j )
        {
          if ( v69 >= 0x30u )
          {
            j = v69;
            if ( v69 <= 0x39u )
              break;
          }
          j = v70[1];
          ++v70;
        }
        v69 = j;
        if ( j )
        {
          v72 = v70[1];
          ++v70;
          v73 = j - 48;
          if ( v72 )
          {
            do
            {
              if ( (unsigned __int16)(v72 - 48) > 9u )
                break;
              ++v70;
              v74 = v72;
              v72 = *v70;
              v73 = v74 + 2 * (5 * v73 - 24);
            }
            while ( *v70 );
          }
          v75 = v15++;
          *((_DWORD *)this + v75 + 25) = v73;
          v69 = *v70;
        }
      }
      while ( v69 );
    }
  }
  *((_DWORD *)this + 24) = v15;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v15 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v19 = *((_QWORD *)this + 1);
    v20 = *(unsigned int *)(v19 + 352);
    if ( (_DWORD)v20 )
      memmove((char *)this + 92, (const void *)(v19 + 348), 4 * v20 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  *((_DWORD *)this + 70) = a9;
  v21 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v22 = *(_BYTE *)(v21 + 23);
  v23 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v22;
  *v23 = 0;
  *((_QWORD *)this + 28) = v84;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v24 = *(DC ***)this;
  v25 = *((_DWORD *)this + 63) | ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) << 11) & 0x40000;
  *((_DWORD *)this + 63) = v25;
  v26 = *((_QWORD *)*v24 + 122);
  if ( *(_DWORD *)(v26 + 208) == 1 && ((*(_DWORD *)(v26 + 340) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v24)) )
  {
    v27 = a10;
    v25 |= 0x1000u;
    *((_DWORD *)this + 63) = v25;
  }
  else
  {
    v27 = -65;
  }
  v28 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v28 + 26) == 2 )
  {
    v67 = *((_DWORD *)*v24 + 130);
    if ( (v67 & 1) == 0 || (v67 & 2) != 0 )
    {
      v25 |= 0x8000u;
      *((_DWORD *)this + 63) = v25;
    }
  }
  v29 = *(_DWORD *)(v28 + 16);
  if ( v29 == 400 || v29 == 700 )
  {
    v25 |= 0x10000000u;
    *((_DWORD *)this + 63) = v25;
  }
  v30 = (__int16 *)*((_QWORD *)this + 2);
  v31 = *v30;
  if ( *v30 == 77
    && v30[1] == 83
    && v30[2] == 32
    && v30[3] == 83
    && v30[4] == 72
    && v30[5] == 69
    && v30[6] == 76
    && v30[7] == 76
    && v30[8] == 32
    && v30[9] == 68
    && v30[10] == 76
    && v30[11] == 71
    && !v30[12] )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( v31 == 83 && v30[1] == 89 && v30[2] == 83 && v30[3] == 84 && v30[4] == 69 && v30[5] == 77 && !v30[6] )
  {
    *((_DWORD *)this + 63) = v25 | 0x2000;
    if ( (*(_BYTE *)(v28 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else
  {
    if ( v31 == 84
      && v30[1] == 77
      && v30[2] == 83
      && v30[3] == 32
      && v30[4] == 82
      && v30[5] == 77
      && v30[6] == 78
      && !v30[7] )
    {
      v68 = v25 | 0x800000;
    }
    else if ( v31 == 83 && v30[1] == 89 && v30[2] == 77 && v30[3] == 66 && v30[4] == 79 && v30[5] == 76 )
    {
      v68 = v25 | 0x4000000;
    }
    else
    {
      if ( v31 != 64 )
        goto LABEL_19;
      v68 = v25 | 0x2000000;
    }
    *((_DWORD *)this + 63) = v68;
  }
LABEL_19:
  *((_DWORD *)this + 41) = *(_DWORD *)v28;
  v32 = *(_DWORD *)(v28 + 4);
  if ( v32 < 0 )
    v32 = -v32;
  *((_DWORD *)this + 42) = v32;
  LOBYTE(v33) = 18;
  LOBYTE(v34) = 18;
  v84 = (struct _POINTL *)*((_QWORD *)*v24 + 6);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v84)
    || (CurrentProcess = PsGetCurrentProcess(v37, v36, v38),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v78),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v41 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v41 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v41 + 340) )
        {
          LOBYTE(v34) = *(_DWORD *)(v41 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v40);
          if ( CurrentProcessWin32Process )
            v34 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  y = 96;
  x = (unsigned int)v84[5].x;
  if ( (x & 1) != 0 && (v34 & 0xFu) - 1 > 1 )
    v45 = 96;
  else
    v45 = v84[272].x;
  *((_DWORD *)this + 61) = v45;
  v46 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(x)
    || (v80 = PsGetCurrentProcess(v48, v47, v49),
        v81 = PsGetProcessSessionIdEx(v80),
        v83 = PsGetCurrentThreadProcess(v82),
        v81 == (unsigned int)PsGetProcessSessionIdEx(v83)) )
  {
    v50 = (__int64 *)PsGetThreadWin32Thread(v46);
    if ( v50 )
    {
      v52 = *v50;
      if ( *v50 )
      {
        if ( *(_QWORD *)(v52 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v50);
        if ( *(_DWORD *)(v52 + 340) )
        {
          LOBYTE(v33) = *(_DWORD *)(v52 + 340);
        }
        else
        {
          v53 = PsGetCurrentProcessWin32Process(v51);
          if ( v53 )
            v33 = *(_DWORD *)(v53 + 280);
        }
      }
    }
  }
  v54 = v84;
  if ( (v84[5].x & 1) == 0 || (v33 & 0xFu) - 1 <= 1 )
    y = v84[272].y;
  *((_DWORD *)this + 62) = y;
  v55 = *((_DWORD *)this + 63) | ((unsigned int)v54[273].x >> 5) & 0x100;
  *((_DWORD *)this + 63) = v55;
  if ( (v54[273].x & 8) != 0 )
    v56 = 1024;
  else
    v56 = 0;
  *((_DWORD *)this + 63) = v56 | v55;
  if ( PDEVOBJ::cFonts((PDEVOBJ *)&v84) )
    v57 = 512;
  else
    v57 = 0;
  v58 = v57 | *((_DWORD *)this + 63);
  v59 = v84;
  *((_DWORD *)this + 63) = v58;
  if ( v59[267].y )
    v60 = 0;
  else
    v60 = 0x10000;
  v61 = v60 | v58;
  *((_DWORD *)this + 63) = v61;
  if ( v59[267].y == 4 )
    v11 = 0x20000000;
  v62 = v61 | v11;
  v63 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 63) = v62;
  v64 = v63 < 0;
  if ( !v63 )
  {
    v63 = v59[228].y;
    v62 |= 8u;
    *((_DWORD *)this + 63) = v62;
    v64 = v63 < 0;
    *((_DWORD *)this + 41) = v63;
  }
  if ( v64 )
  {
    v62 |= 2u;
    *((_DWORD *)this + 63) = v62;
    *((_DWORD *)this + 41) = -v63;
  }
  v65 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v65;
  if ( !v65 )
  {
    v62 |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v62;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v62 = *((_DWORD *)this + 63);
  }
  result = this;
  *((_DWORD *)this + 63) = v62 | v27 & 0x40 | 1;
  return result;
}
