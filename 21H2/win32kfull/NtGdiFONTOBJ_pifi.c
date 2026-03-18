/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C012A800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0122C7C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C012ABD8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C012AD40 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     FONTOBJ_pifi @ 0x1C012ADB0 (FONTOBJ_pifi.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C015DA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1)
{
  IFIMETRICS *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  struct PFT *v6; // rax
  FONTOBJ *v7; // rsi
  IFIMETRICS *v8; // rax
  IFIMETRICS *v9; // rsi
  IFIMETRICS *v10; // rax
  IFIMETRICS *result; // rax
  char v12; // [rsp+48h] [rbp+10h] BYREF
  struct UMPDOBJ *v13; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  v13 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v7 = (FONTOBJ *)v6;
  if ( v6 )
  {
    v2 = (IFIMETRICS *)*((_QWORD *)v5 + 40);
    if ( !v2 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v12, v6);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v12, v5, 0, 0, 0LL);
      v8 = FONTOBJ_pifi(v7);
      v2 = v8;
      if ( v8 && v8 >= MmSystemRangeStart )
      {
        v9 = v8;
        v10 = (IFIMETRICS *)UMPDOBJ::_AllocUserMem(v5, v8->cjThis, 0);
        v2 = v10;
        if ( v10 )
        {
          memmove(v10, v9, v9->cjThis);
          *((_QWORD *)v5 + 40) = v2;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v12, v5, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v12);
    }
  }
  result = v2;
  --*((_DWORD *)v5 + 105);
  return result;
}
