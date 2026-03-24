/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A871C
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A8558 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00E6104 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00A8A30 (ZwWin32CreateSectionRetainHandle.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00A8AEC (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00A8C34 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0134FCC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C02897DC (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSectionFromHandle(
        void *a1,
        WCHAR *SourceString,
        struct _FILEVIEW *a3,
        int a4,
        int *a5,
        unsigned __int8 a6)
{
  const WCHAR *v7; // r15
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // edx
  int v14; // ebx
  wchar_t *v15; // rax
  const wchar_t *v16; // r15
  NTSTATUS v17; // r13d
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  __int64 result; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // eax
  int v27; // [rsp+28h] [rbp-D8h]
  void *v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+40h] [rbp-C0h]
  bool v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v34[5]; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v36; // [rsp+E0h] [rbp-20h] BYREF
  __int128 FileInformation; // [rsp+110h] [rbp+10h] BYREF
  __int64 v38; // [rsp+120h] [rbp+20h]
  __int128 v39; // [rsp+128h] [rbp+28h] BYREF
  __int128 v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+148h] [rbp+48h]

  Handle = SourceString;
  *(&v36.Length + 1) = 0;
  *(&v36.Attributes + 1) = 0;
  v7 = SourceString;
  v38 = 0LL;
  v41 = 0LL;
  v31 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  DestinationString = 0LL;
  memset(v34, 0, sizeof(v34));
  v10 = v34[1];
  *(_OWORD *)a3 = v34[0];
  *((_OWORD *)a3 + 1) = v10;
  v11 = v34[3];
  DWORD2(v34[2]) = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = v34[2];
  v12 = v34[4];
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v7);
  *(_QWORD *)&v34[3] = a1;
  if ( a1
    && ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
    && ZwQueryInformationFile(a1, &IoStatusBlock, &v39, 0x28u, FileBasicInformation) >= 0 )
  {
    v14 = (8 * (a6 & 1)) | 1;
    *(_QWORD *)&v34[0] = v40;
    DWORD2(v34[2]) = v14;
    if ( a5 )
    {
      v15 = (wchar_t *)AllocFreeTmpBuffer(536LL);
      v16 = v15;
      if ( !v15 )
        return 0LL;
      *a5 = 0;
      v17 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v15, 0x218u, FileFsAttributeInformation);
      if ( v17 >= 0 && !_wcsnicmp(v16 + 6, L"FAT", 3uLL) )
        *a5 = 1;
      FreeTmpBuffer(v16);
      if ( v17 < 0 )
        return 0LL;
      v7 = (const WCHAR *)Handle;
    }
    if ( a4 )
    {
      v26 = DWORD2(FileInformation);
      if ( a4 > 0 )
        v26 = a4;
      v31 = v26;
      if ( ZwSetInformationFile(a1, &IoStatusBlock, &v31, 8u, FileEndOfFileInformation) < 0 )
        return 0LL;
      v19 = v31;
      v18 = 0;
      *((_QWORD *)&FileInformation + 1) = (unsigned int)v31;
    }
    else
    {
      v18 = HIDWORD(FileInformation);
      v19 = DWORD2(FileInformation);
    }
    if ( !v18 )
    {
      DWORD2(v34[1]) = v19;
      if ( (v14 & 8) == 0 )
      {
        v30 = 0;
        if ( (int)TryGetFileDeviceRemoteBit(a1, &v30) < 0 )
          return 0LL;
        v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v30)) & 2;
        DWORD2(v34[2]) = v14;
      }
      v36.Length = 48;
      v36.RootDirectory = 0LL;
      v36.Attributes = 512;
      v36.ObjectName = 0LL;
      *(_OWORD *)&v36.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
      {
        v20 = ObtainSectionForNetworkedFontFile(
                &DestinationString,
                (struct _FILEVIEW *)v34,
                &v36,
                (union _LARGE_INTEGER *)&FileInformation + 1,
                a4 != 0);
      }
      else
      {
        Handle = 0LL;
        v20 = ZwWin32CreateSectionRetainHandle(
                (int)&v34[2],
                v13,
                (int)&v36,
                (int)&FileInformation + 8,
                a4 != 0 ? 4 : 2,
                v27,
                a1,
                v28,
                v29,
                &Handle);
        if ( v20 >= 0 )
          ZwClose(Handle);
      }
      if ( v20 >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v34[3]) )
        {
          DWORD2(v34[2]) |= 0x10u;
LABEL_23:
          result = 1LL;
          v22 = v34[1];
          *(_OWORD *)a3 = v34[0];
          v23 = v34[2];
          *((_OWORD *)a3 + 1) = v22;
          v24 = v34[3];
          *((_OWORD *)a3 + 2) = v23;
          v25 = v34[4];
          *((_OWORD *)a3 + 3) = v24;
          *((_OWORD *)a3 + 4) = v25;
          return result;
        }
        if ( (int)ScrutinizeFontLoad(0LL, v7) >= 0 )
          goto LABEL_23;
      }
    }
  }
  return 0LL;
}
