/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C00B2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00B30B0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00B7720 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0147A10 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C016B498 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // r14d
  ULONG64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r10
  LONG v13; // r8d
  LONG v14; // r9d
  int v15; // ecx
  int v16; // r10d
  __int64 v17; // rax
  struct _RECTL v19; // [rsp+60h] [rbp-C8h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v21[6]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v22[24]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 *v23; // [rsp+C8h] [rbp-60h]

  v5 = a4;
  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v21, a1);
      if ( v21[0] )
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
              (DWMSCREENREADMODIFYWRITEASSIST *)v22,
              (struct XDCOBJ *)v21);
            v11 = *v23;
            if ( *v23 )
            {
              if ( *(_DWORD *)(v11 + 492) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
              {
                for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v16 + 1) )
                {
                  v13 = *((_DWORD *)a3 + 6 * i + 1);
                  v14 = v13 + *((_DWORD *)a3 + 6 * i + 3);
                  v15 = *((_DWORD *)a3 + 6 * i + 2);
                  v19.left = *((_DWORD *)a3 + 6 * i);
                  v19.top = v13;
                  v19.right = v19.left + v15;
                  v19.bottom = v14;
                  ERECTL::vOrder((ERECTL *)&v19);
                  if ( v16 )
                    ERECTL::operator|=(&v20, &v19);
                  else
                    v20 = v19;
                }
                if ( !ERECTL::bEmpty((ERECTL *)&v20) )
                  v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v22, &v20);
              }
            }
          }
          v8 = GrePolyPatBltInternal(
                 (struct XDCOBJ *)v21,
                 a2,
                 a3,
                 v5,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 180LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v21);
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v17 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v17);
  }
  return v8;
}
