/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800BC564
 * Callers:
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1800BC110 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800BC92C (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1800BC5F8 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CExpression::UnregisterSources(struct CBaseExpression **this)
{
  struct CBaseExpression *v2; // rsi
  __int64 i; // rdi
  struct CBaseExpression *v4; // r8
  __int64 v5; // rcx
  CResource *v6; // rcx

  if ( ((_BYTE)this[57] & 2) != 0 )
  {
    v2 = (struct CBaseExpression *)this;
    if ( this[56] )
      v2 = this[56];
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
    {
      v4 = this[54];
      v5 = *((_QWORD *)this[52] + *((unsigned int *)v4 + 6 * i + 5));
      if ( v5 )
      {
        v6 = *(CResource **)(v5 + 16);
        if ( v6 )
          CResource::RemoveSourceAnimation(v6, v2, *((_DWORD *)v4 + 6 * i));
      }
    }
    *((_BYTE *)this + 456) &= ~2u;
  }
}
