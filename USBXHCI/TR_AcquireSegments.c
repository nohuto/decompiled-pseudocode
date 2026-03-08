/*
 * XREFs of TR_AcquireSegments @ 0x1C00225C8
 * Callers:
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 * Callees:
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 */

__int64 __fastcall TR_AcquireSegments(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  KIRQL v8; // al
  unsigned int v9; // edx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8

  v6 = TR_EnsureSegments(a1, a2, 1);
  v7 = v6;
  if ( v6 >= 0 && v6 != 259 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v9 = 0;
    *(_BYTE *)(a1 + 104) = v8;
    if ( a2 )
    {
      v10 = a1 + 208;
      do
      {
        v11 = *(_QWORD **)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10
          || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11)
          || (*(_QWORD *)v10 = v12, *(_QWORD *)(v12 + 8) = v10, v13 = *a3, *(__int64 **)(*a3 + 8) != a3) )
        {
          __fastfail(3u);
        }
        *v11 = v13;
        ++v9;
        v11[1] = a3;
        *(_QWORD *)(v13 + 8) = v11;
        *a3 = (__int64)v11;
      }
      while ( v9 < a2 );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v7;
}
