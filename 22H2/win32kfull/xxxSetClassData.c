/*
 * XREFs of xxxSetClassData @ 0x1C00ADD68
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C00ADCA8 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01BE4C0 (xxxSetClassLong.c)
 * Callees:
 *     GetCPD @ 0x1C000ECF4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013364 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00135D0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ClassLock @ 0x1C00135F8 (ClassLock.c)
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     DwmGetClassStyle @ 0x1C005A604 (DwmGetClassStyle.c)
 *     AllocateUnicodeString @ 0x1C00B1008 (AllocateUnicodeString.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     MapClientNeuterToClientPfn @ 0x1C00CAF2C (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C00CC3D0 (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C013A68C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     MapServerToClientPfn @ 0x1C024C854 (MapServerToClientPfn.c)
 */

_QWORD *__fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  struct tagCLS *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  _DWORD *v18; // rax
  char v19; // cl
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  void *v25; // rax
  _DWORD *v26; // rax
  char v27; // cl
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // r8
  unsigned __int64 v39; // r11
  unsigned int v40; // r9d
  _DWORD *v41; // r10
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 CPD; // rax
  __int64 v46; // rax
  _QWORD v47[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v48; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-70h] BYREF
  __int128 v50; // [rsp+58h] [rbp-60h] BYREF
  __int128 v51; // [rsp+68h] [rbp-50h] BYREF
  __int64 v52; // [rsp+78h] [rbp-40h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v47, *((_QWORD *)a1 + 17));
  v8 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v12 = *(_QWORD *)v47[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v13 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL), a4);
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) |= 2u;
      }
      else
      {
        v13 = MapClientNeuterToClientPfn(v12, 0LL, a4);
        if ( v13 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v14 = 2 - (a4 != 0);
        }
      }
      if ( v14 )
      {
        CPD = GetCPD(*(_QWORD *)v47[0], v14 | 0x10u, v13);
        if ( CPD )
          v13 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v46 = HMValidateHandleNoRip(a3, 7);
        if ( v46 )
          a3 = *(_QWORD *)(*(_QWORD *)(v46 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 32LL) = a3;
      v15 = MapClientToServerPfn(a3);
      if ( v15 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 32LL) = v15;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) |= 2u;
        goto LABEL_15;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 6LL) &= ~2u;
LABEL_15:
      v8 = (_QWORD *)v13;
      goto LABEL_5;
    case 0xFFFFFFF4:
    case 0xFFFFFFDE:
      goto LABEL_107;
    case 0xFFFFFFE3:
      goto LABEL_104;
    case 0xFFFFFFEC:
      v44 = 87LL;
LABEL_103:
      UserSetLastError(v44);
      goto LABEL_104;
    case 0xFFFFFFEE:
      v39 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 84LL));
      v40 = 0;
      v41 = &gDefaultServerClasses;
      while ( **(_WORD **)(*(_QWORD *)v47[0] + 8LL) != *(_WORD *)(gpsi + 2LL * ((*v41 >> 3) & 0x1F) + 868) )
      {
        ++v40;
        v41 += 12;
        if ( v40 >= 8 )
          goto LABEL_91;
      }
      v42 = *((unsigned int *)&gDefaultServerClasses + 12 * v40 + 6);
      v43 = *(_QWORD *)(*(_QWORD *)v47[0] + 8LL);
      if ( a3 >= v42 )
      {
        *(_DWORD *)(v43 + 84) = v42;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 84LL);
      }
      else
      {
        if ( _bittest16((const signed __int16 *)(v43 + 6), 9u) )
          goto LABEL_102;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 84LL) = 0;
      }
LABEL_91:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 80LL) = a3;
      v8 = (_QWORD *)v39;
      goto LABEL_5;
    case 0xFFFFFFF2:
LABEL_107:
      if ( (unsigned int)ClassLock(*(_QWORD *)v47[0], (__int64)&v51) )
      {
        v8 = xxxSetClassCursor(a1, *(struct tagCLS **)v47[0], v6, a3);
        v9 = *(struct tagCLS **)v47[0];
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v51;
        ClassUnlockWorker(v9);
        goto LABEL_5;
      }
