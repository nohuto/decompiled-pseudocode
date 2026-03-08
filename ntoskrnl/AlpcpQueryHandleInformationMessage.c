/*
 * XREFs of AlpcpQueryHandleInformationMessage @ 0x1407119D8
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140715730 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpQueryHandleInformationMessage(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rcx
  char PreviousMode; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // edx
  __int64 v14[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]
  _DWORD v16[6]; // [rsp+60h] [rbp-18h] BYREF

  v14[0] = 0LL;
  *(_QWORD *)&v15 = 0LL;
  v16[0] = 0;
  if ( a4 != 20 )
    return 3221225476LL;
  v7 = *a3;
  LODWORD(v15) = *a3;
  v8 = *(_QWORD *)(a2 + 152);
  if ( !v8 || v7 >= *(_DWORD *)(v8 + 4) )
    return 3221225480LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 48LL * (unsigned int)v15;
  if ( (*(_DWORD *)(v10 + v8) & *(_DWORD *)(a1 + 320)) == 0 )
    return 3221225508LL;
  v11 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v11 = *(_QWORD *)(a1 + 24);
  if ( !v11 )
    return 3221225506LL;
  HIDWORD(v15) = *(_DWORD *)(v10 + v8);
  v12 = ObCompleteObjectDuplication((__int64 *)(v10 + v8 + 8), v11, PreviousMode, v14, v16);
  DWORD2(v15) = v14[0];
  if ( v12 >= 0 )
  {
    *(_OWORD *)a3 = v15;
    a3[4] = v16[0];
    if ( a5 )
      *a5 = 20;
  }
  return (unsigned int)v12;
}
