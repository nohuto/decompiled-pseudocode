/*
 * XREFs of ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C034ABD4
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0186C00 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0057938 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01D4758 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTCA::Destroy(DXGSYNCOBJECTCA *this)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  DXGADAPTERSYNCOBJECT *v5; // rsi
  void *v6; // rcx

  v2 = (_QWORD **)((char *)this + 296);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v5 = (DXGADAPTERSYNCOBJECT *)(v3 - 6);
    v4[1] = v2;
    DXGADAPTERSYNCOBJECT::Stop((DXGADAPTERSYNCOBJECT *)(v3 - 6));
    if ( v5 )
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v5);
  }
  v6 = (void *)*((_QWORD *)this + 39);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 39) = 0LL;
  }
}
