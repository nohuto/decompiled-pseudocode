/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0148150
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008DC2C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdi
  struct REGION *v9; // rax
  __int64 v11; // [rsp+38h] [rbp-89h] BYREF
  int v12; // [rsp+40h] [rbp-81h]
  __int64 v13; // [rsp+48h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-71h] BYREF
  DC *v15[6]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v16[2]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v17[32]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v18[80]; // [rsp+B8h] [rbp-9h] BYREF
  struct _POINTL v19; // [rsp+140h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v5 = 0;
  if ( v15[0] )
  {
    if ( *((_WORD *)v15[0] + 6) > 1u )
    {
      v6 = *((_QWORD *)v15[0] + 6);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 40);
      else
        v7 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(13LL, v7, *((unsigned __int16 *)v15[0] + 6));
      goto LABEL_7;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v15, 1);
    if ( (v17[24] & 1) != 0 )
    {
      v8 = *((_QWORD *)v15[0] + 20);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 32) > 1u )
        {
          v13 = *((_QWORD *)v15[0] + 20);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11, *(_DWORD *)(v8 + 80));
          if ( !v11 )
          {
            EngSetLastError(8u);
            if ( v12 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
            goto LABEL_22;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v11, (struct RGNOBJ *)&v13);
          v8 = v11;
          ++*(_DWORD *)(v11 + 32);
          --*(_DWORD *)(v13 + 32);
          *((_QWORD *)v15[0] + 20) = v8;
          if ( v12 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
        }
        v14 = v8;
        v19.x = a2;
        v19.y = a3;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, (struct XDCOBJ *)v15, -2147483132);
        if ( ((*(_DWORD *)(v16[0] + 32LL) & 2) != 0
           || EXFORMOBJ::bXform((EXFORMOBJ *)v16, (struct _VECTORL *)&v19, (struct _VECTORL *)&v19, 1uLL))
          && RGNOBJ::bOffset((RGNOBJ *)&v14, &v19) )
        {
          DC::bTightenRao(v15[0]);
          v9 = DC::prgnVisSnap(v15[0]);
          DC::vUpdate_VisRect(v15[0], v9);
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v14);
        }
        else
        {
          EngSetLastError(0x3EBu);
        }
        goto LABEL_22;
      }
      v5 = 2;
    }
LABEL_22:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    goto LABEL_23;
  }
LABEL_7:
  EngSetLastError(6u);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v5;
}
