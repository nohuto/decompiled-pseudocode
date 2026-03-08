/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C00BD320
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00BC5BC (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  struct _OBJECT_NAME_INFORMATION *v3; // rax
  __int64 v4; // r8
  char v5; // r9
  unsigned __int16 *v6; // rax
  int appended; // eax
  _WORD *v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+68h] [rbp-9h] BYREF
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v11[1] = L"\\SystemRoot\\Fonts";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  Source.Buffer = (PCHAR)L"\\";
  IoStatusBlock = 0LL;
  v11[0] = 2359330LL;
  *(_QWORD *)&Source.Length = 262146LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
    v3 = (struct _OBJECT_NAME_INFORMATION *)Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v2 + 19912) = v3;
    if ( v3
      && ((int)QueryNameStringFromHandle(FileHandle, v3, v4, v5) < 0
       || RtlAppendStringToString(*(PSTRING *)(v2 + 19912), &Source) < 0) )
    {
      Win32FreePool(*(void **)(v2 + 19912));
      *(_QWORD *)(v2 + 19912) = 0LL;
    }
    v6 = (unsigned __int16 *)Win32AllocPoolZInit(520LL, 1986422343LL);
    *(_QWORD *)(v2 + 19904) = v6;
    if ( v6 )
    {
      appended = bAppendSysDirectory(v6, &word_1C03142AC);
      v8 = *(_WORD **)(v2 + 19904);
      if ( appended )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        *(_DWORD *)(v2 + 19896) = v9 + 1;
      }
      else
      {
        Win32FreePool(v8);
        *(_QWORD *)(v2 + 19904) = 0LL;
        *(_DWORD *)(v2 + 19896) = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v2 + 19920) = v0;
  }
  return v0;
}
