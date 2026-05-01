/*
 * XREFs of ?ChangeRefcountedBooleanValue@@YA?AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z @ 0x18033E2A4
 * Callers:
 *     ?ChangePopupUIShowingCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x18033E210 (-ChangePopupUIShowingCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x18033E2E0 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ChangeRefcountedBooleanValue(unsigned __int64 *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r9d
  unsigned __int64 v5; // rax

  v3 = *a1;
  v4 = 0;
  if ( a2 )
  {
    if ( v3 <= a3 )
    {
      LOBYTE(v4) = v3 != 0;
      v5 = 0LL;
    }
    else
    {
      v5 = v3 - a3;
    }
  }
  else
  {
    LOBYTE(v4) = v3 == 0;
    v5 = a3 + v3;
  }
  *a1 = v5;
  return v4;
}
