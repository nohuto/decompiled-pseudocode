/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C0043A80
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013202C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C015E3AC (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // r14d
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r10
  LONG v13; // r8d
  LONG v14; // r9d
  int v15; // ecx
  __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // rax
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
          v10 = (char *)a3 + 24 * v5;
          if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 < (char *)a3 )
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
            if ( *v24 )
            {
              if ( *(_DWORD *)(v11 + 492) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
              {
                for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v17 + 1) )
                {
                  v13 = *((_DWORD *)a3 + 6 * i + 1);
                  v14 = v13 + *((_DWORD *)a3 + 6 * i + 3);
                  v15 = *((_DWORD *)a3 + 6 * i + 2);
                  v20.left = *((_DWORD *)a3 + 6 * i);
                  v20.top = v13;
                  v20.right = v20.left + v15;
                  v20.bottom = v14;
                  ERECTL::vOrder((ERECTL *)&v20);
                  if ( v17 )
                    ERECTL::operator|=(&v21, &v20, v16);
                  else
                    v21 = v20;
                }
                if ( !ERECTL::bEmpty((ERECTL *)&v21) )
                  v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v23, &v21);
              }
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
    v18 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v18);
  }
  return v8;
}
