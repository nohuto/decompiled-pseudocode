/*
 * XREFs of WmipTranslateFileHandle @ 0x1409DE90C
 * Callers:
 *     WmipIoControl @ 0x140787290 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407745C4 (WmipGetGuidObjectInstanceInfo.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
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
  PVOID v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = *(void **)a1;
  v14 = 0LL;
  UnicodeString.Buffer = 0LL;
  FilePDO = WmipGetFilePDO(v4, 1, &v14);
  if ( FilePDO < 0 )
    return (unsigned int)FilePDO;
  v6 = *(void **)(a1 + 8);
  Object = 0LL;
  FilePDO = ObReferenceObjectByHandle(v6, 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( FilePDO >= 0 )
  {
    FilePDO = WmipGetGuidObjectInstanceInfo((__int64)Object, (ULONG_PTR)v14, &UnicodeString, &v12);
    if ( FilePDO < 0 )
    {
LABEL_12:
      if ( Object )
        ObfDereferenceObject(Object);
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
      RtlFreeUnicodeString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)FilePDO;
}
