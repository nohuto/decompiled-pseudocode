/*
 * XREFs of GetLayeredOrRedirectedParent @ 0x1C00DF160
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetLayeredOrRedirectedParent(_QWORD *a1)
{
  _QWORD *v1; // rdx
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(v1[5] + 24LL);
      if ( (v2 & 0x80000) != 0 )
        break;
      if ( (v2 & 0x20000000) == 0 )
      {
        v1 = (_QWORD *)v1[13];
        if ( v1 )
          continue;
      }
      if ( !v1 )
        return v1;
      break;
    }
    if ( v1 != a1 )
    {
      v3 = v1[3];
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( v4 )
        {
          if ( v1 == *(_QWORD **)(v4 + 24) )
            return 0LL;
        }
      }
    }
  }
  return v1;
}
