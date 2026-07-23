/*
 * XREFs of WmipTranslateFileHandle @ 0x1409335D4
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D464 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipGetFilePDO @ 0x14078D5C4 (WmipGetFilePDO.c)
 */

__int64 __fastcall WmipTranslateFileHandle(__int64 a1, unsigned int *a2)
{
  void *v4; // rcx
  int FilePDO; // ebx
  void *v6; // rcx
  unsigned __int16 Length; // r13
  unsigned int v8; // edi
  wchar_t *Buffer; // rdx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+40h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = *(void **)a1;
  DmaAdapter = 0LL;
  UnicodeString.Buffer = 0LL;
  FilePDO = WmipGetFilePDO(v4, 1, &DmaAdapter);
  if ( FilePDO < 0 )
    return (unsigned int)FilePDO;
  v6 = *(void **)(a1 + 8);
  Object = 0LL;
  FilePDO = ObReferenceObjectByHandle(v6, 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( FilePDO >= 0 )
  {
    FilePDO = WmipGetGuidObjectInstanceInfo((__int64)Object, (ULONG_PTR)DmaAdapter, &UnicodeString, &v12);
    if ( FilePDO < 0 )
    {
LABEL_12:
      if ( Object )
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      goto LABEL_14;
    }
    Length = UnicodeString.Length;
    v8 = UnicodeString.Length + 26;
    if ( *a2 >= v8 )
    {
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)(a1 + 16) = v12;
      *(_WORD *)(a1 + 20) = Length + 4;
      memmove((void *)(a1 + 22), Buffer, Length);
      *a2 = v8;
      *(_DWORD *)(a1 + 2 * ((unsigned __int64)Length >> 1) + 22) = 0;
    }
    else
    {
      if ( *a2 < 4 )
      {
        FilePDO = -1073741823;
        goto LABEL_10;
      }
      *(_DWORD *)a1 = v8;
      *a2 = 4;
    }
    FilePDO = 0;
LABEL_10:
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)FilePDO;
}
