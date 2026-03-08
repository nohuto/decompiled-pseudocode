/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BC810
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00BC8FC (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     cParseFontResources @ 0x1C00BC934 (cParseFontResources.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BC9E4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall UmfdEscParseFontResources(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rdi
  _DWORD *v2; // r14
  __int64 v3; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v4; // rcx
  int v5; // esi
  volatile void *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-48h] BYREF
  char *v9; // [rsp+38h] [rbp-40h]
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h]
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  v1 = (char *)a1 + 8;
  v9 = (char *)a1 + 8;
  v2 = (_DWORD *)((char *)a1 + 8);
  v7[1] = (char *)a1 + 8;
  v12 = 0LL;
  v7[0] = 0LL;
  Src = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v8);
  v11 = 0LL;
  v4 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23472LL);
  if ( v4
    && (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v4)
    && *(_QWORD *)(v11 + 16) )
  {
    v5 = cParseFontResources(v11, &v12, v7, (unsigned __int64)&Src & -(__int64)(*((_QWORD *)v1 + 1) != 0LL));
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v8);
    if ( v5 )
    {
      v6 = (volatile void *)*((_QWORD *)v1 + 1);
      if ( v6 )
      {
        if ( (unsigned int)(8 * v5) <= *((_DWORD *)v1 + 4) )
        {
          ProbeForWrite(v6, *((unsigned int *)v1 + 4), 8u);
          memmove(*((void **)v1 + 1), Src, (unsigned int)(8 * v5));
        }
        else
        {
          v5 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v5 )
      {
        ProbeForWrite(*((volatile void **)v1 + 3), 8uLL, 8u);
        ProbeForWrite(*((volatile void **)v1 + 4), 8uLL, 8u);
        **((_QWORD **)v1 + 3) = v12;
        **((_QWORD **)v1 + 4) = v7[0];
      }
    }
    *v2 = v5;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v8);
  }
}
