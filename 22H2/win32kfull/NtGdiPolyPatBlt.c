/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C002C310
 * Callers:
 *     <none>
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013F338 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C029A604 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // r14d
  ULONG64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r10
  LONG v15; // r8d
  LONG v16; // r9d
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rax
  struct _RECTL v20; // [rsp+60h] [rbp-C8h] BYREF
  struct _RECTL v21; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v22[6]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 *v24; // [rsp+C8h] [rbp-60h]

  v5 = a4;
  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v22, a1);
      if ( v22[0] )
      {
        if ( (unsigned int)v5 > 0xAAAAAAA )
        {
          v8 = 0;
        }
        else if ( 24 * v5 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = (ULONG64)a3 + 24 * v5;
          if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        if ( v8 )
        {
          if ( ((gajRop3[(unsigned __int8)a2] | gajRop3[BYTE1(a2)]) & 0xB2) != 0 )
          {
            DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
              (DWMSCREENREADMODIFYWRITEASSIST *)v23,
              (struct XDCOBJ *)v22);
            v11 = *v24;
            if ( *v24 && *(_DWORD *)(v11 + 492) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v18 + 1) )
              {
                v15 = *((_DWORD *)a3 + 6 * i + 1);
                v16 = v15 + *((_DWORD *)a3 + 6 * i + 3);
                v17 = *((_DWORD *)a3 + 6 * i + 2);
                v20.left = *((_DWORD *)a3 + 6 * i);
                v20.top = v15;
                v20.right = v20.left + v17;
                v20.bottom = v16;
                ERECTL::vOrder((ERECTL *)&v20);
                if ( v18 )
                  ERECTL::operator|=(&v21, &v20);
                else
                  v21 = v20;
              }
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v21) )
                v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v23, &v21);
            }
          }
          v8 = GrePolyPatBltInternal(
                 (struct XDCOBJ *)v22,
                 a2,
                 a3,
                 v5,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 180LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v22);
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v19 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v19);
  }
  return v8;
}
