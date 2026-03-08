/*
 * XREFs of NtCreateIoRing @ 0x140947140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetProcessImageFileName @ 0x1402E1550 (PsGetProcessImageFileName.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140711DC0 (MmCreateSection.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     IopAllocateAndLockMdl @ 0x1409410EC (IopAllocateAndLockMdl.c)
 */

__int64 __fastcall NtCreateIoRing(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        _OWORD *Address)
{
  char PreviousMode; // r13
  char *v8; // rdi
  int inserted; // esi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r12d
  unsigned int v13; // r14d
  char v14; // dl
  unsigned int v15; // r15d
  char v16; // cl
  unsigned __int64 v17; // r12
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  _OWORD *v20; // rax
  const CHAR *v21; // rdx
  const CHAR *v22; // r9
  __int64 v23; // r8
  PEVENT_DATA_DESCRIPTOR v25; // [rsp+20h] [rbp-258h]
  int v26; // [rsp+54h] [rbp-224h]
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  __int64 v28; // [rsp+60h] [rbp-218h] BYREF
  __int128 v29; // [rsp+68h] [rbp-210h]
  int v30; // [rsp+78h] [rbp-200h]
  int v31; // [rsp+80h] [rbp-1F8h] BYREF
  int v32; // [rsp+84h] [rbp-1F4h] BYREF
  int v33; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v34; // [rsp+8Ch] [rbp-1ECh] BYREF
  int v35; // [rsp+94h] [rbp-1E4h] BYREF
  int v36; // [rsp+98h] [rbp-1E0h] BYREF
  int v37; // [rsp+9Ch] [rbp-1DCh] BYREF
  _QWORD *v38; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-1C8h] BYREF
  _QWORD *v41; // [rsp+B8h] [rbp-1C0h]
  _OWORD *v42; // [rsp+C0h] [rbp-1B8h]
  __int64 v43; // [rsp+C8h] [rbp-1B0h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-1A8h] BYREF
  _QWORD v45[4]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-180h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp-168h] BYREF
  __int64 *v48; // [rsp+130h] [rbp-148h]
  __int64 v49; // [rsp+138h] [rbp-140h]
  _BYTE v50[16]; // [rsp+140h] [rbp-138h] BYREF
  _BYTE v51[16]; // [rsp+150h] [rbp-128h] BYREF
  int *v52; // [rsp+160h] [rbp-118h]
  __int64 v53; // [rsp+168h] [rbp-110h]
  int *v54; // [rsp+170h] [rbp-108h]
  __int64 v55; // [rsp+178h] [rbp-100h]
  int *v56; // [rsp+180h] [rbp-F8h]
  __int64 v57; // [rsp+188h] [rbp-F0h]
  __int64 *v58; // [rsp+190h] [rbp-E8h]
  __int64 v59; // [rsp+198h] [rbp-E0h]
  char *v60; // [rsp+1A0h] [rbp-D8h]
  __int64 v61; // [rsp+1A8h] [rbp-D0h]
  int *v62; // [rsp+1B0h] [rbp-C8h]
  __int64 v63; // [rsp+1B8h] [rbp-C0h]
  int *v64; // [rsp+1C0h] [rbp-B8h]
  __int64 v65; // [rsp+1C8h] [rbp-B0h]
  int *v66; // [rsp+1D0h] [rbp-A8h]
  __int64 v67; // [rsp+1D8h] [rbp-A0h]
  _QWORD **v68; // [rsp+1E0h] [rbp-98h]
  __int64 v69; // [rsp+1E8h] [rbp-90h]
  __int64 *v70; // [rsp+1F0h] [rbp-88h]
  __int64 v71; // [rsp+1F8h] [rbp-80h]
  __int64 *v72; // [rsp+200h] [rbp-78h]
  __int64 v73; // [rsp+208h] [rbp-70h]
  __int64 *v74; // [rsp+210h] [rbp-68h]
  __int64 v75; // [rsp+218h] [rbp-60h]
  __int64 *v76; // [rsp+220h] [rbp-58h]
  __int64 v77; // [rsp+228h] [rbp-50h]

  v41 = (_QWORD *)a1;
  v42 = Address;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  v30 = 0;
  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x14 )
  {
    inserted = -1073741584;
    goto LABEL_55;
  }
  if ( a4 < 0x30 )
  {
    inserted = -1073741789;
    goto LABEL_55;
  }
  if ( PreviousMode )
  {
    v10 = a3 + a2;
    v11 = 0x7FFFFFFF0000LL;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    ProbeForWrite(Address, a4, 1u);
    v8 = (char *)Object;
  }
  v29 = *(_OWORD *)a3;
  v30 = *(_DWORD *)(a3 + 16);
  v12 = v29;
  if ( (unsigned int)(v29 - 1) > 0x12B )
  {
    inserted = -1069154301;
    goto LABEL_55;
  }
  if ( !DWORD1(v29) )
  {
    v13 = 32;
LABEL_15:
    v14 = -1;
    goto LABEL_16;
  }
  v13 = DWORD1(v29);
  if ( DWORD1(v29) < 8 )
  {
    v13 = 8;
    goto LABEL_15;
  }
  if ( DWORD1(v29) > 0x10000 )
  {
    inserted = -1069154300;
    goto LABEL_55;
  }
  if ( ((DWORD1(v29) - 1) & DWORD1(v29)) == 0 )
    goto LABEL_15;
  v14 = -1;
  v16 = -1;
  do
  {
    ++v16;
    v13 >>= 1;
  }
  while ( v13 );
  v13 = 1 << (v16 + 1);