LABEL_102:
      v44 = 5LL;
      goto LABEL_103;
  }
  if ( (_DWORD)v6 != -8 )
  {
    if ( (_DWORD)v6 == -32 )
    {
      v23 = 87LL;
    }
    else
    {
      if ( (int)v6 + 34 >= 0 )
      {
        _mm_lfence();
        v16 = v6;
        v48 = v6;
        if ( byte_1C0319032[v6 + 40] )
        {
          v17 = *(_QWORD *)(*(_QWORD *)v47[0] + 56LL);
          if ( v17 != *(_QWORD *)v47[0] )
          {
            if ( v47[0] != gSmartObjNullRef && !--*(_DWORD *)(v47[0] + 8LL) )
            {
              if ( *(_BYTE *)(v47[0] + 12LL) )
              {
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v47[0]);
                v16 = v6;
              }
            }
            if ( v17 )
            {
              v47[0] = *(_QWORD *)(v17 + 128);
              ++*(_DWORD *)(v47[0] + 8LL);
            }
            else
            {
              v47[0] = gSmartObjNullRef;
            }
          }
          v18 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + (unsigned __int8)byte_1C0319032[v16 + 40]);
          v19 = byte_1C0319032[v16];
          if ( v19 == 4 )
          {
            v20 = (unsigned int)*v18;
            *v18 = a3;
            if ( (_DWORD)v6 == -26 && (_DWORD)v20 != (_DWORD)a3 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              DirtyVisRgnTrackers(a1);
              DwmGetClassStyle((__int64)a1);
              v25 = (void *)ReferenceDwmApiPort(v24);
              DwmAsyncChildStyleChange(v25);
            }
          }
          else if ( v19 == 8 )
          {
            v20 = *(_QWORD *)v18;
            *(_QWORD *)v18 = a3;
          }
          else
          {
            v20 = *(unsigned __int16 *)v18;
            *(_WORD *)v18 = a3;
          }
          v21 = *(_QWORD *)(*(_QWORD *)v47[0] + 64LL);
          if ( v21 != *(_QWORD *)v47[0] )
          {
            if ( v47[0] != gSmartObjNullRef && !--*(_DWORD *)(v47[0] + 8LL) )
            {
              if ( *(_BYTE *)(v47[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v47[0]);
            }
            if ( v21 )
            {
              v47[0] = *(_QWORD *)(v21 + 128);
              ++*(_DWORD *)(v47[0] + 8LL);
            }
            else
            {
              v47[0] = gSmartObjNullRef;
            }
          }
          v22 = v48;
          while ( *(_QWORD *)v47[0] )
          {
            v26 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + (unsigned __int8)byte_1C0319032[v22 + 40]);
            v27 = byte_1C0319032[v22];
            if ( v27 == 4 )
            {
              v20 = (unsigned int)*v26;
              *v26 = a3;
            }
            else if ( v27 == 8 )
            {
              v20 = *(_QWORD *)v26;
              *(_QWORD *)v26 = a3;
            }
            else
            {
              v20 = *(unsigned __int16 *)v26;
              *(_WORD *)v26 = a3;
            }
            v28 = **(_QWORD **)v47[0];
            if ( v28 != *(_QWORD *)v47[0] )
            {
              if ( v47[0] != gSmartObjNullRef && !--*(_DWORD *)(v47[0] + 8LL) )
              {
                if ( *(_BYTE *)(v47[0] + 12LL) )
                  Win32FreeToPagedLookasideList(gpStackRefLookAside, v47[0]);
              }
              if ( v28 )
              {
                v47[0] = *(_QWORD *)(v28 + 128);
                ++*(_DWORD *)(v47[0] + 8LL);
              }
              else
              {
                v47[0] = gSmartObjNullRef;
              }
            }
          }
          v8 = (_QWORD *)v20;
          goto LABEL_5;
        }
      }
      v23 = 1413LL;
    }
    UserSetLastError(v23);
LABEL_5:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v47);
    return v8;
  }
  v29 = *(_QWORD *)(*(_QWORD *)v47[0] + 96LL);
  v30 = *(_QWORD *)(a3 + 16);
  v31 = *(_QWORD *)(v30 + 8);
  if ( (v31 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v36 = *(_QWORD *)v47[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 40LL) = v31;
    *(_QWORD *)(v36 + 96) = v31;
    goto LABEL_78;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v30 + 8));
  if ( !DestinationString.Length )
  {
    v32 = *(_QWORD *)v47[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 40LL) = 0LL;
    *(_QWORD *)(v32 + 96) = 0LL;
LABEL_78:
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v29);
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 16LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 16LL) = *(_QWORD *)a3;
    *(_QWORD *)a3 = v37;
    v38 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 24LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v38;
    if ( a4 )
      v8 = *(_QWORD **)a3;
    else
      v8 = v38;
    goto LABEL_5;
  }
  if ( (unsigned int)AllocateUnicodeString(&v50, &DestinationString) )
  {
    v33 = *(_QWORD *)v47[0];
    v34 = *((_QWORD *)&v50 + 1);
    v35 = *((_QWORD *)&v50 + 1);
    if ( (*((_QWORD *)&v50 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v35 = -1LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 8LL) + 40LL) = v35;
    *(_QWORD *)(v33 + 96) = v34;
    goto LABEL_78;
  }
  *(_QWORD *)(a3 + 16) = 0LL;
LABEL_104:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v47);
  return 0LL;
}
