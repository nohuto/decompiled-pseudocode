/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028D380
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BC0F8 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ZwWin32CreateSection @ 0x1C00BC3EC (ZwWin32CreateSection.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00BC448 (ZwWin32CreateSectionRetainHandle.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C028D690 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C028DC54 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

__int64 __fastcall ObtainSectionForNetworkedFontFile(
        PCUNICODE_STRING SourceString,
        struct _FILEVIEW *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        bool a5)
{
  NTSTATUS v8; // esi
  const WCHAR *v9; // rdx
  void **v10; // rax
  void **SectionHandle; // rdi
  void *v12; // rcx
  unsigned int v13; // edi
  struct _UNICODE_STRING *v14; // rbx
  void **inserted; // rax
  void **v16; // r15
  __int64 v17; // rdx
  int v18; // edx
  int SectionRetainHandle; // ebx
  unsigned int v20; // ecx
  int v22; // [rsp+28h] [rbp-69h]
  int v23; // [rsp+28h] [rbp-69h]
  void *v24; // [rsp+38h] [rbp-59h]
  void *v25; // [rsp+38h] [rbp-59h]
  int v26; // [rsp+40h] [rbp-51h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  PVOID v28; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h] BYREF
  int v30[2]; // [rsp+68h] [rbp-29h]
  __int128 Buffer; // [rsp+70h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  __int64 v33; // [rsp+90h] [rbp-1h]

  *(_QWORD *)v30 = a4;
  v8 = -1073741823;
  v29 = *gpxsGlobals;
  GreAcquireSemaphore(v29);
  v9 = SourceString->Buffer;
  Buffer = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, v9);
  v10 = (void **)RtlLookupElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 8LL), &Buffer);
  SectionHandle = v10;
  if ( v10 )
  {
    ++*((_DWORD *)v10 + 8);
    SEMOBJ::vUnlock((SEMOBJ *)&v29);
    GreEnterCriticalRegionAndAcquirePushLockShared(SectionHandle + 1);
    GreLeaveCriticalRegionAndReleasePushLockShared(SectionHandle + 1);
    v12 = *SectionHandle;
    if ( !*SectionHandle
      || (Object = 0LL,
          v8 = ObReferenceObjectByHandle(v12, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL),
          *((_QWORD *)a2 + 4) = Object,
          v8 < 0) )
    {
      bUnreferenceNetworkedFontFileNode(SectionHandle);
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v13 = 2 * SourceString->Length + 36;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Object, v13);
  v14 = (struct _UNICODE_STRING *)Object;
  if ( !Object )
  {
LABEL_8:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Object);
    goto LABEL_22;
  }
  *((_DWORD *)Object + 8) = 1;
  v14[1].Buffer = &v14[2].MaximumLength + 1;
  v14[1].MaximumLength = SourceString->Length;
  RtlCopyUnicodeString(v14 + 1, SourceString);
  inserted = (void **)RtlInsertElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 8LL), v14, v13, 0LL);
  SectionHandle = inserted;
  if ( !inserted )
  {
    v8 = -1073741801;
    goto LABEL_8;
  }
  inserted[3] = (char *)inserted + 36;
  GreInitializePushLock(inserted + 1);
  GreEnterCriticalRegionAndAcquirePushLockExclusive(SectionHandle + 1);
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  v16 = (void **)((char *)a2 + 32);
  SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                          (_QWORD *)a2 + 4,
                          v17,
                          a3,
                          *(union _LARGE_INTEGER **)v30,
                          4u,
                          v22,
                          0LL,
                          v24,
                          v26,
                          SectionHandle);
  if ( SectionRetainHandle < 0 )
  {
    *v16 = 0LL;
    *SectionHandle = 0LL;
  }
  else
  {
    v28 = 0LL;
    SectionRetainHandle = ZwWin32CreateSection((int)&v28, v18, (int)a3, v30[0], 2u, v23, *((void **)a2 + 6), v25);
    if ( SectionRetainHandle >= 0 )
    {
      if ( !(unsigned int)bCopySection(*v16, v28, *((unsigned int *)a2 + 6)) )
        SectionRetainHandle = -1073741823;
      ObfDereferenceObject(v28);
    }
  }
  v8 = SectionRetainHandle;
  GreLeaveCriticalRegionAndReleasePushLockExclusive(SectionHandle + 1);
  if ( SectionRetainHandle < 0 )
  {
    if ( *v16 )
    {
      ObfDereferenceObject(*v16);
      *v16 = 0LL;
    }
    bUnreferenceNetworkedFontFileNode(SectionHandle);
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Object);
  if ( SectionRetainHandle >= 0 )
  {
LABEL_20:
    v20 = *((_DWORD *)a2 + 10) & 0xFFFFFFFB | (4 * a5);
    *((_QWORD *)a2 + 7) = SectionHandle;
    *((_DWORD *)a2 + 10) = v20;
    if ( (v20 & 4) == 0 )
    {
      ZwClose(*((HANDLE *)a2 + 6));
      *((_QWORD *)a2 + 6) = 0LL;
    }
  }
LABEL_22:
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  return (unsigned int)v8;
}
