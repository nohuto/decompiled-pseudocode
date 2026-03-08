/*
 * XREFs of ExpQueryInterruptSteeringInformation @ 0x140849CE4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeIntSteerGetSteeringMode @ 0x14028F388 (KeIntSteerGetSteeringMode.c)
 *     KeIntSteerIsSteeringEnabled @ 0x140303194 (KeIntSteerIsSteeringEnabled.c)
 */

__int64 __fastcall ExpQueryInterruptSteeringInformation(int *a1, __int64 a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  char v8; // r8
  char v9; // r10
  bool v10; // zf
  __int128 v12; // [rsp+60h] [rbp-18h] BYREF

  v6 = 0;
  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return (unsigned int)-1073741790;
  if ( !a1 || (_DWORD)a2 != 24 )
    return (unsigned int)-1073741820;
  v7 = *a1;
  LOBYTE(a2) = *((_BYTE *)a1 + 4);
  v8 = *((_BYTE *)a1 + 5);
  v9 = *((_BYTE *)a1 + 6);
  v12 = *(_OWORD *)(a1 + 2);
  if ( a4 < 4 )
  {
    if ( a5 )
      *a5 = 4;
    return (unsigned int)-1073741820;
  }
  *a3 = 0;
  if ( (_BYTE)a2 && v7 == -1 )
    v10 = KeIntSteerIsSteeringEnabled() == 0;
  else
    v10 = (unsigned int)KeIntSteerGetSteeringMode((char)a1, a2, v9, v8 != 0, (__int64)&v12) == 0;
  if ( !v10 )
    *a3 = 1;
  return v6;
}
