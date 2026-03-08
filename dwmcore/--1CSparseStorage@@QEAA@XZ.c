/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x18009A24C
 * Callers:
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180099D04 (--1CBaseExpression@@MEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSparseStorage::~CSparseStorage(void **this)
{
  _BYTE *v1; // rax

  v1 = *this;
  if ( *this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *((_DWORD *)v1 + 1) )
    {
      if ( v1[8] )
        RaiseFailFastException(0LL, 0LL, 0);
    }
    operator delete(*this);
  }
}
