/*
 * XREFs of xxxSetClassData @ 0x1C0115230
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C0115194 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01E3BEC (xxxSetClassLong.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MapClientToServerPfn @ 0x1C00622BC (MapClientToServerPfn.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C007F75C (MapClientNeuterToClientPfn.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00E3DB8 (GetCPD.c)
 *     ClassLock @ 0x1C00F56D8 (ClassLock.c)
 *     xxxClientWOWGetProcModule @ 0x1C00F6CF4 (xxxClientWOWGetProcModule.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C01105E4 (AllocateUnicodeString.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A278 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C015A290 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     MapServerToClientPfn @ 0x1C025AE20 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // r11d
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v16; // rdi
  _DWORD *v17; // rax
  char v18; // cl
  __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  int ClassStyle; // ebx
  __int64 v24; // rdi
  __int64 v25; // rcx
  void *v26; // rax
  _DWORD *v27; // rax
  char v28; // cl
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  PWSTR Buffer; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r11
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
  __int64 v51; // rdi
  __int64 v52; // rdx
  struct _CALLPROCDATA **v53; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v55; // rbx
  __int64 v56; // rax
  _QWORD v57[4]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  struct _UNICODE_STRING v60; // [rsp+58h] [rbp-70h] BYREF
  __int128 v61; // [rsp+68h] [rbp-60h] BYREF
  __int64 v62; // [rsp+78h] [rbp-50h]
  __int128 v63; // [rsp+80h] [rbp-48h] BYREF
  __int64 v64; // [rsp+90h] [rbp-38h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v57, *((_QWORD *)a1 + 17));
  v9 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v60 = 0LL;
  DestinationString = 0LL;
  if ( (_DWORD)v6 == -24 )
  {
    v10 = *(_QWORD *)v57[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) & 1) != 0 )
    {
      v12 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 32LL), a4);
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) &= ~1u;
      if ( a4 )
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) |= 2u;
    }
    else
    {
      v12 = MapClientNeuterToClientPfn(v10, 0LL, a4);
      if ( v12 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 32LL)
        && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v11 = 2 - (a4 != 0);
      }
    }
    if ( v11 )
    {
      CPD = GetCPD(*(_QWORD *)v57[0], v11 | 0x10u, v12);
      if ( CPD )
        v12 = CPD;
    }
    if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
    {
      v49 = HMValidateHandleNoRip(a3, 7);
      if ( v49 )
        a3 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 16LL);
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 32LL) = a3;
    v13 = MapClientToServerPfn(a3);
    if ( v13 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 32LL) = v13;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) |= 1u;
    }
    else if ( a4 )
    {
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) |= 2u;
      goto LABEL_11;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) &= ~2u;
LABEL_11:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) & 8) != 0 )
    {
      v50 = *(int *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 12LL);
      v51 = *(_QWORD *)(*(_QWORD *)v57[0] + 8LL);
      v61 = 0LL;
      v62 = 0LL;
      if ( (unsigned int)ClassLock(*(_QWORD *)v57[0], &v61) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) & 1) == 0 )
          LOWORD(v9) = xxxClientWOWGetProcModule(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 32LL));
        *(_WORD *)(v50 + v51 + 94) = v9;
        v53 = *(struct _CALLPROCDATA ***)v57[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v61;
        ClassUnlockWorker(v53);
      }
      else
      {
        UserSetLastError(5LL, v52);
        *(_WORD *)(v50 + v51 + 94) = 0;
      }
    }
    v14 = v12;
    goto LABEL_13;
  }
  if ( (_DWORD)v6 != -34 )
  {
    switch ( (_DWORD)v6 )
    {
      case 0xFFFFFFE3:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) & 8) != 0 )
          *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 88LL) = a3;
        goto LABEL_117;
      case 0xFFFFFFEC:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v44 = *(int *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 12LL);
          v45 = *(_QWORD *)(*(_QWORD *)v57[0] + 8LL);
          if ( (*(_BYTE *)(v45 + 6) & 0x10) == 0 )
          {
            *(_WORD *)(v44 + v45 + 92) = a3;
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 6LL) |= 0x10u;
            v46 = *(int *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 12LL);
            SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v57);
            return v46;
          }
          v14 = *(unsigned __int16 *)(v44 + v45 + 92);
          *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 92LL) = a3;
LABEL_13:
          SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v57);
          return v14;
        }
        v47 = 87LL;
        goto LABEL_116;
      case 0xFFFFFFEE:
        v40 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 80LL)
                           + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 84LL));
        v41 = 0;
        v42 = &gDefaultServerClasses;
        while ( **(_WORD **)(*(_QWORD *)v57[0] + 8LL) != *(_WORD *)(gpsi + 2LL * ((*v42 >> 3) & 0x1F) + 868) )
        {
          ++v41;
          v42 += 12;
          if ( v41 >= 8 )
            goto LABEL_91;
        }
        v8 = *((unsigned int *)&gDefaultServerClasses + 12 * v41 + 6);
        v43 = *(_QWORD *)(*(_QWORD *)v57[0] + 8LL);
        if ( a3 >= v8 )
        {
          *(_DWORD *)(v43 + 84) = v8;
          LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 84LL);
        }
        else
        {
          if ( _bittest16((const signed __int16 *)(v43 + 6), 9u) )
            goto LABEL_115;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 84LL) = 0;
        }
LABEL_91:
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 80LL) = a3;
        v9 = v40;
        goto LABEL_37;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v22 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v8 = v6;
            v58 = v6;
            if ( *((_BYTE *)&dword_1C02E9CF4[23] + v6 + 2) )
            {
              v16 = *(_QWORD *)(*(_QWORD *)v57[0] + 56LL);
              if ( v16 != *(_QWORD *)v57[0] )
              {
                if ( v57[0] != gSmartObjNullRef && !--*(_DWORD *)(v57[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v57[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v57[0]);
                    v8 = v6;
                  }
                }
                if ( v16 )
                {
                  v57[0] = *(_QWORD *)(v16 + 128);
                  ++*(_DWORD *)(v57[0] + 8LL);
                }
                else
                {
                  v57[0] = gSmartObjNullRef;
                }
              }
              v17 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + *((unsigned __int8 *)&dword_1C02E9CF4[23] + v8 + 2));
              v18 = byte_1C02E9D7A[v8];
              if ( v18 == 4 )
              {
                v19 = (unsigned int)*v17;
                *v17 = a3;
                if ( (_DWORD)v19 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  DirtyVisRgnTrackers(a1);
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v24 = *(_QWORD *)a1;
                  v26 = (void *)ReferenceDwmApiPort(v25);
                  DwmAsyncChildStyleChange(v26, v24, -26, ClassStyle);
                }
              }
              else if ( v18 == 8 )
              {
                v19 = *(_QWORD *)v17;
                *(_QWORD *)v17 = a3;
              }
              else
              {
                v19 = *(unsigned __int16 *)v17;
                *(_WORD *)v17 = a3;
              }
              v20 = *(_QWORD *)(*(_QWORD *)v57[0] + 64LL);
              if ( v20 != *(_QWORD *)v57[0] )
              {
                if ( v57[0] != gSmartObjNullRef && !--*(_DWORD *)(v57[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v57[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v57[0]);
                }
                if ( v20 )
                {
                  v57[0] = *(_QWORD *)(v20 + 128);
                  ++*(_DWORD *)(v57[0] + 8LL);
                }
                else
                {
                  v57[0] = gSmartObjNullRef;
                }
              }
              v21 = v58;
              while ( *(_QWORD *)v57[0] )
              {
                v27 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL)
                               + *((unsigned __int8 *)&dword_1C02E9CF4[23] + v21 + 2));
                v28 = byte_1C02E9D7A[v21];
                if ( v28 == 4 )
                {
                  v19 = (unsigned int)*v27;
                  *v27 = a3;
                }
                else if ( v28 == 8 )
                {
                  v19 = *(_QWORD *)v27;
                  *(_QWORD *)v27 = a3;
                }
                else
                {
                  v19 = *(unsigned __int16 *)v27;
                  *(_WORD *)v27 = a3;
                }
                v29 = **(_QWORD **)v57[0];
                if ( v29 != *(_QWORD *)v57[0] )
                {
                  if ( v57[0] != gSmartObjNullRef && !--*(_DWORD *)(v57[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v57[0] + 12LL) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v57[0]);
                  }
                  if ( v29 )
                  {
                    v57[0] = *(_QWORD *)(v29 + 128);
                    ++*(_DWORD *)(v57[0] + 8LL);
                  }
                  else
                  {
                    v57[0] = gSmartObjNullRef;
                  }
                }
              }
              v9 = v19;
              goto LABEL_37;
            }
          }
          v22 = 1413LL;
        }
        UserSetLastError(v22, v8);
LABEL_37:
        SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v57);
        return v9;
      }
      v30 = *(_QWORD *)(*(_QWORD *)v57[0] + 96LL);
      v31 = *(_QWORD *)(a3 + 16);
      v32 = *(_QWORD *)(v31 + 8);
      if ( (v32 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v37 = *(_QWORD *)v57[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 40LL) = v32;
        *(_QWORD *)(v37 + 96) = v32;
        goto LABEL_78;
      }
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v31 + 8));
      if ( !DestinationString.Length )
      {
        v33 = *(_QWORD *)v57[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v33 + 96) = 0LL;
LABEL_78:
        *(_QWORD *)(a3 + 16) = 0LL;
        if ( (v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Win32FreePool(v30);
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 16LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 16LL) = *(_QWORD *)a3;
        *(_QWORD *)a3 = v38;
        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 24LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39;
        if ( a4 )
          v9 = *(_QWORD *)a3;
        else
          v9 = v39;
        goto LABEL_37;
      }
      if ( (unsigned int)AllocateUnicodeString(&v60, &DestinationString.Length) )
      {
        v34 = *(_QWORD *)v57[0];
        Buffer = v60.Buffer;
        v36 = (__int64)v60.Buffer;
        if ( ((unsigned __int64)v60.Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v36 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57[0] + 8LL) + 40LL) = v36;
        *(_QWORD *)(v34 + 96) = Buffer;
        goto LABEL_78;
      }
      *(_QWORD *)(a3 + 16) = 0LL;
      goto LABEL_117;
    }
  }
  if ( (unsigned int)ClassLock(*(_QWORD *)v57[0], &v63) )
  {
    v14 = xxxSetClassCursor(a1, *(struct tagCLS **)v57[0], v6, a3);
    v55 = *(struct _CALLPROCDATA ***)v57[0];
    v56 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v56 + 16) = v63;
    ClassUnlockWorker(v55);
    goto LABEL_13;
  }
LABEL_115:
  v47 = 5LL;
LABEL_116:
  UserSetLastError(v47, v8);
LABEL_117:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v57);
  return 0LL;
}
