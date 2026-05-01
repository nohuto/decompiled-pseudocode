/*
 * XREFs of ?HampSystemSetBamWindowStateProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800781C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemSetBamWindowStateProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v6; // edi
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rax
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _DWORD InputBuffer[2]; // [rsp+C8h] [rbp-40h] BYREF
  void *v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+DCh] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+108h] [rbp+0h]
  int v27; // [rsp+110h] [rbp+8h]
  int v28; // [rsp+114h] [rbp+Ch]
  int *v29; // [rsp+118h] [rbp+10h]
  int v30; // [rsp+120h] [rbp+18h]
  int v31; // [rsp+124h] [rbp+1Ch]
  __int64 *v32; // [rsp+128h] [rbp+20h]
  int v33; // [rsp+130h] [rbp+28h]
  int v34; // [rsp+134h] [rbp+2Ch]
  int *v35; // [rsp+138h] [rbp+30h]
  int v36; // [rsp+140h] [rbp+38h]
  int v37; // [rsp+144h] [rbp+3Ch]

  FileHandle = 0LL;
  v6 = (int)a4;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Bam");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v8 >= 0 )
  {
    InputBuffer[1] = 0;
    v24 = 0;
    InputBuffer[0] = 1;
    v22 = a2;
    v23 = v6;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220004u, InputBuffer, 0x18u, 0LL, 0);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v11 = *((_QWORD *)a1 + 4);
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v17 = v11;
    v35 = &v13;
    v32 = &v17;
    v29 = &v14;
    v26 = &v15;
    v30 = v10;
    v27 = v10;
    LOBYTE(v13) = v6;
    v14 = a3;
    LODWORD(v15) = v8;
    v36 = 1;
    v33 = 8;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_18009EAF0, 0LL, 0LL, 6u, &v25);
  }
  return (unsigned int)v8;
}
