_QWORD *__fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  struct tagCLS *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  _DWORD *v19; // rax
  char v20; // cl
  unsigned __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdi
  int v24; // ecx
  int ClassStyle; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  void *v28; // rax
  _DWORD *v29; // rax
  char v30; // cl
  __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  PWSTR Buffer; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // r8
  unsigned __int64 v42; // r11
  unsigned int v43; // r9d
  _DWORD *v44; // r10
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // ecx
  __int64 CPD; // rax
  __int64 v49; // rax
  _QWORD v50[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v51; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-70h] BYREF
  struct _UNICODE_STRING v53; // [rsp+58h] [rbp-60h] BYREF
  __int128 v54; // [rsp+68h] [rbp-50h] BYREF
  __int64 v55; // [rsp+78h] [rbp-40h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v50, *((_QWORD *)a1 + 17));
  v8 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v12 = *(_QWORD *)v50[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v14 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL), a4);
        v13 = *(_QWORD *)v50[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v13 = *(_QWORD *)v50[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v14 = MapClientNeuterToClientPfn(v12, 0LL, a4);
        if ( v14 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v15 = 2 - (a4 != 0);
        }
      }
      if ( v15 )
      {
        CPD = GetCPD(*(_QWORD *)v50[0], v15 | 0x10u, v14);
        if ( CPD )
          v14 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v13) = 7;
        v49 = HMValidateHandleNoRip(a3, v13);
        if ( v49 )
          a3 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = a3;
      v16 = MapClientToServerPfn(a3);
      if ( v16 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = v16;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) |= 2u;
        goto LABEL_15;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) &= ~2u;
LABEL_15:
      v8 = (_QWORD *)v14;
      goto LABEL_5;
    case 0xFFFFFFF4:
    case 0xFFFFFFDE:
      goto LABEL_107;
    case 0xFFFFFFE3:
      goto LABEL_104;
    case 0xFFFFFFEC:
      v47 = 87;
LABEL_103:
      UserSetLastError(v47);
      goto LABEL_104;
    case 0xFFFFFFEE:
      v42 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL));
      v43 = 0;
      v44 = &gDefaultServerClasses;
      while ( **(_WORD **)(*(_QWORD *)v50[0] + 8LL) != *(_WORD *)(gpsi + 2LL * ((*v44 >> 3) & 0x1F) + 868) )
      {
        ++v43;
        v44 += 12;
        if ( v43 >= 8 )
          goto LABEL_91;
      }
      v45 = *((unsigned int *)&gDefaultServerClasses + 12 * v43 + 6);
      v46 = *(_QWORD *)(*(_QWORD *)v50[0] + 8LL);
      if ( a3 >= v45 )
      {
        *(_DWORD *)(v46 + 84) = v45;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL);
      }
      else
      {
        if ( _bittest16((const signed __int16 *)(v46 + 6), 9u) )
          goto LABEL_102;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL) = 0;
      }
LABEL_91:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) = a3;
      v8 = (_QWORD *)v42;
      goto LABEL_5;
    case 0xFFFFFFF2:
