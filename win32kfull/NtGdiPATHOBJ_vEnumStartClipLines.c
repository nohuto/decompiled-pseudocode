/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CF650
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C9454 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C9744 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C99BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02C9ED8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02DB5A0 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rdi
  SURFOBJ *v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  PATHOBJ *v13; // rsi
  CLIPOBJ *DDIOBJ; // rax
  LINEATTRS *v15; // rbx
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v18; // [rsp+20h] [rbp-88h] BYREF
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-58h] BYREF
  LINEATTRS *pla; // [rsp+C8h] [rbp+20h] BYREF
  va_list plaa; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v18, 0, sizeof(v18));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
    v9 = pso[0];
    v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
    v13 = (PATHOBJ *)v10;
    if ( v9 && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v18, v11, v12) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v8, a2, &v9->sizlBitmap);
      v15 = pla;
      if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 )
        goto LABEL_8;
      if ( !DDIOBJ )
        goto LABEL_9;
      if ( pla )
      {
LABEL_8:
        PATHOBJ_vEnumStartClipLines(v13, DDIOBJ, v9, pla);
LABEL_9:
        if ( v15 )
        {
          pstyle = v15->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle);
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    --*((_DWORD *)v8 + 105);
    return 0LL;
  }
  return 3221225485LL;
}
