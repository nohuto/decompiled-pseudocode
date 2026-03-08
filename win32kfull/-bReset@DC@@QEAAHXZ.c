/*
 * XREFs of ?bReset@DC@@QEAAHXZ @ 0x1C00095B0
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0009468 (GreBeginGdiRenderingToDxSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bReset(DC *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 21);
  if ( v1 )
  {
    v5 = *((_QWORD *)this + 21);
    --*(_DWORD *)(v1 + 76);
    if ( !*(_DWORD *)(v5 + 76) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_QWORD *)this + 21) = 0LL;
    DC::vReleaseRao(this);
  }
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v5 = *((_QWORD *)this + 20);
    --*(_DWORD *)(v3 + 76);
    if ( !*(_DWORD *)(v5 + 76) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_QWORD *)this + 20) = 0LL;
    DC::vReleaseRao(this);
  }
  return 1LL;
}
