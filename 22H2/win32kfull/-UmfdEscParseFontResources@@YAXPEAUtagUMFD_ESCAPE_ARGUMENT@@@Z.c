/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01301E8
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A76B0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00A6F84 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     cParseFontResources @ 0x1C01302C4 (cParseFontResources.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016AF30 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016B1A0 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

void __fastcall UmfdEscParseFontResources(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rdi
  _DWORD *v2; // r14
  __int64 v3; // rcx
  int v4; // esi
  volatile void *v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-48h] BYREF
  char *v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  v1 = (char *)a1 + 8;
  v8 = (char *)a1 + 8;
  v2 = (_DWORD *)((char *)a1 + 8);
  v6[1] = (char *)a1 + 8;
  v12 = 0LL;
  v6[0] = 0LL;
  Src = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
  v11 = 0LL;
  if ( UmfdFileviewLookup
    && (v9 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v3, &v9, &v11))
    && *(_QWORD *)(v11 + 16) )
  {
    v4 = cParseFontResources(v11, &v12, v6, (unsigned __int64)&Src & -(__int64)(*((_QWORD *)v1 + 1) != 0LL));
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
    if ( v4 )
    {
      v5 = (volatile void *)*((_QWORD *)v1 + 1);
      if ( v5 )
      {
        if ( (unsigned int)(8 * v4) <= *((_DWORD *)v1 + 4) )
        {
          ProbeForWrite(v5, *((unsigned int *)v1 + 4), 8u);
          memmove(*((void **)v1 + 1), Src, (unsigned int)(8 * v4));
        }
        else
        {
          v4 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v4 )
      {
        ProbeForWrite(*((volatile void **)v1 + 3), 8uLL, 8u);
        ProbeForWrite(*((volatile void **)v1 + 4), 8uLL, 8u);
        **((_QWORD **)v1 + 3) = v12;
        **((_QWORD **)v1 + 4) = v6[0];
      }
    }
    *v2 = v4;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
  }
}
