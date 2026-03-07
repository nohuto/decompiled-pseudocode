char __fastcall Interrupter_QueryBusEdgeInformationRoutineWithIsrSync(__int64 a1, __int64 *a2)
{
  _BYTE *v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _DWORD *v5; // r8
  _DWORD *v6; // r8
  _DWORD *v7; // r8

  v2 = (_BYTE *)a2[1];
  v3 = *a2;
  if ( v2 )
    *v2 = *(_BYTE *)(v3 + 57);
  v4 = (_QWORD *)a2[2];
  if ( v4 )
    *v4 = *(_QWORD *)(v3 + 64);
  v5 = (_DWORD *)a2[3];
  if ( v5 )
    *v5 = *(_DWORD *)(v3 + 72);
  v6 = (_DWORD *)a2[4];
  if ( v6 )
    *v6 = *(_DWORD *)(v3 + 76);
  v7 = (_DWORD *)a2[5];
  if ( v7 )
    *v7 = *(_DWORD *)(v3 + 80);
  return 1;
}
