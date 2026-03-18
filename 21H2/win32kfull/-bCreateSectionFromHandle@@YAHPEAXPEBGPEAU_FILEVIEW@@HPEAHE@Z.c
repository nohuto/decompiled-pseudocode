/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000D29C
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000FCB0 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00E2C80 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C000D21C (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C000D590 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C000D6D8 (ZwWin32CreateSection.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F7AC8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0286674 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSectionFromHandle(
        void *a1,
        PCWSTR SourceString,
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
  int v20; // eax
  int Section; // eax
  __int64 result; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // eax
  int v28; // [rsp+28h] [rbp-D8h]
  void *v29; // [rsp+38h] [rbp-C8h]
  bool v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v33[5]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v34; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES v36; // [rsp+D8h] [rbp-28h] BYREF
  __int128 FileInformation; // [rsp+108h] [rbp+8h] BYREF
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int128 v39; // [rsp+120h] [rbp+20h] BYREF
  __int128 v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+40h]

  v34 = SourceString;
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
  memset(v33, 0, sizeof(v33));
  v10 = v33[1];
  *(_OWORD *)a3 = v33[0];
  *((_OWORD *)a3 + 1) = v10;
  v11 = v33[3];
  DWORD2(v33[2]) = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = v33[2];
  v12 = v33[4];
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v7);
  *(_QWORD *)&v33[3] = a1;
  if ( a1
    && ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
    && ZwQueryInformationFile(a1, &IoStatusBlock, &v39, 0x28u, FileBasicInformation) >= 0 )
  {
    v14 = (8 * (a6 & 1)) | 1;
    *(_QWORD *)&v33[0] = v40;
    DWORD2(v33[2]) = v14;
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
      v7 = v34;
    }
    if ( a4 )
    {
      v27 = DWORD2(FileInformation);
      if ( a4 > 0 )
        v27 = a4;
      v31 = v27;
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
      DWORD2(v33[1]) = v19;
      if ( (v14 & 8) == 0 )
      {
        v30 = 0;
        if ( (int)TryGetFileDeviceRemoteBit(a1, &v30) < 0 )
          return 0LL;
        v20 = v14 | (2 * v30);
        LOBYTE(v14) = v14 | (2 * v30);
        DWORD2(v33[2]) = v20;
      }
      v36.Length = 48;
      v36.RootDirectory = 0LL;
      v36.Attributes = 512;
      v36.ObjectName = 0LL;
      *(_OWORD *)&v36.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
        Section = ObtainSectionForNetworkedFontFile(
                    &DestinationString,
                    (struct _FILEVIEW *)v33,
                    &v36,
                    (union _LARGE_INTEGER *)&FileInformation + 1,
                    a4 != 0);
      else
        Section = ZwWin32CreateSection(
                    (int)&v33[2],
                    v13,
                    (int)&v36,
                    (int)&FileInformation + 8,
                    a4 != 0 ? 4 : 2,
                    v28,
                    (__int64)a1,
                    v29);
      if ( Section >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v33[3]) )
        {
          DWORD2(v33[2]) |= 0x10u;
LABEL_22:
          result = 1LL;
          v23 = v33[1];
          *(_OWORD *)a3 = v33[0];
          v24 = v33[2];
          *((_OWORD *)a3 + 1) = v23;
          v25 = v33[3];
          *((_OWORD *)a3 + 2) = v24;
          v26 = v33[4];
          *((_OWORD *)a3 + 3) = v25;
          *((_OWORD *)a3 + 4) = v26;
          return result;
        }
        if ( (int)ScrutinizeFontLoad(0LL, v7) >= 0 )
          goto LABEL_22;
      }
    }
  }
  return 0LL;
}
