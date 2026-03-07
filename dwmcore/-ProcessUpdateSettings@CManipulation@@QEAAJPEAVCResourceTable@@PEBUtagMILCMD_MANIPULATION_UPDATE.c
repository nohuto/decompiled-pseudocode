__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *a3,
        __int64 a4)
{
  int v4; // eax
  char updated; // al
  unsigned int v7; // r11d
  char v8; // r9
  __int64 v9; // r9
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // r9
  char v13; // si
  __int64 v14; // rcx
  unsigned __int8 v15; // di
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // r11d
  char v19; // bl
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  char v26; // r11

  v4 = *((_DWORD *)a3 + 2);
  LOBYTE(a4) = 0;
  if ( *((_DWORD *)this + 114) != v4 )
  {
    *((_DWORD *)this + 114) = v4;
    LOBYTE(a4) = 1;
  }
  updated = CManipulation::_UpdateChainingEnabled(this, 0LL, *((unsigned int *)a3 + 4), a4);
  LOBYTE(v9) = updated | v8;
  v11 = CManipulation::_UpdateChainingEnabled(v10, v7, *((unsigned int *)a3 + 5), v9);
  v13 = v12 | v11;
  v15 = CManipulation::_UpdateChainingEnabled(v14, 2LL, *((unsigned int *)a3 + 6), v12);
  LOBYTE(v16) = *((_BYTE *)a3 + 12) != 0;
  v19 = CManipulation::_UpdateInertiaEnabled(v17, 0LL, v16);
  LOBYTE(v20) = *((_BYTE *)a3 + 13) != 0;
  CManipulation::_UpdateInertiaEnabled(v21, v18, v20);
  LOBYTE(v22) = *((_BYTE *)a3 + 14) != 0;
  v24 = CManipulation::_UpdateInertiaEnabled(v23, 2LL, v22);
  if ( v15 | (unsigned __int8)(v19 | v26 | v13 | v24) )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 72LL))(v25, 10LL, v25);
  return 0LL;
}
