/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00E33E4
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02D7E1C (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(PFFMEMOBJ *this, struct PFF *Src, int a3, unsigned int a4, struct PFT *a5)
{
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax

  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  if ( *(_DWORD *)Src )
  {
    v9 = (void *)Win32AllocPoolZInit(*(unsigned int *)Src, 1717989447LL);
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      memmove(v9, Src, *(_QWORD *)Src);
      PushThreadGuardedObject(*(_QWORD *)this + 160LL, *(_QWORD *)this, CleanUpPFF);
      v10 = *((_QWORD *)Src + 3);
      if ( v10 )
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v10 - (_QWORD)Src;
      v11 = *((_QWORD *)Src + 5);
      if ( v11 )
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v11 - (_QWORD)Src;
      memset_0((void *)(*(_QWORD *)this + 216LL), 0, 8LL * *((unsigned int *)Src + 52));
      v12 = *((_DWORD *)Src + 13);
      v13 = a3 | 0x200;
      if ( (v12 & 0x200) == 0 )
        v13 = a3;
      *(_QWORD *)(*(_QWORD *)this + 192LL) = *((_QWORD *)Src + 24);
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      v14 = v13 | 0x1000;
      if ( (v12 & 0x1000) == 0 )
        v14 = v13;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v14;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = a5;
      *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
      v15 = *(_QWORD *)this;
      if ( (a4 & 0x1C) != 0 )
      {
        *(_DWORD *)(v15 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a4);
      }
      else if ( (a4 & 0x20) != 0 )
      {
        *(_DWORD *)(v15 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v15 + 56) = 1;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      }
      *((_QWORD *)Src + 19) = *(_QWORD *)this;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = Src;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
