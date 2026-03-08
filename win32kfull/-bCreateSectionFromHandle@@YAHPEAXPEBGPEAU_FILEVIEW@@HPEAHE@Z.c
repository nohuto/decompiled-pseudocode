/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BC0F8
 * Callers:
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00BACFC (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BBDF0 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00BC3EC (ZwWin32CreateSection.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BC504 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00BC65C (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F2EE4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028D380 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  NTSTATUS v19; // r13d
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int Section; // eax
  __int64 result; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  unsigned int v29; // eax
  int v30; // [rsp+28h] [rbp-D8h]
  void *v31; // [rsp+38h] [rbp-C8h]
  bool v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h]
  int v37[4]; // [rsp+90h] [rbp-70h] BYREF
  void *v38[2]; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  PCWSTR v40; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES v42; // [rsp+D8h] [rbp-28h] BYREF
  __int128 FileInformation; // [rsp+108h] [rbp+8h] BYREF
  __int64 v44; // [rsp+118h] [rbp+18h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+40h]

  v40 = SourceString;
  *(&v42.Length + 1) = 0;
  *(&v42.Attributes + 1) = 0;
  v7 = SourceString;
  v44 = 0LL;
  v47 = 0LL;
  v33 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  DestinationString = 0LL;
  memset_0(&v35, 0, 0x50uLL);
  v10 = v36;
  *(_OWORD *)a3 = v35;
  *((_OWORD *)a3 + 1) = v10;
  v11 = *(_OWORD *)v38;
  v37[2] = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = *(_OWORD *)v37;
  v12 = v39;
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v7);
  v38[0] = a1;
  if ( a1
    && ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
    && ZwQueryInformationFile(a1, &IoStatusBlock, &v45, 0x28u, FileBasicInformation) >= 0 )
  {
    v14 = (8 * (a6 & 1)) | 1;
    *(_QWORD *)&v35 = v46;
    v37[2] = v14;
    if ( a5 )
    {
      v15 = (wchar_t *)AllocFreeTmpBuffer(536LL);
      v16 = v15;
      if ( !v15 )
        return 0LL;
      *a5 = 0;
      v19 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v15, 0x218u, FileFsAttributeInformation);
      if ( v19 >= 0 && !_wcsnicmp(v16 + 6, L"FAT", 3uLL) )
        *a5 = 1;
      FreeTmpBuffer(v16, v17, v18);
      if ( v19 < 0 )
        return 0LL;
      v7 = v40;
    }
    if ( a4 )
    {
      v29 = DWORD2(FileInformation);
      if ( a4 > 0 )
        v29 = a4;
      v33 = v29;
      if ( ZwSetInformationFile(a1, &IoStatusBlock, &v33, 8u, FileEndOfFileInformation) < 0 )
        return 0LL;
      v21 = v33;
      v20 = 0;
      *((_QWORD *)&FileInformation + 1) = (unsigned int)v33;
    }
    else
    {
      v20 = HIDWORD(FileInformation);
      v21 = DWORD2(FileInformation);
    }
    if ( !v20 )
    {
      DWORD2(v36) = v21;
      if ( (v14 & 8) == 0 )
      {
        v32 = 0;
        if ( (int)TryGetFileDeviceRemoteBit(a1, &v32) < 0 )
          return 0LL;
        v22 = v14 | (2 * v32);
        LOBYTE(v14) = v14 | (2 * v32);
        v37[2] = v22;
      }
      v42.Length = 48;
      v42.RootDirectory = 0LL;
      v42.Attributes = 512;
      v42.ObjectName = 0LL;
      *(_OWORD *)&v42.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
        Section = ObtainSectionForNetworkedFontFile(
                    &DestinationString,
                    (struct _FILEVIEW *)&v35,
                    &v42,
                    (union _LARGE_INTEGER *)&FileInformation + 1,
                    a4 != 0);
      else
        Section = ZwWin32CreateSection(
                    (int)v37,
                    v13,
                    (int)&v42,
                    (int)&FileInformation + 8,
                    a4 != 0 ? 4 : 2,
                    v30,
                    (__int64)a1,
                    v31);
      if ( Section >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(v38[0]) )
        {
          v37[2] |= 0x10u;
LABEL_22:
          result = 1LL;
          v25 = v36;
          *(_OWORD *)a3 = v35;
          v26 = *(_OWORD *)v37;
          *((_OWORD *)a3 + 1) = v25;
          v27 = *(_OWORD *)v38;
          *((_OWORD *)a3 + 2) = v26;
          v28 = v39;
          *((_OWORD *)a3 + 3) = v27;
          *((_OWORD *)a3 + 4) = v28;
          return result;
        }
        if ( (int)ScrutinizeFontLoad(0LL, v7) >= 0 )
          goto LABEL_22;
      }
    }
  }
  return 0LL;
}
