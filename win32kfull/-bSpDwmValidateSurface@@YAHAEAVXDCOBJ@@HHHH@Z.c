_BOOL8 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // r15
  int v9; // r13d
  __int64 v10; // r12
  REGION *v11; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  LONG *v16; // rax
  LONG v17; // ecx
  LONG v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdx
  LONG v21; // ecx
  __int64 v22; // rcx
  Gre::Base *v23; // rcx
  int v24; // r15d
  struct Gre::Base::SESSION_GLOBALS *v25; // r12
  Gre::Base *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // ecx
  LONG left; // r15d
  LONG top; // r12d
  HSURF v36; // rdi
  int v37; // ebx
  __int64 v38; // rax
  Gre::Base *v39; // rcx
  LONG v40; // ecx
  LONG v41; // eax
  LONG v42; // eax
  __int64 v43; // rax
  LONG v44; // ecx
  LONG v45; // edx
  LONG v46; // eax
  struct Gre::Base::SESSION_GLOBALS *v47; // rax
  struct _POINTL v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v50; // [rsp+60h] [rbp-A0h]
  REGION *v51; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  int v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+84h] [rbp-7Ch]
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v57; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v60[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v61[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v62[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v63; // [rsp+F0h] [rbp-10h]
  _BYTE v64[32]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v66; // [rsp+140h] [rbp+40h]
  struct _RECTL v67; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v68; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+180h] [rbp+80h] BYREF
  int v70; // [rsp+188h] [rbp+88h]
  int v71; // [rsp+18Ch] [rbp+8Ch]
  struct tagRECT v72; // [rsp+190h] [rbp+90h] BYREF

  v5 = *(_QWORD *)a1;
  v6 = a4;
  v8 = a3;
  v9 = 0;
  v10 = a2;
  v11 = 0LL;
  v52 = 0LL;
  v58 = 0LL;
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x200) == 0 )
    return 0LL;
  if ( !*((_QWORD *)Gre::Base::Globals(a1) + 38) )
    return 0LL;
  v13 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4001) != 0x4001
    || !*(_QWORD *)(v13 + 472)
    || !*(_QWORD *)(v13 + 496)
    || !*(_DWORD *)(v13 + 488) && !*(_DWORD *)(v13 + 492) )
  {
    return 0LL;
  }
  if ( KeAreApcsDisabled() )
    return 0LL;
  v62[0] = 0LL;
  v62[1] = 0LL;
  v63 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v61, a1, 0);
  if ( (v61[24] & 1) == 0 )
    goto LABEL_42;
  v14 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 48) + 24LL);
    if ( !*(_DWORD *)(v14 + 492) )
    {
      v16 = (LONG *)DC::prgnVisSnap((DC *)v14);
      if ( !v16 )
        goto LABEL_42;
      v72.left = v16[14];
      v72.top = v16[15];
      v17 = v16[16];
      v18 = v16[17];
      v72.right = v17;
      v72.bottom = v18;
      if ( (unsigned int)IsRectEmptyInl(&v72) )
        goto LABEL_42;
    }
    if ( !(_DWORD)v6 )
      goto LABEL_42;
    if ( !a5 )
      goto LABEL_42;
    if ( (unsigned __int64)(v6 + v10 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_42;
    if ( (unsigned __int64)(a5 + v8 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_42;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v60, a1, 0x204u);
    if ( (*(_DWORD *)(v60[0] + 32LL) & 2) == 0 )
      goto LABEL_42;
    v48.x = v10;
    v48.y = v8;
    EXFORMOBJ::bXform((EXFORMOBJ *)v60, &v48, 1uLL);
    v19 = *(_QWORD *)a1;
    v20 = 1016LL;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 )
      v20 = 1024LL;
    v21 = *(_DWORD *)(v20 + v19 + 4) + v48.y;
    v68.left = *(_DWORD *)(v20 + v19) + v48.x;
    v48.x = v68.left;
    v68.right = v6 + v68.left;
    v68.top = v21;
    v68.bottom = v21 + a5;
    v48.y = v21;
    v67 = v68;
    ERECTL::vOrder((ERECTL *)&v67);
    v22 = *(_QWORD *)(v19 + 496);
    v53 = 0LL;
    v54 = *(_DWORD *)(v22 + 56);
    v55 = *(_DWORD *)(v22 + 60);
    ERECTL::operator*=(&v67, &v53);
    if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)&v67) )
      goto LABEL_42;
    if ( *(_DWORD *)(v19 + 492) )
      goto LABEL_43;
    if ( (*(_DWORD *)(v19 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v19 + 496), 0LL, (struct DC *)v19);
    v24 = 0;
    v25 = Gre::Base::Globals(v23);
    v50 = v25;
    GreAcquireSemaphore(*((_QWORD *)v25 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v25 + 9), 7LL);
    if ( !*((_QWORD *)Gre::Base::Globals(v26) + 38)
      || (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v59, *(HWND *)(*(_QWORD *)a1 + 472LL)), (v27 = v59) == 0) )
    {
LABEL_39:
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v25 + 9));
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 0LL) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
        if ( v11 )
          REGION::vDeleteREGION(v11);
        goto LABEL_42;
      }
      if ( !v24 )
      {
LABEL_42:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v61);
        return 0LL;
      }
