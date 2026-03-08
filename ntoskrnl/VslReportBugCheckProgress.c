/*
 * XREFs of VslReportBugCheckProgress @ 0x140549EE0
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x140AA7484 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslReportBugCheckProgress(char *a1, __int128 *a2, const void *a3, unsigned int a4, int a5)
{
  size_t v6; // rbx
  unsigned int v9; // edi
  wchar_t **v10; // rcx
  unsigned __int16 *v11; // rax
  int v12; // r8d
  int v13; // edx
  __int128 v14; // xmm0
  __int64 result; // rax
  __int128 v16; // xmm0
  _OWORD v17[7]; // [rsp+20h] [rbp-51h] BYREF

  v6 = a4;
  if ( (a5 & 1) == 0 || a4 > 8 )
    return 3221225485LL;
  memset(v17, 0, 0x68uLL);
  v9 = 0;
  v10 = IumBugCheckVariables;
  while ( 1 )
  {
    v11 = (unsigned __int16 *)a1;
    do
    {
      v12 = *(unsigned __int16 *)((char *)v11 + (char *)*v10 - a1);
      v13 = *v11 - v12;
      if ( v13 )
        break;
      ++v11;
    }
    while ( v12 );
    if ( !v13 )
      break;
    ++v9;
    ++v10;
    if ( v9 >= 4 )
      goto LABEL_11;
  }
  *((_QWORD *)&v17[0] + 1) = v9;
LABEL_11:
  if ( v9 == 4 )
    return 3221225485LL;
  v14 = *a2;
  memset(&v17[2], 0, 24);
  v17[1] = v14;
  if ( (a5 & 0x40) != 0 )
    result = 3221225485LL;
  else
    result = VslpEnterIumSecureMode(2u, 261, 0, (__int64)v17);
  if ( (_DWORD)v6 )
  {
    memmove(&v17[2], a3, v6);
    v16 = *a2;
    *((_QWORD *)&v17[0] + 1) = v9;
    *(_QWORD *)&v17[3] = a5 | 6u;
    v17[1] = v16;
    *((_QWORD *)&v17[2] + 1) = v6;
    return VslpEnterIumSecureMode(2u, 261, 0, (__int64)v17);
  }
  return result;
}
