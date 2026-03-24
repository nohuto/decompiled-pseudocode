/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800C08C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  bool v6; // al
  unsigned int v7; // r8d
  __int64 v8; // rdx
  char v10; // cl
  __int64 v12; // rbx

  *a3 = 0;
  v4 = *((_QWORD *)this + 13);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    v6 = 0;
    if ( a2 && *((_BYTE *)a2 + 5920) )
    {
      v10 = *((_BYTE *)a2 + 5921);
      if ( v10 ? *((_QWORD *)a2 + 413) : *(_QWORD *)(*((_QWORD *)a2 + 741) + 56LL) )
      {
        v12 = v10 ? *((_QWORD *)a2 + 413) : *(_QWORD *)(*((_QWORD *)a2 + 741) + 56LL);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 232LL))(v12)
          && *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 240LL))(v12) + 8) )
        {
          v6 = 1;
        }
      }
    }
    v7 = *((_DWORD *)this + 34);
    v8 = 0LL;
    if ( !v7 )
      return 1;
    while ( *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8) || v6 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        return 1;
    }
  }
  return 0;
}