LABEL_43:
      v30 = *(_QWORD *)a1;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 492LL) )
      {
        v67.left += *(_DWORD *)(v15 + 2560);
        v67.right += *(_DWORD *)(v15 + 2560);
        v67.top += *(_DWORD *)(v15 + 2564);
        v67.bottom += *(_DWORD *)(v15 + 2564);
      }
      else
      {
        ERECTL::bOffsetAdd((ERECTL *)&v67, &v52, 0);
      }
      v31 = *(_QWORD *)(v15 + 2528);
      v32 = *(_DWORD *)(v15 + 2564);
      LODWORD(v53) = *(_DWORD *)(v15 + 2560);
      v54 = *(_DWORD *)(v31 + 56) + v53;
      v33 = *(_DWORD *)(v31 + 60);
      HIDWORD(v53) = v32;
      v55 = v32 + v33;
      ERECTL::operator*=(&v67, &v53);
      if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)&v67) )
      {
        if ( v11 )
          REGION::vDeleteREGION(v11);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v61);
        if ( v62[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v62);
      }
      else
      {
        left = v67.left;
        top = v67.top;
        if ( *(_DWORD *)(v30 + 492) )
        {
          v67.left -= *(_DWORD *)(v15 + 2560);
          v67.right -= *(_DWORD *)(v15 + 2560);
          v67.top -= *(_DWORD *)(v15 + 2564);
          v67.bottom -= *(_DWORD *)(v15 + 2564);
        }
        else
        {
          ERECTL::bOffsetSubtract((ERECTL *)&v67, &v52, 0);
        }
        v36 = *(HSURF *)(*(_QWORD *)(v30 + 496) + 32LL);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v61);
        if ( v62[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v62);
        v37 = 8;
        while ( 1 )
        {
          v65[0] = 0LL;
          v65[1] = 0LL;
          v66 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v64, a1, 0);
          v38 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
          if ( v38 )
          {
            if ( *(_QWORD *)(v38 + 3440) )
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v38 + 3440))(*(_QWORD *)(v38 + 1768), &v58);
              if ( v9 == 258 )
              {
                v47 = Gre::Base::Globals(v39);
                KeDelayExecutionThread(0, 0, *((PLARGE_INTEGER *)v47 + 294));
                --v37;
              }
            }
          }
          else
          {
            v9 = -1073741823;
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v64);
          if ( v65[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v65);
          if ( v9 != 258 )
            break;
          if ( !v37 )
            goto LABEL_85;
        }
        if ( v9 >= 0 )
          return bSpDwmUpdateSurface(0LL, v58, a1, v36, 1.0, left, top, (struct ERECTL *)&v67, v11);
LABEL_85:
        if ( v11 )
          REGION::vDeleteREGION(v11);
      }
      return 0LL;
    }
    v28 = *(_QWORD *)(v59 + 144);
    if ( (*(_DWORD *)(v28 + 252) & 0x80u) == 0 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v29 )
        v29 += 24LL;
      if ( *(_QWORD *)(v28 + 184) == v29 )
      {
        if ( *(_QWORD *)(v28 + 80) )
        {
          v56 = *(_QWORD *)(v28 + 80);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v49);
          if ( v56 )
          {
            if ( v49 )
            {
              if ( !RGNOBJ::bContain((RGNOBJ *)&v56, &v67) )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
                if ( v51 )
                {
                  v40 = *(_DWORD *)(v27 + 60);
                  v41 = *(_DWORD *)(v27 + 64);
                  v68.left = *(_DWORD *)(v27 + 56);
                  v68.top = v40;
                  v68.right = v41;
                  v42 = *(_DWORD *)(v27 + 68);
                  v57.x = v68.left;
                  v57.y = v40;
                  v68.bottom = v42;
                  ERECTL::bOffsetSubtract((ERECTL *)&v68, &v57, 0);
                  RGNOBJ::vSet((RGNOBJ *)&v49, &v68);
                  if ( RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v56, 4) )
                  {
                    v11 = v51;
                    v24 = 1;
                  }
                  else if ( v51 )
                  {
                    REGION::vDeleteREGION(v51);
                  }
                }
              }
            }
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v49);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
          if ( !v24 )
            goto LABEL_37;
        }
        else
        {
          v24 = 1;
        }
        v43 = *(_QWORD *)(v28 + 184);
        v69 = 0LL;
        if ( v43 )
        {
          v44 = *(_DWORD *)(v43 + 32);
          v45 = *(_DWORD *)(v43 + 36);
        }
        else
        {
          v45 = HIDWORD(v69);
          v44 = v69;
        }
        v52.x = *(_DWORD *)(v27 + 56);
        v46 = *(_DWORD *)(v27 + 60);
        *(_QWORD *)&v67.left = 0LL;
        v67.right = v44;
        v67.bottom = v45;
        *(_DWORD *)(v28 + 252) |= 0x80u;
        v52.y = v46;
        if ( v11 )
        {
          v69 = *((_QWORD *)v11 + 7);
          v70 = *((_DWORD *)v11 + 16);
          v71 = *((_DWORD *)v11 + 17);
          ERECTL::operator*=(&v67, &v69);
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v67) )
          {
            REGION::vDeleteREGION(v11);
            *(_DWORD *)(v28 + 252) |= 0x80u;
            v24 = 0;
          }
        }
      }
    }
LABEL_37:
    v25 = v50;
    if ( v27 )
      _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
    goto LABEL_39;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v61);
  return 1LL;
}
