/*
 * XREFs of ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358
 * Callers:
 *     EditionShowSystemCursor @ 0x1C007A400 (EditionShowSystemCursor.c)
 *     SetPointerMetaVisibility @ 0x1C0097EB0 (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C016A9CA (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01D53B0 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     GreHidePointer @ 0x1C0026210 (GreHidePointer.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00FCE3C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A0E4 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

char __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  int v2; // ebp
  char v3; // bl
  char v4; // si
  int v5; // edi
  CursorApiRouter *v6; // rcx
  int v7; // edi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  CursorApiRouter *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = this;
  v2 = a2;
  v3 = 0;
  v4 = 0;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v13, (struct _EX_PUSH_LOCK *)&qword_1C03374D8);
  v5 = dword_1C03374D0;
  if ( dword_1C03374D0 != 1 )
  {
    if ( dword_1C03374D0 != 2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process((unsigned int)(dword_1C03374D0 - 1));
  if ( CurrentProcessWin32Process )
  {
    if ( (_BYTE)v2 )
    {
      v10 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v10 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
      {
        if ( !gulCachedPointerRefs )
        {
          byte_1C03374BE = 1;
          v4 = 1;
          v10 = *(_DWORD *)(CurrentProcessWin32Process + 12);
        }
        ++gulCachedPointerRefs;
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v10 | 0x40000000;
      }
    }
    else
    {
      v11 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v11 & 0x40000000) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v11 & 0xBFFFFFFF;
        v12 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v12 == 1 )
          {
            byte_1C03374BE = 0;
LABEL_3:
            v4 = 1;
          }
        }
      }
    }
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        return (unsigned int)GreHidePointer(v2) != 0;
    }
    else
    {
      if ( (_BYTE)v2 )
        CursorApiRouter::DwmSetPointer(0LL, 0);
      else
        CursorApiRouter::ForceSetCurrentCursorShape(v6);
      return 1;
    }
  }
  return v3;
}
