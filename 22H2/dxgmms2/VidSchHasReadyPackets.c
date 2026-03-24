/*
 * XREFs of VidSchHasReadyPackets @ 0x1C0034E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011E50 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00128EC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  char v2; // bl
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v5; // r10
  _QWORD *k; // rax
  __int64 *m; // rdx
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v9[0] = a1 + 1712;
  v10 = 0;
  AcquireSpinLock::Acquire((Acquire *)v9);
  if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 432, 0LL, *(unsigned int *)(a1 + 76)) )
  {
    for ( i = *(_QWORD **)(a1 + 288); i != (_QWORD *)(a1 + 288); i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 4); j != i - 4; j = (_QWORD *)*j )
      {
        v5 = j[80];
        if ( (_QWORD *)v5 != j + 80 && (*(_DWORD *)(v5 + 16) != 4 || (*(_DWORD *)(v5 + 240) & 1) != 0) )
          goto LABEL_19;
      }
      for ( k = (_QWORD *)*(i - 2); k != i - 2; k = (_QWORD *)*k )
      {
        for ( m = (__int64 *)k[4]; m != k + 4; m = (__int64 *)*m )
        {
          if ( *((_DWORD *)m + 36) )
            goto LABEL_19;
        }
      }
    }
  }
  else
  {
LABEL_19:
    v2 = 1;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
  return v2;
}
