/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001368C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180014230 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180013730 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180027AB4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        CWindowData **a3,
        __int64 a4)
{
  CWindowData *v6; // rcx
  char v7; // bl
  CWindowData *v8; // rsi
  bool v9; // bp
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-18h]

  v6 = *a3;
  v7 = 1;
  v8 = (CWindowData *)*((_QWORD *)a2 + 8);
  v13 = *((_OWORD *)a2 + 4);
  v9 = *a3 != v8;
  if ( *a3 )
  {
    if ( *a3 == v8 || v6 == this )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CWindowData::RemoveSecondaryWindowRepresentation(v6, a2, *((unsigned int *)a3 + 2), a4);
  }
  if ( !v9 || v8 == this )
    v7 = 0;
  LOBYTE(a4) = v7;
  v10 = CWindowData::AddSecondaryWindowRepresentation(v8, a2, DWORD2(v13), a4);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1DE2u);
  return v11;
}
