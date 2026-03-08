/*
 * XREFs of ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x180130D3E
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D8D4 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18027DA4C (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 */

__int64 __fastcall CAnimationInterpolator::TransformTime(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v5 = 0LL;
  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      v10 = *((_QWORD *)a2 + 2);
      if ( v10 )
        v5 = (a3 - *((_QWORD *)a2 + 1)) % v10;
      v5 += *((_QWORD *)a2 + 1) - v10;
      if ( v5 < *((_QWORD *)PrimitiveAtIndex + 1) )
        return *((_QWORD *)a2 + 1);
      break;
    case 5:
      v7 = *((_QWORD *)a2 + 1);
      v8 = a3 - v7;
      v9 = v7 - *((_QWORD *)PrimitiveAtIndex + 1);
      if ( v8 <= v9 )
        v9 = v8;
      return v7 - v9;
    case 6:
      return *((_QWORD *)a2 + 1);
  }
  return v5;
}
