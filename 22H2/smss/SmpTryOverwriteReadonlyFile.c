/*
 * XREFs of SmpTryOverwriteReadonlyFile @ 0x140017E90
 * Callers:
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpCheckFolderForRedirections @ 0x14000EE7C (SmpCheckFolderForRedirections.c)
 *     SmpOpenTargetFile @ 0x140017680 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140017BC4 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpTryOverwriteReadonlyFile(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  __int64 v5; // rdi
  int v7; // ebx
  char v8; // al
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+70h] [rbp+7h] BYREF

  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  v5 = -1LL;
  ObjectAttributes.Attributes = 64;
  v11 = -1LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v7 >= 0 )
  {
    if ( (FileInformation.FileAttributes & 0x10) != 0 )
    {
      v7 = -1073741638;
    }
    else if ( (FileInformation.FileAttributes & 1) != 0 )
    {
      if ( a3 != 1 || (v8 = SmpCheckFolderForRedirections(&a1->Length, (HANDLE *)&v11), v5 = v11, v8) )
      {
        v7 = SmpOpenTargetFile(&Handle, 0x100100u, &ObjectAttributes, 1, 3u);
        if ( v7 >= 0 )
        {
          v7 = SmpSetTargetAttributes(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
          if ( v7 >= 0 )
          {
            NtClose(Handle);
            Handle = 0LL;
            v7 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
            if ( v7 < 0 )
            {
              if ( SmpOpenTargetFile(&Handle, 0x110100u, &ObjectAttributes, 1, 3u) >= 0 )
                SmpSetTargetAttributes(Handle, FileInformation.FileAttributes);
            }
            else
            {
              v7 = 0;
            }
          }
        }
      }
      else
      {
        v7 = -1073740533;
      }
    }
    else
    {
      v7 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v5 != -1 )
    NtClose((HANDLE)v5);
  return (unsigned int)v7;
}
