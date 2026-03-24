/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B4CB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C011F940 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C013D5F0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C016CEA0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B117C (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B1540 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02BCF20 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rbx
  unsigned int v9; // edi
  SURFOBJ *v10; // r14
  unsigned __int64 v11; // rax
  PATHOBJ *v12; // r15
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v14; // rsi
  LINEATTRS *v15; // rdi
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v18; // [rsp+28h] [rbp-39h] BYREF
  SURFOBJ *pso[3]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v20[40]; // [rsp+70h] [rbp+Fh] BYREF
  LINEATTRS *pla; // [rsp+E0h] [rbp+7Fh] BYREF
  va_list plaa; // [rsp+E0h] [rbp+7Fh]
  va_list va1; // [rsp+E8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v18, 0, sizeof(v18));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v9 = -1073741811;
    goto LABEL_23;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v10 = pso[0];
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
  v12 = (PATHOBJ *)v11;
  if ( v10 && v11 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v18) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v8, a2, &v10->sizlBitmap);
    v14 = DDIOBJ;
    if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 )
    {
      v15 = pla;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        4169);
    v15 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        4174);
    if ( !v14 )
      goto LABEL_19;
    if ( v15 )
    {
LABEL_18:
      PATHOBJ_vEnumStartClipLines(v12, v14, v10, v15);
LABEL_19:
      if ( v15 )
      {
        pstyle = v15->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  v9 = 0;
  CAutoTGO::~CAutoTGO((CAutoTGO *)v20);
  UMPDSURFOBJ::Cleanup(pso);
  CAutoTGO::~CAutoTGO((CAutoTGO *)v20);
LABEL_23:
  if ( v8 )
    --*((_DWORD *)v8 + 105);
  return v9;
}
