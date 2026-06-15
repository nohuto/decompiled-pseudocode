/*
 * XREFs of sub_18012D5F0 @ 0x18012D5F0
 * Callers:
 *     sub_1800E21F0 @ 0x1800E21F0 (sub_1800E21F0.c)
 * Callees:
 *     sub_18012D69C @ 0x18012D69C (sub_18012D69C.c)
 */

__int64 __fastcall sub_18012D5F0(const WCHAR *a1, __int64 a2, _QWORD *a3)
{
  int v4; // edi
  HANDLE FileW; // rax
  signed int LastError; // eax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // ebx

  v4 = (int)a1;
  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x80000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_18012D69C(*((_QWORD *)off_18019C348 + 2), v7, v8, v4, v9);
    }
    return v9;
  }
  else
  {
    *a3 = FileW;
    return 0LL;
  }
}
