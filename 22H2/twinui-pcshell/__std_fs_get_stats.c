/*
 * XREFs of __std_fs_get_stats @ 0x18014DB4C
 * Callers:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x180126794 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x180128288 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

DWORD __fastcall _std_fs_get_stats(LPCWSTR lpFileName, __int64 a2, int a3)
{
  unsigned int LastError; // ebx
  unsigned __int8 v6; // di
  DWORD result; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  HANDLE FileW; // rdi
  _DWORD v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v12[4]; // [rsp+48h] [rbp-38h] BYREF
  int FileInformation; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  unsigned int v17; // [rsp+68h] [rbp-18h]
  unsigned int v18; // [rsp+6Ch] [rbp-14h]

  LastError = a3 & 0xFFFFFFFE;
  v6 = a3 & 1;
  if ( (a3 & 1) != 0 && (a3 & 4) != 0 )
    return 87;
  if ( !LastError )
    return 0;
  if ( (a3 & 0x2A) != 0 )
  {
    if ( !GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &FileInformation) )
      return GetLastError();
    if ( !v6 || (FileInformation & 0x400) == 0 )
    {
      v8 = v17;
      *(_DWORD *)(a2 + 16) = FileInformation;
      v9 = v18 + (v8 << 32);
      *(_QWORD *)a2 = v16;
      LastError &= 0xFFFFFFD5;
      *(_QWORD *)(a2 + 8) = v9;
    }
  }
  if ( !LastError )
    return 0;
  FileW = CreateFileW(lpFileName, 0x80u, 7u, 0LL, 3u, ((v6 ^ 1u) + 16) << 21, 0LL);
  if ( FileW != (HANDLE)-1LL || (result = GetLastError()) == 0 )
  {
    if ( LastError != 6 && (LastError & 0x22) != 0 )
    {
      if ( !GetFileInformationByHandleEx(FileW, FileBasicInfo, v12, 0x28u) )
      {
        LastError = GetLastError();
        if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
        {
          _o_terminate();
          __debugbreak();
        }
        return LastError;
      }
      LastError &= 0xFFFFFFDD;
      *(_DWORD *)(a2 + 16) = v17;
      *(_QWORD *)a2 = v15;
    }
    if ( (LastError & 6) != 0 )
    {
      if ( !GetFileInformationByHandleEx(FileW, FileAttributeTagInfo, v11, 8u) )
      {
        LastError = GetLastError();
        if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
          return LastError;
        _o_terminate();
        __debugbreak();
      }
      LastError &= 0xFFFFFFF9;
      *(_DWORD *)(a2 + 16) = v11[0];
      *(_DWORD *)(a2 + 20) = v11[1];
    }
    if ( (LastError & 0x18) == 0 )
      goto LABEL_34;
    if ( GetFileInformationByHandleEx(FileW, FileStandardInfo, v12, 0x18u) )
    {
LABEL_33:
      LastError &= 0xFFFFFFE7;
      *(_QWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 24) = v15;
LABEL_34:
      if ( LastError )
      {
        if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
          return 50;
      }
      else if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
      {
        return 0;
      }
      _o_terminate();
      __debugbreak();
      return 50;
    }
    LastError = GetLastError();
    if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
    {
      _o_terminate();
      __debugbreak();
      goto LABEL_33;
    }
    return LastError;
  }
  return result;
}
