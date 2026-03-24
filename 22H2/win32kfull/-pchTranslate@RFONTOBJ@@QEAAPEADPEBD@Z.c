/*
 * XREFs of ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C02A7F7C
 * Callers:
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C02A8248 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C02A82F8 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 * Callees:
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C02A7908 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 *     ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C02A7A18 (-bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C02A7CE4 (-bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 */

char *__fastcall RFONTOBJ::pchTranslate(RFONTOBJ *this, const char *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 *v5; // r14
  int v6; // r15d
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  int PrintKView; // eax
  struct _FONTFILE_PRINTKVIEW *v10; // r13
  void *v11; // rcx
  char *v12; // rax
  PVOID MappedBase; // [rsp+78h] [rbp+10h] BYREF
  struct _FONTFILE_PRINTKVIEW *v16; // [rsp+80h] [rbp+18h] BYREF

  MappedBase = 0LL;
  v16 = 0LL;
  if ( (unsigned __int64)a2 >= 0x10000 && a2 <= MmHighestUserAddress )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 80);
      if ( v4 )
      {
        v5 = *(__int64 **)(v3 + 200);
        if ( v5 )
        {
          v6 = 0;
          if ( *(_DWORD *)(v3 + 36) )
          {
            while ( 1 )
            {
              v7 = *v5;
              if ( *v5 )
              {
                v8 = *(_QWORD *)(v7 + 104);
                if ( (v8 || (v8 = *(_QWORD *)(v7 + 16)) != 0)
                  && v8 <= (unsigned __int64)a2
                  && (unsigned __int64)a2 < v8 + *(unsigned int *)(v7 + 24) )
                {
                  PrintKView = bFindPrintKView(v4, v6, &v16);
                  v10 = v16;
                  if ( PrintKView && *((_QWORD *)v16 + 2) )
                  {
                    v12 = (char *)*((_QWORD *)v16 + 2);
                    return &v12[(_QWORD)a2 - v8];
                  }
                  v11 = *(void **)(v7 + 32);
                  if ( v11 )
                  {
                    if ( MapFontFileInKernel(v11, &MappedBase) >= 0 )
                      break;
                  }
                }
              }
              ++v5;
              if ( (unsigned int)++v6 >= *(_DWORD *)(v3 + 36) )
                return 0LL;
            }
            if ( (unsigned int)bAddPrintKView(
                                 v4,
                                 MappedBase,
                                 v6,
                                 *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 80LL),
                                 v10) )
            {
              v12 = (char *)MappedBase;
              return &v12[(_QWORD)a2 - v8];
            }
            MmUnmapViewInSessionSpace(MappedBase);
          }
        }
      }
    }
  }
  return 0LL;
}
