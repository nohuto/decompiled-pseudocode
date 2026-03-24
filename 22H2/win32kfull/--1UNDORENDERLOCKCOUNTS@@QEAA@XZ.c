/*
 * XREFs of ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C012B864
 * Callers:
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 104) = *(_DWORD *)this;
    *(_DWORD *)(*((_QWORD *)this + 1) + 108LL) = *((_DWORD *)this + 1);
  }
}
