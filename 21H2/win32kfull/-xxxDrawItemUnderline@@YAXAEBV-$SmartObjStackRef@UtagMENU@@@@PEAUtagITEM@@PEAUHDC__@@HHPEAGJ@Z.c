/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02475D8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 DPIMetrics; // rax
  LONG v19; // r15d
  WCHAR *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  struct _POINTL v27; // [rsp+30h] [rbp-28h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF
    || (v13 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v13) + 760), (v13 & 0xF) != 0) )
  {
    if ( a7 )
    {
      v27 = 0LL;
      if ( (unsigned int)CALL_LPK(v14) )
      {
        xxxClientGetTextExtentPointW(a3, a6, a7, &v27);
        v15 = (__int64)a1[2];
        if ( !v15 )
          v15 = **a1;
        result = MNGetpItemIndex(v15, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW(a3, a6, a7, (struct tagSIZE *)&v27, 1u);
      }
      DPIMetrics = GetDPIMetrics(v17, v16);
      v13 = (unsigned int)(v27.x - *(_DWORD *)(DPIMetrics + 16));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v13;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v19 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_21:
    v26 = GetDPIMetrics(v13, v12);
    return NtGdiPatBlt(a3, v19, *(_DWORD *)(v26 + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v27 = 0LL;
  if ( (unsigned int)CALL_LPK(v14) )
  {
    xxxClientGetTextExtentPointW(a3, v20, 1, &v27);
    v21 = (__int64)a1[2];
    if ( !v21 )
      v21 = **a1;
    result = MNGetpItemIndex(v21, a2);
    v24 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v20, 1u, (struct tagSIZE *)&v27, 1u);
    v24 = (_DWORD)result == 0;
  }
  if ( !v24 )
  {
    v25 = GetDPIMetrics(v23, v22);
    v13 = (unsigned int)(v27.x - *(_DWORD *)(v25 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v13;
    goto LABEL_21;
  }
  return result;
}
