/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0157410
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5CF0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  struct REGION *v10; // rax
  __int64 v12; // [rsp+38h] [rbp-89h] BYREF
  int v13; // [rsp+40h] [rbp-81h]
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  DC *v16[6]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v18[32]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v19[80]; // [rsp+B8h] [rbp-9h] BYREF
  struct _POINTL v20; // [rsp+140h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v5 = 0;
  if ( v16[0] )
  {
    v6 = *((unsigned __int16 *)v16[0] + 6);
    if ( (unsigned __int16)v6 > 1u )
    {
      v7 = *((_QWORD *)v16[0] + 6);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 40);
      else
        v8 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(13LL, v8, v6, 0LL, 0LL);
      goto LABEL_7;
    }
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v16, 1);
    if ( (v18[24] & 1) != 0 )
    {
      v9 = *((_QWORD *)v16[0] + 20);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 32) > 1u )
        {
          v14 = *((_QWORD *)v16[0] + 20);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, *(_DWORD *)(v9 + 80));
          if ( !v12 )
          {
            EngSetLastError(8u);
            if ( v13 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
            goto LABEL_22;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v12, (struct RGNOBJ *)&v14);
          v9 = v12;
          ++*(_DWORD *)(v12 + 32);
          --*(_DWORD *)(v14 + 32);
          *((_QWORD *)v16[0] + 20) = v9;
          if ( v13 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
        }
        v15 = v9;
        v20.x = a2;
        v20.y = a3;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v16, -2147483132);
        if ( ((*(_DWORD *)(v17[0] + 32LL) & 2) != 0
           || EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct _VECTORL *)&v20, (struct _VECTORL *)&v20, 1uLL))
          && RGNOBJ::bOffset((RGNOBJ *)&v15, &v20) )
        {
          DC::bTightenRao(v16[0]);
          v10 = DC::prgnVisSnap(v16[0]);
          DC::vUpdate_VisRect(v16[0], v10);
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
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
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
    goto LABEL_23;
  }
LABEL_7:
  EngSetLastError(6u);
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v5;
}