LABEL_16:
  DWORD1(v29) = v13;
  v15 = DWORD2(v29);
  if ( DWORD2(v29) > 0x20000 )
  {
    inserted = -1069154299;
    goto LABEL_55;
  }
  if ( DWORD2(v29) <= 2 * v13 )
  {
    v15 = 2 * v13;
    DWORD2(v29) = 2 * v13;
  }
  else
  {
    if ( ((DWORD2(v29) - 1) & DWORD2(v29)) != 0 )
    {
      if ( DWORD2(v29) )
      {
        do
        {
          ++v14;
          v15 >>= 1;
        }
        while ( v15 );
      }
      v15 = 1 << (v14 + 1);
    }
    DWORD2(v29) = v15;
  }
  if ( HIDWORD(v29) )
  {
    inserted = -1069154303;
    goto LABEL_55;
  }
  v45[0] = 48LL;
  memset(&v45[1], 0, 24);
  v46 = 0LL;
  inserted = ObCreateObjectEx(0, IoRingObjectType, (__int64)v45, PreviousMode, (__int64)v25, 208, 0, 0, &Object, 0LL);
  v26 = inserted;
  if ( inserted < 0 )
  {
    v8 = (char *)Object;
  }
  else
  {
    v8 = (char *)Object;
    memset(Object, 0, 0xD0uLL);
    *(_DWORD *)v8 = 13631502;
    *((_DWORD *)v8 + 2) = v12;
    *((_DWORD *)v8 + 5) = v13;
    *((_DWORD *)v8 + 7) = v15;
    *(_QWORD *)(v8 + 12) = 0LL;
    *((_DWORD *)v8 + 6) = v13 - 1;
    *((_DWORD *)v8 + 8) = v15 - 1;
    *((_QWORD *)v8 + 13) = 0LL;
    KeInitializeEvent((PRKEVENT)(v8 + 136), SynchronizationEvent, 0);
    v17 = (((unsigned __int64)v13 << 6) + 87) & 0xFFFFFFFFFFFFFFF8uLL;
    v28 = v17 + 8 * (v15 + 2 * (v15 + 2LL));
    v38 = v8 + 56;
    inserted = MmCreateSection((int)v8 + 56, 6LL, 0, &v28, 4, 0x8000000, 0LL, 0LL);
    v26 = inserted;
    if ( inserted >= 0 )
    {
      v18 = *((_QWORD *)v8 + 7);
      v28 = 0LL;
      inserted = MiMapViewInSystemSpace(v18, (_QWORD *)v8 + 8, (unsigned __int64 *)v8 + 11, &v28, 0LL, 0LL);
      v26 = inserted;
      if ( inserted >= 0 )
      {
        inserted = IopAllocateAndLockMdl(
                     (void *)(v17 + *((_QWORD *)v8 + 8)),
                     *((_DWORD *)v8 + 22) - (int)v17,
                     0,
                     (__int64)(v8 + 72),
                     (struct _MDL **)v8 + 9,
                     (_QWORD *)v8 + 10);
        v26 = inserted;
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
          {
            v39 = 0LL;
            v40 = 0LL;
            v28 = 0LL;
            inserted = MmMapViewOfSection(
                         *v38,
                         (__int64)KeGetCurrentThread()->ApcState.Process,
                         &v28,
                         0LL,
                         0,
                         (__int64)&v39,
                         &v40,
                         1,
                         0,
                         4);
            v26 = inserted;
            v8 = (char *)Object;
            if ( inserted < 0 )
              goto LABEL_47;
            v19 = v28 + v17;
            *((_QWORD *)Object + 5) = v28;
            *((_QWORD *)v8 + 6) = v19;
          }
          v28 = 0LL;
          inserted = ObInsertObjectEx(v8, 0LL, 0, 1, 0, (__int64)&Object, &v28);
          v26 = inserted;
          if ( inserted >= 0 )
          {
            *v41 = v28;
            v8 = (char *)Object;
            v20 = v42;
            *v42 = *(_OWORD *)((char *)Object + 8);
            v20[1] = *(_OWORD *)(v8 + 24);
            v20[2] = *(_OWORD *)(v8 + 40);
          }
          else
          {
            v8 = 0LL;
            Object = 0LL;
          }
        }
      }
    }
  }
