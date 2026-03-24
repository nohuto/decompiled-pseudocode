/*
 * XREFs of AllocateObject @ 0x1C002A850
 * Callers:
 *     HmgAlloc @ 0x1C0001410 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C009F904 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, __int64 a2, int a3)
{
  __int64 v4; // r8
  BOOL v5; // esi
  unsigned int v6; // edi
  void * near *v7; // rbx
  int v8; // eax
  __int64 v9; // rbx

  v4 = 1LL;
  v5 = gulGdiHmgrTraceObjectType && (_DWORD)a2 == gulGdiHmgrTraceObjectType;
  v6 = Size + 160;
  if ( !v5 )
    v6 = Size;
  if ( *((_DWORD *)&laSize + (unsigned int)a2) < v6 )
  {
    if ( a3 )
    {
      v9 = PALLOCMEM2(v6);
    }
    else
    {
      v9 = PALLOCMEM2(v6);
      if ( !v9 )
        goto LABEL_30;
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    if ( v9 )
    {
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v9 + v6 - 160LL), 0LL);
      return v9;
    }
  }
  else
  {
    v7 = (&pHmgLookAsideList)[(unsigned int)a2];
    if ( qword_1C0257D50 )
      v8 = qword_1C0257D50(Size, a2, 1LL);
    else
      v8 = -1073741637;
    if ( v8 >= 0 && qword_1C0257D58 )
      v9 = qword_1C0257D58(v7, a2, v4);
    else
      v9 = 0LL;
    if ( v9 )
    {
      if ( a3 )
      {
        memset((void *)v9, 0, v6);
      }
      else
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
      }
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v9 + v6 - 160LL), 0LL);
      *(_WORD *)(v9 + 14) = 0x8000;
      return v9;
    }
  }
LABEL_30:
  EngSetLastError(8u);
  return 0LL;
}
