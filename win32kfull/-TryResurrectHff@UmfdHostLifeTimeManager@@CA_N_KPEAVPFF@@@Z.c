char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(_OWORD *a1, struct PFF *a2)
{
  __int64 v3; // rsi
  void **v5; // rbx
  unsigned int v6; // ebp
  unsigned int *v7; // r12
  unsigned __int64 v8; // r14
  void **v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  _BYTE *FontFile; // rax
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF
  void **v18; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 9);
  v16[0] = *((_QWORD *)a2 + 11);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v18, 12 * v3);
  v5 = v18;
  if ( v18 )
  {
    v6 = 0;
    v7 = (unsigned int *)&v18[v3];
    if ( (_DWORD)v3 )
    {
      v8 = 0LL;
      v9 = &v18[v3];
      while ( 1 )
      {
        v10 = *(_QWORD *)(v8 + *((_QWORD *)a2 + 25));
        if ( !*(_QWORD *)(v10 + 16) )
        {
          v19 = 0LL;
          v17 = 0;
          if ( !(unsigned int)EngMapFontFileFDInternal(v10, &v19, &v17, 0) )
            break;
        }
        ++v6;
        v5[v8 / 8] = *(void **)(*(_QWORD *)(*((_QWORD *)a2 + 25) + v8) + 16LL);
        v11 = *(_QWORD *)(*((_QWORD *)a2 + 25) + v8);
        v8 += 8LL;
        *(_DWORD *)v9 = *(_DWORD *)(v11 + 24);
        v9 = (void **)((char *)v9 + 4);
        if ( v6 >= (unsigned int)v3 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (unsigned int)UmfdInsertFontFileViewForLookup(*((struct _FONTFILEVIEW ***)a2 + 25), *((_DWORD *)a2 + 9)) )
      {
        v13 = Gre::Base::Globals(v12);
        FontFile = (_BYTE *)PDEVOBJ::LoadFontFile(
                              (PDEVOBJ *)v16,
                              *((_DWORD *)a2 + 9),
                              *((unsigned __int64 **)a2 + 25),
                              v5,
                              v7,
                              *((struct tagDESIGNVECTOR **)a2 + 5),
                              *((unsigned __int16 *)v13 + 76),
                              0);
        if ( FontFile != (_BYTE *)0xFFFFFFFFLL )
        {
          if ( FontFile )
          {
            FontFile[12] = 1;
            *a1 = *(_OWORD *)FontFile;
            EngFreeMem(FontFile);
            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v18);
            return 1;
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v18);
  return 0;
}