LABEL_107:
      if ( (unsigned int)ClassLock(*(_QWORD *)v50[0], (__int64)&v54) )
      {
        v8 = xxxSetClassCursor(a1, *(struct tagCLS **)v50[0], v6, a3);
        v9 = *(struct tagCLS **)v50[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v54;
        ClassUnlockWorker(v9);
        goto LABEL_5;
      }
LABEL_102:
      v47 = 5;
      goto LABEL_103;
  }
  if ( (_DWORD)v6 != -8 )
  {
    if ( (_DWORD)v6 == -32 )
    {
      v24 = 87;
    }
    else
    {
      if ( (int)v6 + 34 >= 0 )
      {
        _mm_lfence();
        v17 = v6;
        v51 = v6;
        if ( byte_1C031A962[v6] )
        {
          v18 = *(_QWORD *)(*(_QWORD *)v50[0] + 56LL);
          if ( v18 != *(_QWORD *)v50[0] )
          {
            if ( v50[0] != gSmartObjNullRef && !--*(_DWORD *)(v50[0] + 8LL) )
            {
              if ( *(_BYTE *)(v50[0] + 12LL) )
              {
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
                v17 = v6;
              }
            }
            if ( v18 )
            {
              v50[0] = *(_QWORD *)(v18 + 128);
              ++*(_DWORD *)(v50[0] + 8LL);
            }
            else
            {
              v50[0] = gSmartObjNullRef;
            }
          }
          v19 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + byte_1C031A962[v17]);
          v20 = byte_1C031A98A[v17];
          if ( v20 == 4 )
          {
            v21 = (unsigned int)*v19;
            *v19 = a3;
            if ( (_DWORD)v6 == -26 && (_DWORD)v21 != (_DWORD)a3 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              DirtyVisRgnTrackers((__int64)a1);
              ClassStyle = DwmGetClassStyle((__int64)a1);
              v26 = *(_QWORD *)a1;
              v28 = (void *)ReferenceDwmApiPort(v27);
              DwmAsyncChildStyleChange(v28, v26, -26, ClassStyle);
            }
          }
          else if ( v20 == 8 )
          {
            v21 = *(_QWORD *)v19;
            *(_QWORD *)v19 = a3;
          }
          else
          {
            v21 = *(unsigned __int16 *)v19;
            *(_WORD *)v19 = a3;
          }
          v22 = *(_QWORD *)(*(_QWORD *)v50[0] + 64LL);
          if ( v22 != *(_QWORD *)v50[0] )
          {
            if ( v50[0] != gSmartObjNullRef && !--*(_DWORD *)(v50[0] + 8LL) )
            {
              if ( *(_BYTE *)(v50[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
            }
            if ( v22 )
            {
              v50[0] = *(_QWORD *)(v22 + 128);
              ++*(_DWORD *)(v50[0] + 8LL);
            }
            else
            {
              v50[0] = gSmartObjNullRef;
            }
          }
          v23 = v51;
          while ( *(_QWORD *)v50[0] )
          {
            v29 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + byte_1C031A962[v23]);
            v30 = byte_1C031A98A[v23];
            if ( v30 == 4 )
            {
              v21 = (unsigned int)*v29;
              *v29 = a3;
            }
            else if ( v30 == 8 )
            {
              v21 = *(_QWORD *)v29;
              *(_QWORD *)v29 = a3;
            }
            else
            {
              v21 = *(unsigned __int16 *)v29;
              *(_WORD *)v29 = a3;
            }
            v31 = **(_QWORD **)v50[0];
            if ( v31 != *(_QWORD *)v50[0] )
            {
              if ( v50[0] != gSmartObjNullRef && !--*(_DWORD *)(v50[0] + 8LL) )
              {
                if ( *(_BYTE *)(v50[0] + 12LL) )
                  Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
              }
              if ( v31 )
              {
                v50[0] = *(_QWORD *)(v31 + 128);
                ++*(_DWORD *)(v50[0] + 8LL);
              }
              else
              {
                v50[0] = gSmartObjNullRef;
              }
            }
          }
          v8 = (_QWORD *)v21;
          goto LABEL_5;
        }
      }
      v24 = 1413;
    }
    UserSetLastError(v24);
LABEL_5:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v50);
    return v8;
  }
  v32 = *(_QWORD *)(*(_QWORD *)v50[0] + 96LL);
  v33 = *(_QWORD *)(a3 + 16);
  v34 = *(_QWORD *)(v33 + 8);
  if ( (v34 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v39 = *(_QWORD *)v50[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = v34;
    *(_QWORD *)(v39 + 96) = v34;
    goto LABEL_78;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v33 + 8));
  if ( !DestinationString.Length )
  {
    v35 = *(_QWORD *)v50[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = 0LL;
    *(_QWORD *)(v35 + 96) = 0LL;
LABEL_78:
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (v32 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v32);
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 16LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 16LL) = *(_QWORD *)a3;
    *(_QWORD *)a3 = v40;
    v41 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 24LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v41;
    if ( a4 )
      v8 = *(_QWORD **)a3;
    else
      v8 = v41;
    goto LABEL_5;
  }
  if ( (unsigned int)AllocateUnicodeString(&v53, (const void **)&DestinationString) )
  {
    v36 = *(_QWORD *)v50[0];
    Buffer = v53.Buffer;
    v38 = (__int64)v53.Buffer;
    if ( ((unsigned __int64)v53.Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v38 = -1LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = v38;
    *(_QWORD *)(v36 + 96) = Buffer;
    goto LABEL_78;
  }
  *(_QWORD *)(a3 + 16) = 0LL;
LABEL_104:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v50);
  return 0LL;
}