LABEL_47:
  if ( inserted >= 0 )
  {
    if ( !v8 )
      return (unsigned int)inserted;
    PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
    v8 = (char *)Object;
    if ( (unsigned int)dword_140C03848 > 5 && tlgKeywordOn((__int64)&dword_140C03848, 0x400000000000LL) )
    {
      v43 = 1LL;
      v48 = &v43;
      v49 = 8LL;
      v21 = "UserMode";
      if ( !PreviousMode )
        v21 = "KernelMode";
      tlgCreate1Sz_char((__int64)v50, v21);
      tlgCreate1Sz_char((__int64)v51, v22);
      v31 = v29;
      v52 = &v31;
      v53 = 4LL;
      v32 = HIDWORD(v29);
      v54 = &v32;
      v55 = 4LL;
      v33 = v30;
      v56 = &v33;
      v57 = 4LL;
      v34 = *(_QWORD *)((char *)&v29 + 4);
      v58 = &v34;
      v59 = 4LL;
      v60 = (char *)&v34 + 4;
      v61 = 4LL;
      v35 = *((_DWORD *)v8 + 2);
      v62 = &v35;
      v63 = 4LL;
      v36 = *((_DWORD *)v8 + 3);
      v64 = &v36;
      v65 = 4LL;
      v37 = *((_DWORD *)v8 + 4);
      v66 = &v37;
      v67 = 4LL;
      LODWORD(v38) = *((_DWORD *)v8 + 5);
      v68 = &v38;
      v69 = 4LL;
      LODWORD(v39) = *((_DWORD *)v8 + 6);
      v70 = &v39;
      v71 = 4LL;
      LODWORD(v40) = *((_DWORD *)v8 + 7);
      v72 = &v40;
      v73 = 4LL;
      LODWORD(v28) = *((_DWORD *)v8 + 8);
      v74 = &v28;
      v75 = 4LL;
      v44 = 0x1000000LL;
      v76 = &v44;
      v77 = 8LL;
      tlgWriteAgg((__int64)&dword_140C03848, (unsigned __int8 *)&word_14002B54E, v23, 0x12u, &v47);
    }
    inserted = v26;
  }
LABEL_55:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)inserted;
}
