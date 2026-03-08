/*
 * XREFs of ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C01C02F0
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BF8C0 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C000ABF0 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

void __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this)
{
  CCD_SET_STRING_ID *v2; // rcx
  CCD_SET_STRING_ID *v3; // rcx
  CCD_SET_STRING_ID *v4; // rcx
  CCD_SET_STRING_ID *v5; // rcx
  CCD_SET_STRING_ID *v6; // rcx

  v2 = (CCD_SET_STRING_ID *)*((_QWORD *)this + 7);
  if ( v2 )
    CCD_SET_STRING_ID::`scalar deleting destructor'(v2);
  v3 = (CCD_SET_STRING_ID *)*((_QWORD *)this + 8);
  if ( v3 )
    CCD_SET_STRING_ID::`scalar deleting destructor'(v3);
  v4 = (CCD_SET_STRING_ID *)*((_QWORD *)this + 9);
  if ( v4 )
    CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  v5 = (CCD_SET_STRING_ID *)*((_QWORD *)this + 10);
  if ( v5 )
    CCD_SET_STRING_ID::`scalar deleting destructor'(v5);
  v6 = (CCD_SET_STRING_ID *)*((_QWORD *)this + 11);
  if ( v6 )
    CCD_SET_STRING_ID::`scalar deleting destructor'(v6);
  CCD_SET_STRING_ID::_Cleanup(this);
}
