/*
 * XREFs of ?AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1804F0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1804F2E58 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::AddItem(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // r14
  unsigned int v9; // ebx

  v8 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  v9 = CAppLayout::_AddItem(&a1[-5], a2, a3, a4, -2LL);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v9;
}
