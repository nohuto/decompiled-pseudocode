__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  struct REGION *v10; // rax
  unsigned int v11; // edi
  DC *v12[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v17[32]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp+17h] BYREF
  __int16 v19; // [rsp+A0h] [rbp+27h]
  struct _POINTL v20; // [rsp+F8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = 0;
  if ( !v12[0] )
  {
LABEL_2:
    EngSetLastError(6u);
LABEL_25:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
  if ( *((_WORD *)v12[0] + 6) > 1u )
  {
    v6 = *((_QWORD *)v12[0] + 6);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 40);
    else
      v7 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(13, v7, *((unsigned __int16 *)v12[0] + 6), 0LL, 0LL);
    goto LABEL_2;
  }
  v18[0] = 0LL;
  v18[1] = 0LL;
  v19 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v12, 1);
  if ( (v17[24] & 1) == 0 )
  {
LABEL_14:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v5;
  }
  v8 = *((_QWORD *)v12[0] + 20);
  if ( !v8 )
  {
    v5 = 2;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v8 + 76) > 1u )
  {
    v14 = *((_QWORD *)v12[0] + 20);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, *(_DWORD *)(v8 + 48));
    if ( !v13 )
    {
      EngSetLastError(8u);
      goto LABEL_14;
    }
    RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)&v14);
    v8 = v13;
    ++*(_DWORD *)(v13 + 76);
    --*(_DWORD *)(v14 + 76);
    *((_QWORD *)v12[0] + 20) = v8;
  }
  v15 = v8;
  v20.x = a2;
  v20.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, (struct XDCOBJ *)v12, -2147483132);
  if ( (*(_DWORD *)(v16[0] + 32LL) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)v16, (struct _VECTORL *)&v20, (struct _VECTORL *)&v20, 1uLL)
    || !RGNOBJ::bOffset((RGNOBJ *)&v15, &v20) )
  {
    EngSetLastError(0x3EBu);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    goto LABEL_25;
  }
  DC::bTightenRao(v12[0]);
  v10 = DC::prgnVisSnap(v12[0]);
  DC::vUpdate_VisRect(v12[0], v10);
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
  if ( v18[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v18);
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v11;
}
