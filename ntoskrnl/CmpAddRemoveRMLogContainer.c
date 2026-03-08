/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x140A1BBAC
 * Callers:
 *     CmpTransWriteLog @ 0x140734F84 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x140733F8C (CmpQueryNameString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140864428 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  ULONG_PTR v2; // rax
  UNICODE_STRING *v3; // r15
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF

  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v2 = qword_140C028D0;
    v3 = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(void **)(*(_QWORD *)(a1 + 80) + 1544LL), &v9);
    if ( v4 < 0 )
      goto LABEL_16;
    v2 = *(_QWORD *)(a1 + 80);
    v3 = &v9;
  }
  v4 = RtlStringFromGUIDEx((unsigned int *)(*(_QWORD *)(v2 + 64) + 112LL), (__int64)&UnicodeString, 1);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 68);
    if ( v5 >= 0x100 )
    {
LABEL_10:
      if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)&byte_140037807,
          0LL,
          0LL,
          2u,
          &v10);
      v4 = -1073741670;
    }
    else
    {
      while ( 1 )
      {
        v6 = CmpAddRemoveContainerToCLFSLog(
               *(PLOG_FILE_OBJECT *)(a1 + 88),
               v3,
               &UnicodeString,
               &CmpLogExt,
               &CmpContainerSuffix,
               v5,
               (PULONGLONG)(a1 + 72));
        v4 = v6;
        if ( v6 != -1073741771 && v6 != -1073741635 )
          break;
        if ( ++v5 >= 0x100 )
          goto LABEL_10;
      }
      if ( v6 >= 0 )
        ++*(_DWORD *)(a1 + 68);
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
LABEL_16:
  if ( v9.Buffer )
    RtlFreeUnicodeString(&v9);
  return (unsigned int)v4;
}
