/*
 * XREFs of CmLoadKey @ 0x140732FF8
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140733370 (CmpQueryHiveRedirectionFileList.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF2034 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF2058 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        char a9,
        __int64 a10,
        ULONG_PTR *a11)
{
  int v12; // r13d
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned int v17; // ecx
  unsigned int i; // edx
  __int64 v19; // r8
  struct _PRIVILEGE_SET *Pool; // rax
  int v21; // ecx
  char v22; // bl
  void *v23; // rax
  char v24; // dl
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // rsi
  __int64 v28; // r12
  int KeyCommon; // eax
  __int64 v30; // r8
  unsigned __int8 *v31; // rdx
  unsigned __int8 v32; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v35; // ebx
  int Conflict; // ebx
  void *v37; // rcx
  NTSTATUS v38; // eax
  unsigned int v39; // r9d
  int v40; // r11d
  int v41; // r9d
  int v42; // r10d
  int v43; // edx
  int v44; // r9d
  int v45; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  char v47[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  PVOID v51; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-78h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v55; // [rsp+98h] [rbp-68h]
  struct _KEVENT *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+100h] [rbp+0h] BYREF
  PPRIVILEGE_SET *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  PVOID *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int16 *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  __int16 *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  PVOID *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  __int64 v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  __int64 v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int64 v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  __int64 v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  __int64 v83; // [rsp+1C0h] [rbp+C0h]
  int v84; // [rsp+1C8h] [rbp+C8h]
  int v85; // [rsp+1CCh] [rbp+CCh]
  __int64 *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1E0h] [rbp+E0h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  __int64 *v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  __int64 *v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]

  v54 = a5;
  v56 = a7;
  v12 = a4;
  v57 = a8;
  v58 = a10;
  v15 = 0LL;
  v55 = a11;
  v16 = *(unsigned __int16 **)(a1 + 16);
  v48 = 0;
  Destination = 0LL;
  v59 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  v50 = 0LL;
  Handle = 0LL;
  v17 = *v16;
  LODWORD(v51) = 0;
  if ( (unsigned __int16)v17 >= 2u )
  {
    for ( i = v17 >> 1; i; *(_WORD *)v19 -= 2 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      if ( *(_WORD *)(*(_QWORD *)(v19 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
  {
    v26 = -1073741811;
    goto LABEL_34;
  }
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 260LL, 1649626435LL);
  Privileges = Pool;
  if ( !Pool )
  {
    v26 = -1073741670;
    goto LABEL_34;
  }
  Destination.Buffer = (wchar_t *)Pool;
  Destination.MaximumLength = 260;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(*(PUNICODE_STRING *)(a1 + 16), &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    v26 = -1073741431;
    goto LABEL_23;
  }
  v21 = (a3 & 0x2000) != 0 ? 3 : 0;
  v22 = v21 | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = v21;
  v23 = (void *)CmpAllocatePool(256LL, 432LL, 859393347LL);
  v15 = (__int64)v23;
  if ( !v23 )
  {
    v26 = -1073741670;
    goto LABEL_22;
  }
  v47[0] = 1;
  v24 = v22 | 4;
  if ( !v54 )
    v24 = v22;
  v25 = CmpCmdHiveOpen(
          a2,
          1,
          v47,
          &v50,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          v24,
          v57,
          (__int64)&v48,
          v23);
  v26 = v25;
  if ( v25 < 0 )
  {
    if ( v25 != -1073741757 )
    {
      SetFailureLocation(v15, 0, 31, v25, 16);
      v27 = (_DWORD *)v50;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, (int *)&v51, 8u, (void *)v57, 0LL, 0LL, 0LL, v15) >= 0 )
    {
      v51 = 0LL;
      v35 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v51, 0LL);
      ZwClose(Handle);
      if ( v35 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)v51, a3, v12, (__int64)v56, v15, a9, v58, (__int64)v55);
        ObfDereferenceObject(v51);
        if ( Conflict >= 0 )
        {
          v27 = (_DWORD *)v50;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    else
    {
      Object = 32;
    }
    v26 = -1073741757;
    SetFailureLocation(v15, 0, 31, -1073741757, Object);
    v27 = (_DWORD *)v50;
    goto LABEL_20;
  }
  v27 = (_DWORD *)v50;
  if ( (a3 & 0x2000) != 0 )
  {
    v37 = *(void **)(v50 + 1544);
    Handle = 0LL;
    v38 = ObReferenceObjectByHandle(v37, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Handle, 0LL);
    v26 = v38;
    if ( v38 < 0 )
    {
      SetFailureLocation(v15, 0, 31, v38, 80);
      goto LABEL_20;
    }
    v28 = v59;
    v26 = CmpResolveHiveLoadConflict(a1, (_DWORD)Handle, a3, v59, (__int64)v56, v15, a9, v58, (__int64)v55);
    ObfDereferenceObject(Handle);
    if ( v26 < 0 )
    {
      if ( v26 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v15, 0, 31, v26, 96);
LABEL_20:
      if ( v27 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        CmpDestroyHive(v27);
        CmpDetachFromRegistryProcess(&ApcState);
      }
      goto LABEL_22;
    }
LABEL_19:
    v26 = 0;
    goto LABEL_20;
  }
  v28 = v59;
LABEL_16:
  if ( a6 )
    v27[1028] |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon((char *)v27, (_QWORD *)a1, a3, v28, v54, v56, a9, v55, v47[0], v48, v15);
  v26 = KeyCommon;
  v27 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v15, 0, 31, KeyCommon, 112);
LABEL_22:
  CmpReleaseHiveLoadUnloadRundown();
LABEL_23:
  CmSiFreeMemory(Privileges);
  if ( v26 >= 0 )
  {
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
    {
      v54 = 0x1000000LL;
      p_Privileges = &Privileges;
      v31 = (unsigned __int8 *)&word_140036E3E;
      v94 = 8LL;
      v91 = &v50;
      v32 = 5;
      v93 = &v54;
LABEL_27:
      Privileges = (PPRIVILEGE_SET)1;
      v90 = 8LL;
      LODWORD(v50) = v26;
      v92 = 4LL;
      tlgWriteAgg((__int64)&dword_140C04328, v31, v30, v32, &v88);
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  if ( v15 && (*(_WORD *)(v15 + 8) || *(_WORD *)(v15 + 10) || *(_BYTE *)(v15 + 394)) )
  {
    if ( (unsigned int)dword_140C04328 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
      {
        Privileges = (PPRIVILEGE_SET)1;
        v41 = *(unsigned __int16 *)(v15 + 10);
        v42 = *(unsigned __int8 *)(v15 + 394);
        v63 = &Privileges;
        v65 = (PVOID *)&v50;
        v67 = (__int16 *)v47;
        v69 = &v49;
        v71 = &v51;
        v75 = v15 + 12;
        v79 = v15 + 108;
        v80 = (unsigned int)(12 * v41);
        v83 = v15 + 396;
        v86 = &v54;
        LOWORD(v51) = v42;
        v49 = v41;
        v76 = (unsigned int)(12 * v40);
        v77 = v15 + 10;
        v64 = 8LL;
        LODWORD(v50) = v26;
        v66 = 4LL;
        *(_WORD *)v47 = v40;
        v68 = 2LL;
        v70 = 2LL;
        v72 = 2LL;
        v73 = v15 + 8;
        v74 = 2LL;
        v78 = 2LL;
        v81 = v15 + 394;
        v82 = 2LL;
        v84 = 8 * v42;
        v85 = 0;
        v54 = 0x1000000LL;
        v87 = 8LL;
        tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&unk_140036C98, v15 + 394, 0xEu, &v62);
        v39 = dword_140C04328;
      }
      if ( v39 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
      {
        v43 = *(unsigned __int16 *)(v15 + 8);
        v44 = *(unsigned __int16 *)(v15 + 10);
        v45 = *(unsigned __int8 *)(v15 + 394);
        v63 = (PPRIVILEGE_SET *)&v50;
        v65 = &v51;
        v67 = &v49;
        v69 = (__int16 *)v47;
        v73 = v15 + 12;
        v74 = (unsigned int)(12 * v43);
        v77 = v15 + 108;
        v78 = (unsigned int)(12 * v44);
        v81 = v15 + 396;
        *(_WORD *)v47 = v45;
        LOWORD(v51) = v43;
        v49 = v44;
        v75 = v15 + 10;
        v79 = v15 + 394;
        LODWORD(v50) = v26;
        v64 = 4LL;
        v66 = 2LL;
        v68 = 2LL;
        v70 = 2LL;
        v71 = (PVOID *)(v15 + 8);
        v72 = 2LL;
        v76 = 2LL;
        v80 = 2LL;
        v82 = (unsigned int)(8 * v45);
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)byte_140036E91,
          0LL,
          0LL,
          0xCu,
          &v62);
      }
    }
    goto LABEL_29;
  }
LABEL_34:
  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
  {
    v32 = 4;
    p_Privileges = &Privileges;
    v31 = (unsigned __int8 *)byte_140036DF8;
    v91 = &v50;
    goto LABEL_27;
  }
LABEL_28:
  if ( v15 )
LABEL_29:
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
  return (unsigned int)v26;
}
