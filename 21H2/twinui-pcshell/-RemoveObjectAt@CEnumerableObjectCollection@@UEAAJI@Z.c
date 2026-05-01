/*
 * XREFs of ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z @ 0x1801BFB60
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 */

__int64 __fastcall CEnumerableObjectCollection::RemoveObjectAt(CEnumerableObjectCollection *this, unsigned int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdx

  v2 = a2;
  v4 = *((_QWORD *)this + 6);
  if ( v2 >= v4 )
    return 2147650721LL;
  if ( v2 != v4 - 1 )
  {
    memmove_0(
      (void *)(*((_QWORD *)this + 5) + 8 * v2),
      (const void *)(*((_QWORD *)this + 5) + 8 * v2 + 8),
      8 * (v4 - v2) - 8);
    v4 = *((_QWORD *)this + 6);
  }
  *((_QWORD *)this + 6) = v4 - 1;
  return 0LL;
}
