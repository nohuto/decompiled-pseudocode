/*
 * XREFs of KiEnumerateCallback @ 0x1403D0130
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     KiEnumerateNmiSxCallback @ 0x1403D0194 (KiEnumerateNmiSxCallback.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, __int64 a3, unsigned __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  if ( !a1 )
    return KiEnumerateNmiSxCallback(a2, a3, a4);
  if ( a1 != 1 )
    return 0LL;
  v6 = *a2;
  if ( *a2 )
  {
    _m_prefetchw(&KiBoundsCallback);
    v9 = KiBoundsCallback;
    if ( ((unsigned __int64)v6 ^ KiBoundsCallback) >= 0xF )
    {
LABEL_11:
      ExReleaseRundownProtection_0(v6);
    }
    else
    {
      while ( 1 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(&KiBoundsCallback, v9 + 1, v9);
        if ( v10 == v9 )
          break;
        if ( ((unsigned __int64)v6 ^ v9) >= 0xF )
          goto LABEL_11;
      }
    }
    *a2 = 0LL;
    return 0LL;
  }
  v7 = ExReferenceCallBackBlock(&KiBoundsCallback);
  if ( !v7 )
    return 0LL;
  *a2 = v7;
  *a4 = v7[1].Count;
  return 1LL;
}
