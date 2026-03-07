char *__fastcall RFONTOBJ::pchTranslate(RFONTOBJ *this, const char *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 *v6; // r14
  int v7; // r15d
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rcx
  PVOID MappedBase; // [rsp+78h] [rbp+10h] BYREF
  struct _FONTFILE_PRINTKVIEW *v14; // [rsp+80h] [rbp+18h] BYREF

  MappedBase = 0LL;
  v14 = 0LL;
  if ( (unsigned __int64)a2 >= 0x10000 && a2 <= MmHighestUserAddress )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 80);
      if ( v5 )
      {
        v6 = *(__int64 **)(v4 + 200);
        if ( v6 )
        {
          v7 = 0;
          if ( *(_DWORD *)(v4 + 36) )
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( *v6 )
              {
                v9 = *(_QWORD *)(v8 + 104);
                if ( (v9 || (v9 = *(_QWORD *)(v8 + 16)) != 0)
                  && v9 <= (unsigned __int64)a2
                  && (unsigned __int64)a2 < v9 + *(unsigned int *)(v8 + 24) )
                {
                  if ( (unsigned int)bFindPrintKView(v5, v7, &v14) )
                  {
                    v10 = (char *)*((_QWORD *)v14 + 2);
                    if ( v10 )
                      return &v10[(_QWORD)a2 - v9];
                  }
                  v11 = *(void **)(v8 + 32);
                  if ( v11 )
                  {
                    if ( MapFontFileInKernel(v11, &MappedBase) >= 0 )
                      break;
                  }
                }
              }
              ++v6;
              if ( (unsigned int)++v7 >= *(_DWORD *)(v4 + 36) )
                return 0LL;
            }
            if ( (unsigned int)bAddPrintKView(
                                 v5,
                                 MappedBase,
                                 v7,
                                 *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 80LL),
                                 v14) )
            {
              v10 = (char *)MappedBase;
              return &v10[(_QWORD)a2 - v9];
            }
            MmUnmapViewInSessionSpace(MappedBase);
          }
        }
      }
    }
  }
  return 0LL;
}
