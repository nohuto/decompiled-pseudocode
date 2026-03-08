/*
 * XREFs of WmipSMBiosFindStructure @ 0x1409DD320
 * Callers:
 *     WmipSMBiosHideMachine @ 0x1409DD3A8 (WmipSMBiosHideMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipSMBiosFindStructure(char a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _BYTE *a5, int a6)
{
  _BYTE *v6; // r10
  unsigned __int64 v7; // r11
  int v8; // ebx
  _WORD *i; // r10
  _WORD *v11; // rcx

  v6 = a5;
  v7 = (unsigned __int64)&a5[a6];
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v7 )
      return 3221225524LL;
    if ( *v6 == a1 && ++v8 > a2 )
      break;
    for ( i = &v6[(unsigned __int8)v6[1]]; (unsigned __int64)i < v7 && *i; i = (_WORD *)((char *)i + 1) )
      ;
    v6 = i + 1;
  }
  v11 = &v6[(unsigned __int8)v6[1]];
  *a3 = v6;
  while ( (unsigned __int64)v11 < v7 && *v11 )
    v11 = (_WORD *)((char *)v11 + 1);
  *a4 = (_DWORD)v11 - (_DWORD)v6 + 2;
  return 0LL;
}
