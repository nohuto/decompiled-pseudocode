/*
 * XREFs of xxxSetClassData @ 0x1C00FC29C
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C00FC1DC (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C0161E4C (xxxSetClassLong.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     xxxClientWOWGetProcModule @ 0x1C004F8BC (xxxClientWOWGetProcModule.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     GetCPD @ 0x1C0078B60 (GetCPD.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD4F8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BFE0C (MapClientNeuterToClientPfn.c)
 *     DwmGetClassStyle @ 0x1C00EA4A8 (DwmGetClassStyle.c)
 *     MapClientToServerPfn @ 0x1C00FC888 (MapClientToServerPfn.c)
 *     ClassLock @ 0x1C0101110 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C010F6F0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C0124764 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C01614A8 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C016822C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8E2C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  _DWORD *v12; // rax
  char v13; // cl
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v18; // rcx
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rcx
  int ClassStyle; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  _DWORD *v26; // rax
  char v27; // cl
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  const WCHAR *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r11
  unsigned int v41; // r9d
  _DWORD *v42; // r10
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 CPD; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rsi
  __int64 v53; // rdx
  __int64 v54; // r8
  struct tagCLS *v55; // rbx
  __int64 ThreadWin32Thread; // rax
  struct tagCLS *v57; // rbx
  __int64 v58; // rax
  __int64 v59[4]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+40h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  __int128 v62; // [rsp+58h] [rbp-70h] BYREF
  __int128 v63; // [rsp+68h] [rbp-60h] BYREF
  __int64 v64; // [rsp+78h] [rbp-50h]
  __int128 v65; // [rsp+80h] [rbp-48h] BYREF
  __int64 v66; // [rsp+90h] [rbp-38h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v59, *((_QWORD *)a1 + 17));
  v10 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v62 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v18 = *(_QWORD *)v59[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v14 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL), a4);
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) |= 2u;
      }
      else
      {
        v14 = MapClientNeuterToClientPfn(v18, 0LL, a4);
        if ( v14 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v19 = 2 - (a4 != 0);
        }
      }
      if ( v19 )
      {
        CPD = GetCPD(*(_QWORD *)v59[0], v19 | 0x10u, v14);
        if ( CPD )
          v14 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v49 = HMValidateHandleNoRip(a3, 7);
        if ( v49 )
          a3 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL) = a3;
      v20 = MapClientToServerPfn(a3);
      if ( v20 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL) = v20;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) |= 2u;
LABEL_37:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v50 = *(int *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL);
          v51 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
          v63 = 0LL;
          v64 = 0LL;
          if ( (unsigned int)ClassLock(*(_QWORD *)v59[0], &v63) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 1) == 0 )
              LOWORD(v10) = xxxClientWOWGetProcModule(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL));
            *(_WORD *)(v50 + v51 + 94) = v10;
            v55 = *(struct tagCLS **)v59[0];
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v63;
            ClassUnlockWorker(v55);
          }
          else
          {
            UserSetLastError(5LL, v53, v54);
            *(_WORD *)(v50 + v51 + 94) = 0;
          }
        }
        goto LABEL_24;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) &= ~2u;
      goto LABEL_37;
    case 0xFFFFFFDE:
LABEL_114:
      if ( (unsigned int)ClassLock(*(_QWORD *)v59[0], &v65) )
      {
        v10 = xxxSetClassCursor(a1, *(struct tagCLS **)v59[0], v6, a3);
        v57 = *(struct tagCLS **)v59[0];
        v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(v58 + 16) = v65;
        ClassUnlockWorker(v57);
        goto LABEL_25;
      }
LABEL_116:
      v47 = 5LL;
      goto LABEL_117;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 8) != 0 )
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 88LL) = a3;
      goto LABEL_118;
  }
  if ( (_DWORD)v6 != -20 )
  {
    if ( (_DWORD)v6 == -18 )
    {
      v40 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 84LL));
      v41 = 0;
      v42 = &gDefaultServerClasses;
      while ( 1 )
      {
        v9 = (*v42 >> 3) & 0x1F;
        if ( **(_WORD **)(*(_QWORD *)v59[0] + 8LL) == *(_WORD *)(gpsi + 2 * v9 + 868) )
          break;
        ++v41;
        v42 += 12;
        if ( v41 >= 8 )
          goto LABEL_92;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * v41 + 6);
      v43 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v43 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v43 + 6) & 0x200) != 0 )
          goto LABEL_116;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 84LL) = 0;
      }
LABEL_92:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 80LL) = a3;
      v10 = v40;
      goto LABEL_25;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v21 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v8 = v6;
            v60 = v6;
            v9 = 0x1C0000000uLL;
            if ( *((_BYTE *)&dword_1C02ED294[23] + v6 + 2) )
            {
              v11 = *(_QWORD *)(*(_QWORD *)v59[0] + 56LL);
              if ( v11 != *(_QWORD *)v59[0] )
              {
                if ( v59[0] != gSmartObjNullRef && !--*(_DWORD *)(v59[0] + 8) )
                {
                  if ( *(_BYTE *)(v59[0] + 12) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v59[0]);
                    v8 = v6;
                  }
                }
                if ( v11 )
                {
                  v59[0] = *(_QWORD *)(v11 + 128);
                  ++*(_DWORD *)(v59[0] + 8);
                }
                else
                {
                  v59[0] = gSmartObjNullRef;
                }
              }
              v12 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + *((unsigned __int8 *)&dword_1C02ED294[23] + v8 + 2));
              v13 = byte_1C02ED31A[v8];
              if ( v13 == 4 )
              {
                v14 = (unsigned int)*v12;
                *v12 = a3;
                if ( (_DWORD)v14 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  DirtyVisRgnTrackers(a1);
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v25 = (void *)ReferenceDwmApiPort(v24, v23);
                  DwmAsyncChildStyleChange(v25, *(_QWORD *)a1, -26, ClassStyle);
                }
              }
              else if ( v13 == 8 )
              {
                v14 = *(_QWORD *)v12;
                *(_QWORD *)v12 = a3;
              }
              else
              {
                v14 = *(unsigned __int16 *)v12;
                *(_WORD *)v12 = a3;
              }
              v15 = *(_QWORD *)(*(_QWORD *)v59[0] + 64LL);
              if ( v15 != *(_QWORD *)v59[0] )
              {
                if ( v59[0] != gSmartObjNullRef && !--*(_DWORD *)(v59[0] + 8) )
                {
                  if ( *(_BYTE *)(v59[0] + 12) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v59[0]);
                }
                if ( v15 )
                {
                  v59[0] = *(_QWORD *)(v15 + 128);
                  ++*(_DWORD *)(v59[0] + 8);
                }
                else
                {
                  v59[0] = gSmartObjNullRef;
                }
              }
              v16 = v60;
              while ( *(_QWORD *)v59[0] )
              {
                v26 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL)
                               + *((unsigned __int8 *)&dword_1C02ED294[23] + v16 + 2));
                v27 = byte_1C02ED31A[v16];
                if ( v27 == 4 )
                {
                  v14 = (unsigned int)*v26;
                  *v26 = a3;
                }
                else if ( v27 == 8 )
                {
                  v14 = *(_QWORD *)v26;
                  *(_QWORD *)v26 = a3;
                }
                else
                {
                  v14 = *(unsigned __int16 *)v26;
                  *(_WORD *)v26 = a3;
                }
                v28 = **(_QWORD **)v59[0];
                if ( v28 != *(_QWORD *)v59[0] )
                {
                  if ( v59[0] != gSmartObjNullRef && !--*(_DWORD *)(v59[0] + 8) )
                  {
                    if ( *(_BYTE *)(v59[0] + 12) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v59[0]);
                  }
                  if ( v28 )
                  {
                    v59[0] = *(_QWORD *)(v28 + 128);
                    ++*(_DWORD *)(v59[0] + 8);
                  }
                  else
                  {
                    v59[0] = gSmartObjNullRef;
                  }
                }
              }
LABEL_24:
              v10 = v14;
LABEL_25:
              SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v59);
              return v10;
            }
          }
          v21 = 1413LL;
        }
        UserSetLastError(v21, v8, v9);
        goto LABEL_25;
      }
      v29 = *(_QWORD *)(*(_QWORD *)v59[0] + 96LL);
      v30 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v35 = *(_QWORD *)v59[0];
        v36 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL);
        v37 = v36;
        if ( (v36 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v37 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 40LL) = v37;
        *(_QWORD *)(v35 + 96) = v36;
        goto LABEL_79;
      }
      RtlInitUnicodeString(&DestinationString, v30);
      if ( !DestinationString.Length )
      {
        v31 = *(_QWORD *)v59[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v31 + 96) = 0LL;
LABEL_79:
        *(_QWORD *)(a3 + 16) = 0LL;
        if ( (v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Win32FreePool((void *)v29);
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 16LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 16LL) = *(_QWORD *)a3;
        *(_QWORD *)a3 = v38;
        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 24LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39;
        if ( a4 )
          v10 = *(_QWORD *)a3;
        else
          v10 = v39;
        goto LABEL_25;
      }
      if ( (unsigned int)AllocateUnicodeString(&v62, &DestinationString) )
      {
        v32 = *(_QWORD *)v59[0];
        v33 = *((_QWORD *)&v62 + 1);
        v34 = *((_QWORD *)&v62 + 1);
        if ( (*((_QWORD *)&v62 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v34 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 40LL) = v34;
        *(_QWORD *)(v32 + 96) = v33;
        goto LABEL_79;
      }
      *(_QWORD *)(a3 + 16) = 0LL;
      goto LABEL_118;
    }
    goto LABEL_114;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v47 = 87LL;
LABEL_117:
    UserSetLastError(v47, v8, v9);
LABEL_118:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v59);
    return 0LL;
  }
  v44 = *(int *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL);
  v45 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
  if ( (*(_BYTE *)(v45 + 6) & 0x10) != 0 )
  {
    v10 = *(unsigned __int16 *)(v44 + v45 + 92);
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 92LL) = a3;
    goto LABEL_25;
  }
  *(_WORD *)(v44 + v45 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) |= 0x10u;
  v46 = *(int *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v59);
  return v46;
}
