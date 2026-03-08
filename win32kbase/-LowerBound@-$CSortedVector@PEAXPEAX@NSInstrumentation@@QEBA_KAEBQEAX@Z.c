/*
 * XREFs of ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1C019B664
 * Callers:
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C019B3E0 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C019B554 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<void *,void *>::LowerBound(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v5 = 0LL;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * ((v2 >> 1) + v5)) >= *a2 )
    {
      v2 >>= 1;
    }
    else
    {
      v5 += (v2 >> 1) + 1;
      v2 += -1LL - (v2 >> 1);
    }
  }
  while ( v2 );
  return v5;
}
