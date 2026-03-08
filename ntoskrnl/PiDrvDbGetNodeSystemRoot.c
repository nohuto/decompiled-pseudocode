/*
 * XREFs of PiDrvDbGetNodeSystemRoot @ 0x14081D958
 * Callers:
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14096DFEC (PiDrvDbResolveKeyFilePaths.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDrvDbGetNodeSystemRoot(__int64 a1, _QWORD *a2)
{
  int ObjectProperty; // r8d
  __int64 StringRoutine; // rax
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // rax
  int v10; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF

  ObjectProperty = 0;
  v10 = 0;
  v11 = 0;
  *a2 = 0LL;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    *(_WORD *)(a1 + 504) = 0;
    *(_WORD *)(a1 + 506) = 520;
    StringRoutine = ExpAllocateStringRoutine(520LL);
    *(_QWORD *)(a1 + 512) = StringRoutine;
    if ( !StringRoutine )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 24),
                       7LL,
                       *(_QWORD *)(a1 + 72),
                       0LL,
                       (__int64)DEVPKEY_DriverDatabase_SystemRoot,
                       (__int64)&v10,
                       StringRoutine,
                       *(unsigned __int16 *)(a1 + 506),
                       (__int64)&v11,
                       0);
    if ( ObjectProperty < 0
      || v10 != 18
      || v11 <= 2
      || (v6 = *(_QWORD *)(a1 + 512), *(_WORD *)(v6 + 2 * ((unsigned __int64)v11 >> 1) - 2)) )
    {
      ObjectProperty = 0;
      **(_WORD **)(a1 + 512) = 0;
    }
    else
    {
      v7 = v11 - 2;
      *(_WORD *)(a1 + 504) = v11 - 2;
      if ( v7 > 2u )
      {
        v8 = (unsigned __int64)v7 >> 1;
        if ( *(_WORD *)(v6 + 2 * v8 - 2) == 92 )
        {
          *(_WORD *)(v6 + 2 * v8 - 2) = 0;
          *(_WORD *)(a1 + 504) -= 2;
        }
      }
    }
  }
  if ( **(_WORD **)(a1 + 512) )
    *a2 = a1 + 504;
  else
    return (unsigned int)-1073741275;
  return (unsigned int)ObjectProperty;
}
