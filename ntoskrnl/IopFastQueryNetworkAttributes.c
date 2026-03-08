/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x1409449B8
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x140944400 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x14070C240 (FsRtlpCleanupEcps.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v13[14]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[272]; // [rsp+130h] [rbp+30h] BYREF

  Handle[0] = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = 14680072;
  WORD3(v13[4]) = 7;
  LODWORD(v13[4]) = a4 | 0x200000;
  *((_QWORD *)&v13[6] + 1) = a6;
  *(_QWORD *)&v13[3] = a1;
  *(_QWORD *)&v13[9] = v14;
  *(_QWORD *)((char *)&v13[5] + 4) = 0x100000001LL;
  BYTE9(v13[8]) = 1;
  BYTE11(v13[8]) = 1;
  *(_QWORD *)&v13[12] = 1LL;
  memset(&v13[10], 0, 32);
  LOWORD(v13[10]) = 40;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  *(_QWORD *)&v13[12] = PsGetCurrentSilo();
  v10 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (int)v13, *(__int64 *)&v13[12], Handle);
  if ( *((_QWORD *)&v13[10] + 1) )
    FsRtlpCleanupEcps(*((struct _ECP_LIST **)&v13[10] + 1));
  if ( LODWORD(v13[2]) == -1096154543 )
  {
    *(_DWORD *)a5 = v13[1];
    *(_QWORD *)(a5 + 8) = *((_QWORD *)&v13[1] + 1);
  }
  else
  {
    if ( v10 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v10 = -1073741788;
    }
    *(_DWORD *)a5 = v10;
  }
  return 1;
}
