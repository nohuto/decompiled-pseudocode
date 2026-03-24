/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA24
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BBEC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0158EEC (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        WCHAR *SourceString,
        unsigned int a7)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 DPIMetrics; // rax
  LONG v17; // r15d
  WCHAR *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  struct _POINTL v24; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v25; // [rsp+38h] [rbp-20h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF
    || (v12 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v12) + 760), (v12 & 0xF) != 0) )
  {
    if ( a7 )
    {
      v24 = 0LL;
      if ( (unsigned int)CALL_LPK(v13) )
      {
        xxxClientGetTextExtentPointW(a3, SourceString, a7, &v24);
        v14 = (__int64)a1[2];
        if ( !v14 )
          v14 = **a1;
        result = MNGetpItemIndex(v14, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW(a3, SourceString, a7, (struct tagSIZE *)&v24, 1);
      }
      DPIMetrics = GetDPIMetrics(v15);
      v12 = (unsigned int)(v24.x - *(_DWORD *)(DPIMetrics + 16));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v12;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v17 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_21:
    v23 = GetDPIMetrics(v12);
    return NtGdiPatBlt(a3, v17, *(_DWORD *)(v23 + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v25 = 0LL;
  if ( (unsigned int)CALL_LPK(v13) )
  {
    xxxClientGetTextExtentPointW(a3, v18, 1, &v25);
    v19 = (__int64)a1[2];
    if ( !v19 )
      v19 = **a1;
    result = MNGetpItemIndex(v19, a2);
    v21 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v18, 1u, (struct tagSIZE *)&v25, 1);
    v21 = (_DWORD)result == 0;
  }
  if ( !v21 )
  {
    v22 = GetDPIMetrics(v20);
    v12 = (unsigned int)(v25.x - *(_DWORD *)(v22 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v12;
    goto LABEL_21;
  }
  return result;
}
